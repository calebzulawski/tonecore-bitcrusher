        org     x:$000
Knob_1  ds  1       ; 00h
Knob_2  ds  1       ; 01h
Knob_3  ds  1       ; 02h
Knob_4  ds  1       ; 03h
Knob_5  ds  1       ; 04h
Knob_6  ds  1       ; 05h

        org     p:$4E

        move    #$7fffff,a
        move    #$000002,b1
        add     b,a
        ;move	#$300000,a1
        ;move 	a1,x:Knob_1
        ;clr 	a
        ;move 	#$FFFFFF,a

        ;bsr 	Bitcrusher

        jmp 	Done

        ;include "effect.inc"

Done:
