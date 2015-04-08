        org     x:$000
Knob_1  ds  1       ; 00h
Knob_2  ds  1       ; 01h
Knob_3  ds  1       ; 02h
Knob_4  ds  1       ; 03h
Knob_5  ds  1       ; 04h
Knob_6  ds  1       ; 05h

        org     p:$4E

        move    #$44444,x0
        move    x0,x:Knob_2

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

        move    b,x0            ;x0 contains the number of bits to shift
        ;move    b,x:Debug_Read_from_DSP_3
        clr     b
        move    #$FFFFFF,b1     ;set b to FFFFFF000000 (bit mask to be shifted)
        asl     x0,b,b          ;shift b to position
        move    b1,x0            ;x0 contains bit mask

Done:
