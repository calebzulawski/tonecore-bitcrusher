        org     x:$000
Knob_1  ds  1       ; 00h
Knob_2  ds  1       ; 01h
Knob_3  ds  1       ; 02h
Knob_4  ds  1       ; 03h
Knob_5  ds  1       ; 04h
Knob_6  ds  1       ; 05h

        org     p:$4E

        clr     a
        clr     b
        move    #.1,x0
        move    #1221,a0
        move    #1221,b0
        do      #5,div_ret
        div     x0,b
div_ret nop

Done:
