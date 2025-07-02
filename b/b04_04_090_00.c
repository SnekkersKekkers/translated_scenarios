BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040409000_04_000");
MsgDisp("Nanatsumori","Uwah...
it's so hard to breathe...");
MsgSel("This flower is giving off an impressive smell...","t's humid, isn't it?","I wonder where the carnivorous plants are?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040409000_04_010");
    MsgDisp("Nanatsumori","...Really.
It has a beautiful smell,
a bit different to perfume.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040409000_04_020");
    MsgDisp("Nanatsumori","Right.
I don't understand how plants feel.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040409000_04_030");
    MsgDisp("Nanatsumori","You sure are strange.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
