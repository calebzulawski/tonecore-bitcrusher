        org     x:$000
Knob_1  ds  1       ; 00h
Knob_2  ds  1       ; 01h
Knob_3  ds  1       ; 02h
Knob_4  ds  1       ; 03h
Knob_5  ds  1       ; 04h
Knob_6  ds  1       ; 05h

        org     p:$4E

        include "effect.inc"

        move	#$6,x:$000
        clr 	a
        move 	#$FFFFFF,a1

        bsr 	Bitcrusher