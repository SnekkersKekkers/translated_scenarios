BGMPlay("BGM_PLACE_SHOP",0.01);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040401000_04_000");
MsgDisp("Nanatsumori","Try pairing it with this.
I think it'll look good.");
MsgSel("Really, I might buy it!","I wonder...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040401000_04_010");
    MsgDisp("Nanatsumori","See, it's nice. 
It suits, it suits.
...It's cute.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040401000_04_020");
    MsgDisp("Nanatsumori","...Huh?
Is there something bothering you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(4,1);
    ChMouth(4,1);
    ChMotion(4,4,1);
    VoicePlay("B040401000_04_030");
    MsgDisp("Nanatsumori","Shh, you're being too loud∈
What's going on...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
