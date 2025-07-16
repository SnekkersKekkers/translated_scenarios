BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,2,1,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("B040423100_04_000");
MsgDisp("Nanatsumori","My hair got messed up after all...
Haa.");
MsgSel("That was awesome! I want to ride it again!","Ugh, that was scary...","I wanted a bit more thrill...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChMouth(4,2);
    VoicePlay("B040423100_04_010");
    MsgDisp("Nanatsumori","Please feel free to, by yourself.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423100_04_020");
    MsgDisp("Nanatsumori","That was a nice shout wasn't it?
Good work to you too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,0,1);
    VoicePlay("B040423100_04_030");
    MsgDisp("Nanatsumori","Seriously?
That was quite enough in many ways.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
