BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323201_03_000");
MsgDisp("Honda","10 minutes, 33 seconds!
Isn't this the longest attraction you can
enjoy at the amusement park?");
MsgSel("It felt shorter than that though","It's not about the duration, it's about the quality","The haunted house is long too");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040323201_03_010");
    MsgDisp("Honda","Rightー! If it felt short to you, you
must've enjoyed it!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040323201_03_020");
    MsgDisp("Honda","That's a great argument...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,1);
    ChMouth(3,1);
    ChMotion(3,5);
    VoicePlay("B040323201_03_030");
    MsgDisp("Honda","Ehー?
That depends on the customer.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
