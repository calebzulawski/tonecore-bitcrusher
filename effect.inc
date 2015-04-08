;Knob_1: Mix
;Knob_2: Crush
;Knob_3: Resample freq
;Knob_4: LFO depth
;Knob_5: LFO speed

Bitcrusher:
        move    a,y:Current_Sample      ;store current sample

        bsr     Read_LFO
        bsr     Resample
        bsr     Reduce_Depth
        bsr     Mix

        move    y:LFO_Value,x0
        move    x0,x:Debug_Read_from_DSP_2
  
        move    y:Modified_Sample,a     ;possibly remove after debug
        rts        

Read_LFO:
        move    #$100,m1        ;confirm correct mod value
        move    #$100,n1        ;confirm correct offset
        clr     a
        move    y:LFO_Counter,a0
        inc     a
        asl     #24,a,a
        move    a1,y:LFO_Counter
        move    #1221,x0        ;value makes LFO max at about 32Hz
        move    x:Knob_5,b
        div     x0,b
        cmp     b,a
        bsge    Increment_LFO
        rts

Increment_LFO:
        move    y:(r1)+,y0      ;dummy move to increment
        move    y:(r1)+n1,y0    ;read from wavetable with offset n1
        move    y0,y:LFO_Value  ;write to y:LFO_Value
        move    #$0,y0          ;clear LFO_Counter
        move    y0,y:LFO_Counter
        rts
        
Resample:
        clr     b
        move    x:Knob_3,b
        move    x:Switch_1,a
        move    #$000001,x0
        cmp     x0,a
        bseq    Modify_Knob_LFO
        clr     a
        move    y:Resample_Counter,a0
        asr     #15,b,b                 ;Make knob value from 0 to 256
        move    b1,x:Debug_Read_from_DSP_1
        cmp     b,a
        bsge    Load_Next_Sample
        move    y:Stored_Sample,y0
        move    y0,y:Modified_Sample
        rts

Modify_Knob_LFO:
        move    x:Knob_4,x0
        move    x:LFO_Value,x1
        mpy     x0,x1,a
        add     a,b

Load_Next_Sample:
        move    y:Current_Sample,y0
        move    y0,y:Stored_Sample      ;Update sample
        move    #$000000,y0
        move    y0,y:Resample_Counter   ;Reset Resample_Counter
        rts

Reduce_Depth:
        clr     a
        clr     b                       ;b contains bits to remove 
        inc     b

        ;determine bit depth reduction
        move    #$1,a1
        move    a1,x0
incb    macro   cmpval
        ;The macro increments b if the knob is greater than or equal to the value cmpval
        move    x:Knob_2,a
        cmp     cmpval,a
        add     x0,b    ifge
        endm

        incb    #$55555
        incb    #$aaaaa
        incb    #$fffff
        incb    #$155554
        incb    #$1aaaa9
        incb    #$1ffffe
        incb    #$255553
        incb    #$2aaaa8
        incb    #$2ffffd
        incb    #$355552
        incb    #$3aaaa7
        incb    #$3ffffc
        incb    #$455551
        incb    #$4aaaa6
        incb    #$4ffffb
        incb    #$555550
        incb    #$5aaaa5
        incb    #$5ffffa
        incb    #$65554f
        incb    #$6aaaa4
        incb    #$6ffff9
        incb    #$75554e
        incb    #$7aaaa3

        move    b1,x0           ;x0 contains the number of bits to shift
        move    b,x:Debug_Read_from_DSP_3
        clr     b
        move    #$FFFFFF,b1     ;set b to FFFFFF000000 (bit mask to be shifted)
        asl     x0,b,b          ;shift b to position
        move    b1,x0           ;x0 contains bit mask
        move    x0,x:Debug_Read_from_DSP_4
        move    y:Modified_Sample,a       ;a contains sample
        and     x0,a            ;multiply by bit mask
        move    a,y:Modified_Sample
        rts

Mix:
        move    y:Modified_Sample,a
        ;multiply wet value by knob value
        move    a,x0
        move    x:Knob_1,x1
        clr     a
        mac     x0,x1,a

        ;multiply dry value by 1 minus knob value and accumulate
        move    y:Current_Sample,y0
        move    #$7fffff,b
        sub     x1,b
        move    b,y1
        mac     y0,y1,a
        move    a,y:Modified_Sample
        rts
