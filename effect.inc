Bitcrusher:
        move    a,y:Current_Sample            ;store current sample

        clr     a
        clr     b
        move    y:Resample_Counter,a0
        move    x:Knob_1,b0
        asr     #15,b,b         ;Make knob value from 0 to 255
        cmp     b,a
        bsgt    Load_Next_Sample
        bsr     Apply_Effect
        
        


Apply_Effect:
        clr     a
        clr     b               ;b contains bits to remove 
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

        move    b,x0            ;x0 contains the number of bits to shift
        clr     b
        move    #$FFFFFF,b1     ;set b to FFFFFF000000 (bit mask to be shifted)
        asl     x0,b,b          ;shift b to position
        move    b,x0            ;x0 contains bit mask
        move    y:Stored_Sample,a       ;a contains sample
        and     x0,a            ;multiply by bit mask
        rts

Load_Next_Sample:
        move    y:Current_Sample,y:Stored_Sample        ;Update sample
        move    #0,y:Resample_Counter                   ;Reset Resample_Counter
        rts
