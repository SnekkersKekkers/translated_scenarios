BGOpen("tr230",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040421201_04_000");
MsgDisp("Nanatsumori","This is a limited edition t-shirt.
Should we buy some matching ones?");
MsgSel("I don't believe I'll be able to pull that off...","It's embarrassing to match","Of course!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("B040421201_04_010");
    MsgDisp("Nanatsumori","Well, it is a t-shirt after all.
It's not really stylish or anything.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040421201_04_020");
    MsgDisp("Nanatsumori","Are you shy?
Cute.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040421201_04_030");
    MsgDisp("Nanatsumori","Alright! Then, let's choose carefully.
That's right... if it's with you...");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
