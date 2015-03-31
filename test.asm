        org     x:$000
Knob_1  ds  1       ; 00h
Knob_2  ds  1       ; 01h
Knob_3  ds  1       ; 02h
Knob_4  ds  1       ; 03h
Knob_5  ds  1       ; 04h
Knob_6  ds  1       ; 05h

        org     p:$4E

        move 	#255,b0
        move 	#133,a0
        cmp 	a,b
        bsle 	Thing
        ;move	#$300000,a1
        ;move 	a1,x:Knob_1
        ;clr 	a
        ;move 	#$FFFFFF,a

        ;bsr 	Bitcrusher

        jmp 	Done

        ;include "effect.inc"

Thing:
		move #$123456,a
		rts

Done:
