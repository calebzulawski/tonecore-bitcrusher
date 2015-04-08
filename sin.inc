WaveAdd EQU     $100
; Begin sin wavetable at $100
Wavetable:
        move    #$000000,y0
        move    y0,y:WaveAdd           ; +0.0000000000
        move    #$03242B,y0
        move    y0,y:WaveAdd+1         ; +0.0245412998
        move    #$0647D9,y0
        move    y0,y:WaveAdd+2         ; +0.0490676016
        move    #$096A90,y0
        move    y0,y:WaveAdd+3         ; +0.0735644996
        move    #$0C8BD3,y0
        move    y0,y:WaveAdd+4         ; +0.0980170965
        move    #$0FAB27,y0
        move    y0,y:WaveAdd+5         ; +0.1224106997
        move    #$12C810,y0
        move    y0,y:WaveAdd+6         ; +0.1467303932
        move    #$15E214,y0
        move    y0,y:WaveAdd+7         ; +0.1709619015
        move    #$18F8B8,y0
        move    y0,y:WaveAdd+8         ; +0.1950902939
        move    #$1C0B82,y0
        move    y0,y:WaveAdd+9         ; +0.2191012055
        move    #$1F19F9,y0
        move    y0,y:WaveAdd+10         ; +0.2429800928
        move    #$2223A5,y0
        move    y0,y:WaveAdd+11         ; +0.2667128146
        move    #$25280C,y0
        move    y0,y:WaveAdd+12         ; +0.2902846038
        move    #$2826B9,y0
        move    y0,y:WaveAdd+13         ; +0.3136816919
        move    #$2B1F35,y0
        move    y0,y:WaveAdd+14         ; +0.3368898928
        move    #$2E110A,y0
        move    y0,y:WaveAdd+15         ; +0.3598949909
        move    #$30FBC5,y0
        move    y0,y:WaveAdd+16         ; +0.3826833963
        move    #$33DEF3,y0
        move    y0,y:WaveAdd+17         ; +0.4052414000
        move    #$36BA20,y0
        move    y0,y:WaveAdd+18         ; +0.4275551140
        move    #$398CDD,y0
        move    y0,y:WaveAdd+19         ; +0.4496113062
        move    #$3C56BA,y0
        move    y0,y:WaveAdd+20         ; +0.4713967144
        move    #$3F174A,y0
        move    y0,y:WaveAdd+21         ; +0.4928981960
        move    #$41CE1E,y0
        move    y0,y:WaveAdd+22         ; +0.5141026974
        move    #$447ACD,y0
        move    y0,y:WaveAdd+23         ; +0.5349975824
        move    #$471CED,y0
        move    y0,y:WaveAdd+24         ; +0.5555701852
        move    #$49B415,y0
        move    y0,y:WaveAdd+25         ; +0.5758082271
        move    #$4C3FE0,y0
        move    y0,y:WaveAdd+26         ; +0.5956993103
        move    #$4EBFE9,y0
        move    y0,y:WaveAdd+27         ; +0.6152315736
        move    #$5133CD,y0
        move    y0,y:WaveAdd+28         ; +0.6343932748
        move    #$539B2B,y0
        move    y0,y:WaveAdd+29         ; +0.6531729102
        move    #$55F5A5,y0
        move    y0,y:WaveAdd+30         ; +0.6715589762
        move    #$5842DD,y0
        move    y0,y:WaveAdd+31         ; +0.6895405054
        move    #$5A827A,y0
        move    y0,y:WaveAdd+32         ; +0.7071068287
        move    #$5CB421,y0
        move    y0,y:WaveAdd+33         ; +0.7242470980
        move    #$5ED77D,y0
        move    y0,y:WaveAdd+34         ; +0.7409511805
        move    #$60EC38,y0
        move    y0,y:WaveAdd+35         ; +0.7572088242
        move    #$62F202,y0
        move    y0,y:WaveAdd+36         ; +0.7730104923
        move    #$64E889,y0
        move    y0,y:WaveAdd+37         ; +0.7883464098
        move    #$66CF81,y0
        move    y0,y:WaveAdd+38         ; +0.8032075167
        move    #$68A69F,y0
        move    y0,y:WaveAdd+39         ; +0.8175848722
        move    #$6A6D99,y0
        move    y0,y:WaveAdd+40         ; +0.8314697146
        move    #$6C2429,y0
        move    y0,y:WaveAdd+41         ; +0.8448535204
        move    #$6DCA0D,y0
        move    y0,y:WaveAdd+42         ; +0.8577286005
        move    #$6F5F03,y0
        move    y0,y:WaveAdd+43         ; +0.8700870275
        move    #$70E2CC,y0
        move    y0,y:WaveAdd+44         ; +0.8819212914
        move    #$72552D,y0
        move    y0,y:WaveAdd+45         ; +0.8932244182
        move    #$73B5EC,y0
        move    y0,y:WaveAdd+46         ; +0.9039893150
        move    #$7504D3,y0
        move    y0,y:WaveAdd+47         ; +0.9142097235
        move    #$7641AF,y0
        move    y0,y:WaveAdd+48         ; +0.9238795042
        move    #$776C4F,y0
        move    y0,y:WaveAdd+49         ; +0.9329928160
        move    #$788484,y0
        move    y0,y:WaveAdd+50         ; +0.9415441155
        move    #$798A24,y0
        move    y0,y:WaveAdd+51         ; +0.9495282173
        move    #$7A7D05,y0
        move    y0,y:WaveAdd+52         ; +0.9569402933
        move    #$7B5D04,y0
        move    y0,y:WaveAdd+53         ; +0.9637761116
        move    #$7C29FC,y0
        move    y0,y:WaveAdd+54         ; +0.9700313210
        move    #$7CE3CF,y0
        move    y0,y:WaveAdd+55         ; +0.9757022262
        move    #$7D8A5F,y0
        move    y0,y:WaveAdd+56         ; +0.9807853103
        move    #$7E1D94,y0
        move    y0,y:WaveAdd+57         ; +0.9852777123
        move    #$7E9D56,y0
        move    y0,y:WaveAdd+58         ; +0.9891765118
        move    #$7F0992,y0
        move    y0,y:WaveAdd+59         ; +0.9924796224
        move    #$7F6237,y0
        move    y0,y:WaveAdd+60         ; +0.9951847792
        move    #$7FA737,y0
        move    y0,y:WaveAdd+61         ; +0.9972904921
        move    #$7FD888,y0
        move    y0,y:WaveAdd+62         ; +0.9987955093
        move    #$7FF622,y0
        move    y0,y:WaveAdd+63         ; +0.9996988773
        move    #$7FFFFF,y0
        move    y0,y:WaveAdd+64         ; +0.9999998808
        move    #$7FF622,y0
        move    y0,y:WaveAdd+65         ; +0.9996988773
        move    #$7FD888,y0
        move    y0,y:WaveAdd+66         ; +0.9987955093
        move    #$7FA737,y0
        move    y0,y:WaveAdd+67         ; +0.9972904921
        move    #$7F6237,y0
        move    y0,y:WaveAdd+68         ; +0.9951847792
        move    #$7F0992,y0
        move    y0,y:WaveAdd+69         ; +0.9924796224
        move    #$7E9D56,y0
        move    y0,y:WaveAdd+70         ; +0.9891765118
        move    #$7E1D94,y0
        move    y0,y:WaveAdd+71         ; +0.9852777123
        move    #$7D8A5F,y0
        move    y0,y:WaveAdd+72         ; +0.9807853103
        move    #$7CE3CF,y0
        move    y0,y:WaveAdd+73         ; +0.9757022262
        move    #$7C29FC,y0
        move    y0,y:WaveAdd+74         ; +0.9700313210
        move    #$7B5D04,y0
        move    y0,y:WaveAdd+75         ; +0.9637761116
        move    #$7A7D05,y0
        move    y0,y:WaveAdd+76         ; +0.9569402933
        move    #$798A24,y0
        move    y0,y:WaveAdd+77         ; +0.9495282173
        move    #$788484,y0
        move    y0,y:WaveAdd+78         ; +0.9415441155
        move    #$776C4F,y0
        move    y0,y:WaveAdd+79         ; +0.9329928160
        move    #$7641AF,y0
        move    y0,y:WaveAdd+80         ; +0.9238795042
        move    #$7504D3,y0
        move    y0,y:WaveAdd+81         ; +0.9142097235
        move    #$73B5EC,y0
        move    y0,y:WaveAdd+82         ; +0.9039893150
        move    #$72552D,y0
        move    y0,y:WaveAdd+83         ; +0.8932244182
        move    #$70E2CC,y0
        move    y0,y:WaveAdd+84         ; +0.8819212914
        move    #$6F5F03,y0
        move    y0,y:WaveAdd+85         ; +0.8700870275
        move    #$6DCA0D,y0
        move    y0,y:WaveAdd+86         ; +0.8577286005
        move    #$6C2429,y0
        move    y0,y:WaveAdd+87         ; +0.8448535204
        move    #$6A6D99,y0
        move    y0,y:WaveAdd+88         ; +0.8314697146
        move    #$68A69F,y0
        move    y0,y:WaveAdd+89         ; +0.8175848722
        move    #$66CF81,y0
        move    y0,y:WaveAdd+90         ; +0.8032075167
        move    #$64E889,y0
        move    y0,y:WaveAdd+91         ; +0.7883464098
        move    #$62F202,y0
        move    y0,y:WaveAdd+92         ; +0.7730104923
        move    #$60EC38,y0
        move    y0,y:WaveAdd+93         ; +0.7572088242
        move    #$5ED77D,y0
        move    y0,y:WaveAdd+94         ; +0.7409511805
        move    #$5CB421,y0
        move    y0,y:WaveAdd+95         ; +0.7242470980
        move    #$5A827A,y0
        move    y0,y:WaveAdd+96         ; +0.7071068287
        move    #$5842DD,y0
        move    y0,y:WaveAdd+97         ; +0.6895405054
        move    #$55F5A5,y0
        move    y0,y:WaveAdd+98         ; +0.6715589762
        move    #$539B2B,y0
        move    y0,y:WaveAdd+99         ; +0.6531729102
        move    #$5133CD,y0
        move    y0,y:WaveAdd+100         ; +0.6343932748
        move    #$4EBFE9,y0
        move    y0,y:WaveAdd+101         ; +0.6152315736
        move    #$4C3FE0,y0
        move    y0,y:WaveAdd+102         ; +0.5956993103
        move    #$49B415,y0
        move    y0,y:WaveAdd+103         ; +0.5758082271
        move    #$471CED,y0
        move    y0,y:WaveAdd+104         ; +0.5555701852
        move    #$447ACD,y0
        move    y0,y:WaveAdd+105         ; +0.5349975824
        move    #$41CE1E,y0
        move    y0,y:WaveAdd+106         ; +0.5141026974
        move    #$3F174A,y0
        move    y0,y:WaveAdd+107         ; +0.4928981960
        move    #$3C56BA,y0
        move    y0,y:WaveAdd+108         ; +0.4713967144
        move    #$398CDD,y0
        move    y0,y:WaveAdd+109         ; +0.4496113062
        move    #$36BA20,y0
        move    y0,y:WaveAdd+110         ; +0.4275551140
        move    #$33DEF3,y0
        move    y0,y:WaveAdd+111         ; +0.4052414000
        move    #$30FBC5,y0
        move    y0,y:WaveAdd+112         ; +0.3826833963
        move    #$2E110A,y0
        move    y0,y:WaveAdd+113         ; +0.3598949909
        move    #$2B1F35,y0
        move    y0,y:WaveAdd+114         ; +0.3368898928
        move    #$2826B9,y0
        move    y0,y:WaveAdd+115         ; +0.3136816919
        move    #$25280C,y0
        move    y0,y:WaveAdd+116         ; +0.2902846038
        move    #$2223A5,y0
        move    y0,y:WaveAdd+117         ; +0.2667128146
        move    #$1F19F9,y0
        move    y0,y:WaveAdd+118         ; +0.2429800928
        move    #$1C0B82,y0
        move    y0,y:WaveAdd+119         ; +0.2191012055
        move    #$18F8B8,y0
        move    y0,y:WaveAdd+120         ; +0.1950902939
        move    #$15E214,y0
        move    y0,y:WaveAdd+121         ; +0.1709619015
        move    #$12C810,y0
        move    y0,y:WaveAdd+122         ; +0.1467303932
        move    #$0FAB27,y0
        move    y0,y:WaveAdd+123         ; +0.1224106997
        move    #$0C8BD3,y0
        move    y0,y:WaveAdd+124         ; +0.0980170965
        move    #$096A90,y0
        move    y0,y:WaveAdd+125         ; +0.0735644996
        move    #$0647D9,y0
        move    y0,y:WaveAdd+126         ; +0.0490676016
        move    #$03242B,y0
        move    y0,y:WaveAdd+127         ; +0.0245412998
        move    #$000000,y0
        move    y0,y:WaveAdd+128         ; +0.0000000000
        move    #$FCDBD5,y0
        move    y0,y:WaveAdd+129         ; -0.0245412998
        move    #$F9B827,y0
        move    y0,y:WaveAdd+130         ; -0.0490676016
        move    #$F69570,y0
        move    y0,y:WaveAdd+131         ; -0.0735644996
        move    #$F3742D,y0
        move    y0,y:WaveAdd+132         ; -0.0980170965
        move    #$F054D9,y0
        move    y0,y:WaveAdd+133         ; -0.1224106997
        move    #$ED37F0,y0
        move    y0,y:WaveAdd+134         ; -0.1467303932
        move    #$EA1DEC,y0
        move    y0,y:WaveAdd+135         ; -0.1709619015
        move    #$E70748,y0
        move    y0,y:WaveAdd+136         ; -0.1950902939
        move    #$E3F47E,y0
        move    y0,y:WaveAdd+137         ; -0.2191012055
        move    #$E0E607,y0
        move    y0,y:WaveAdd+138         ; -0.2429800928
        move    #$DDDC5B,y0
        move    y0,y:WaveAdd+139         ; -0.2667128146
        move    #$DAD7F4,y0
        move    y0,y:WaveAdd+140         ; -0.2902846038
        move    #$D7D947,y0
        move    y0,y:WaveAdd+141         ; -0.3136816919
        move    #$D4E0CB,y0
        move    y0,y:WaveAdd+142         ; -0.3368898928
        move    #$D1EEF6,y0
        move    y0,y:WaveAdd+143         ; -0.3598949909
        move    #$CF043B,y0
        move    y0,y:WaveAdd+144         ; -0.3826833963
        move    #$CC210D,y0
        move    y0,y:WaveAdd+145         ; -0.4052414000
        move    #$C945E0,y0
        move    y0,y:WaveAdd+146         ; -0.4275551140
        move    #$C67323,y0
        move    y0,y:WaveAdd+147         ; -0.4496113062
        move    #$C3A946,y0
        move    y0,y:WaveAdd+148         ; -0.4713967144
        move    #$C0E8B6,y0
        move    y0,y:WaveAdd+149         ; -0.4928981960
        move    #$BE31E2,y0
        move    y0,y:WaveAdd+150         ; -0.5141026974
        move    #$BB8533,y0
        move    y0,y:WaveAdd+151         ; -0.5349975824
        move    #$B8E313,y0
        move    y0,y:WaveAdd+152         ; -0.5555701852
        move    #$B64BEB,y0
        move    y0,y:WaveAdd+153         ; -0.5758082271
        move    #$B3C020,y0
        move    y0,y:WaveAdd+154         ; -0.5956993103
        move    #$B14017,y0
        move    y0,y:WaveAdd+155         ; -0.6152315736
        move    #$AECC33,y0
        move    y0,y:WaveAdd+156         ; -0.6343932748
        move    #$AC64D5,y0
        move    y0,y:WaveAdd+157         ; -0.6531729102
        move    #$AA0A5B,y0
        move    y0,y:WaveAdd+158         ; -0.6715589762
        move    #$A7BD23,y0
        move    y0,y:WaveAdd+159         ; -0.6895405054
        move    #$A57D86,y0
        move    y0,y:WaveAdd+160         ; -0.7071068287
        move    #$A34BDF,y0
        move    y0,y:WaveAdd+161         ; -0.7242470980
        move    #$A12883,y0
        move    y0,y:WaveAdd+162         ; -0.7409511805
        move    #$9F13C8,y0
        move    y0,y:WaveAdd+163         ; -0.7572088242
        move    #$9D0DFE,y0
        move    y0,y:WaveAdd+164         ; -0.7730104923
        move    #$9B1777,y0
        move    y0,y:WaveAdd+165         ; -0.7883464098
        move    #$99307F,y0
        move    y0,y:WaveAdd+166         ; -0.8032075167
        move    #$975961,y0
        move    y0,y:WaveAdd+167         ; -0.8175848722
        move    #$959267,y0
        move    y0,y:WaveAdd+168         ; -0.8314697146
        move    #$93DBD7,y0
        move    y0,y:WaveAdd+169         ; -0.8448535204
        move    #$9235F3,y0
        move    y0,y:WaveAdd+170         ; -0.8577286005
        move    #$90A0FD,y0
        move    y0,y:WaveAdd+171         ; -0.8700870275
        move    #$8F1D34,y0
        move    y0,y:WaveAdd+172         ; -0.8819212914
        move    #$8DAAD3,y0
        move    y0,y:WaveAdd+173         ; -0.8932244182
        move    #$8C4A14,y0
        move    y0,y:WaveAdd+174         ; -0.9039893150
        move    #$8AFB2D,y0
        move    y0,y:WaveAdd+175         ; -0.9142097235
        move    #$89BE51,y0
        move    y0,y:WaveAdd+176         ; -0.9238795042
        move    #$8893B1,y0
        move    y0,y:WaveAdd+177         ; -0.9329928160
        move    #$877B7C,y0
        move    y0,y:WaveAdd+178         ; -0.9415441155
        move    #$8675DC,y0
        move    y0,y:WaveAdd+179         ; -0.9495282173
        move    #$8582FB,y0
        move    y0,y:WaveAdd+180         ; -0.9569402933
        move    #$84A2FC,y0
        move    y0,y:WaveAdd+181         ; -0.9637761116
        move    #$83D604,y0
        move    y0,y:WaveAdd+182         ; -0.9700313210
        move    #$831C31,y0
        move    y0,y:WaveAdd+183         ; -0.9757022262
        move    #$8275A1,y0
        move    y0,y:WaveAdd+184         ; -0.9807853103
        move    #$81E26C,y0
        move    y0,y:WaveAdd+185         ; -0.9852777123
        move    #$8162AA,y0
        move    y0,y:WaveAdd+186         ; -0.9891765118
        move    #$80F66E,y0
        move    y0,y:WaveAdd+187         ; -0.9924796224
        move    #$809DC9,y0
        move    y0,y:WaveAdd+188         ; -0.9951847792
        move    #$8058C9,y0
        move    y0,y:WaveAdd+189         ; -0.9972904921
        move    #$802778,y0
        move    y0,y:WaveAdd+190         ; -0.9987955093
        move    #$8009DE,y0
        move    y0,y:WaveAdd+191         ; -0.9996988773
        move    #$800000,y0
        move    y0,y:WaveAdd+192         ; -1.0000000000
        move    #$8009DE,y0
        move    y0,y:WaveAdd+193         ; -0.9996988773
        move    #$802778,y0
        move    y0,y:WaveAdd+194         ; -0.9987955093
        move    #$8058C9,y0
        move    y0,y:WaveAdd+195         ; -0.9972904921
        move    #$809DC9,y0
        move    y0,y:WaveAdd+196         ; -0.9951847792
        move    #$80F66E,y0
        move    y0,y:WaveAdd+197         ; -0.9924796224
        move    #$8162AA,y0
        move    y0,y:WaveAdd+198         ; -0.9891765118
        move    #$81E26C,y0
        move    y0,y:WaveAdd+199         ; -0.9852777123
        move    #$8275A1,y0
        move    y0,y:WaveAdd+200         ; -0.9807853103
        move    #$831C31,y0
        move    y0,y:WaveAdd+201         ; -0.9757022262
        move    #$83D604,y0
        move    y0,y:WaveAdd+202         ; -0.9700313210
        move    #$84A2FC,y0
        move    y0,y:WaveAdd+203         ; -0.9637761116
        move    #$8582FB,y0
        move    y0,y:WaveAdd+204         ; -0.9569402933
        move    #$8675DC,y0
        move    y0,y:WaveAdd+205         ; -0.9495282173
        move    #$877B7C,y0
        move    y0,y:WaveAdd+206         ; -0.9415441155
        move    #$8893B1,y0
        move    y0,y:WaveAdd+207         ; -0.9329928160
        move    #$89BE51,y0
        move    y0,y:WaveAdd+208         ; -0.9238795042
        move    #$8AFB2D,y0
        move    y0,y:WaveAdd+209         ; -0.9142097235
        move    #$8C4A14,y0
        move    y0,y:WaveAdd+210         ; -0.9039893150
        move    #$8DAAD3,y0
        move    y0,y:WaveAdd+211         ; -0.8932244182
        move    #$8F1D34,y0
        move    y0,y:WaveAdd+212         ; -0.8819212914
        move    #$90A0FD,y0
        move    y0,y:WaveAdd+213         ; -0.8700870275
        move    #$9235F3,y0
        move    y0,y:WaveAdd+214         ; -0.8577286005
        move    #$93DBD7,y0
        move    y0,y:WaveAdd+215         ; -0.8448535204
        move    #$959267,y0
        move    y0,y:WaveAdd+216         ; -0.8314697146
        move    #$975961,y0
        move    y0,y:WaveAdd+217         ; -0.8175848722
        move    #$99307F,y0
        move    y0,y:WaveAdd+218         ; -0.8032075167
        move    #$9B1777,y0
        move    y0,y:WaveAdd+219         ; -0.7883464098
        move    #$9D0DFE,y0
        move    y0,y:WaveAdd+220         ; -0.7730104923
        move    #$9F13C8,y0
        move    y0,y:WaveAdd+221         ; -0.7572088242
        move    #$A12883,y0
        move    y0,y:WaveAdd+222         ; -0.7409511805
        move    #$A34BDF,y0
        move    y0,y:WaveAdd+223         ; -0.7242470980
        move    #$A57D86,y0
        move    y0,y:WaveAdd+224         ; -0.7071068287
        move    #$A7BD23,y0
        move    y0,y:WaveAdd+225         ; -0.6895405054
        move    #$AA0A5B,y0
        move    y0,y:WaveAdd+226         ; -0.6715589762
        move    #$AC64D5,y0
        move    y0,y:WaveAdd+227         ; -0.6531729102
        move    #$AECC33,y0
        move    y0,y:WaveAdd+228         ; -0.6343932748
        move    #$B14017,y0
        move    y0,y:WaveAdd+229         ; -0.6152315736
        move    #$B3C020,y0
        move    y0,y:WaveAdd+230         ; -0.5956993103
        move    #$B64BEB,y0
        move    y0,y:WaveAdd+231         ; -0.5758082271
        move    #$B8E313,y0
        move    y0,y:WaveAdd+232         ; -0.5555701852
        move    #$BB8533,y0
        move    y0,y:WaveAdd+233         ; -0.5349975824
        move    #$BE31E2,y0
        move    y0,y:WaveAdd+234         ; -0.5141026974
        move    #$C0E8B6,y0
        move    y0,y:WaveAdd+235         ; -0.4928981960
        move    #$C3A946,y0
        move    y0,y:WaveAdd+236         ; -0.4713967144
        move    #$C67323,y0
        move    y0,y:WaveAdd+237         ; -0.4496113062
        move    #$C945E0,y0
        move    y0,y:WaveAdd+238         ; -0.4275551140
        move    #$CC210D,y0
        move    y0,y:WaveAdd+239         ; -0.4052414000
        move    #$CF043B,y0
        move    y0,y:WaveAdd+240         ; -0.3826833963
        move    #$D1EEF6,y0
        move    y0,y:WaveAdd+241         ; -0.3598949909
        move    #$D4E0CB,y0
        move    y0,y:WaveAdd+242         ; -0.3368898928
        move    #$D7D947,y0
        move    y0,y:WaveAdd+243         ; -0.3136816919
        move    #$DAD7F4,y0
        move    y0,y:WaveAdd+244         ; -0.2902846038
        move    #$DDDC5B,y0
        move    y0,y:WaveAdd+245         ; -0.2667128146
        move    #$E0E607,y0
        move    y0,y:WaveAdd+246         ; -0.2429800928
        move    #$E3F47E,y0
        move    y0,y:WaveAdd+247         ; -0.2191012055
        move    #$E70748,y0
        move    y0,y:WaveAdd+248         ; -0.1950902939
        move    #$EA1DEC,y0
        move    y0,y:WaveAdd+249         ; -0.1709619015
        move    #$ED37F0,y0
        move    y0,y:WaveAdd+250         ; -0.1467303932
        move    #$F054D9,y0
        move    y0,y:WaveAdd+251         ; -0.1224106997
        move    #$F3742D,y0
        move    y0,y:WaveAdd+252         ; -0.0980170965
        move    #$F69570,y0
        move    y0,y:WaveAdd+253         ; -0.0735644996
        move    #$F9B827,y0
        move    y0,y:WaveAdd+254         ; -0.0490676016
        move    #$FCDBD5,y0
        move    y0,y:WaveAdd+255         ; -0.0245412998
		rts