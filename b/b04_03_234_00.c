BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,4,4,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323400_03_000");
MsgDisp("Honda","Ahー, hey, it's spinning too much...");
MsgSel("I'm excited like a kid!","I could feel the centrifugal force","The world...is spinning...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChSet(3,2);
    VoicePlay("B040323400_03_010");
    MsgDisp("Honda","I've decided...next time...
I'll go on a separate cup to you.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040323400_03_020");
    MsgDisp("Honda","Yes, thanks to you, I've realized that my
ear canals are sensitive.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,3);
    VoicePlay("B040323400_03_030");
    MsgDisp("Honda","You're...spinning...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
