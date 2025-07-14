BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040123301_01_000");
MsgDisp("Kazama","Why... 
did we come here again?");
MsgSel("I felt like something was calling me","Maybe it'll become fun one day?","A part of the harness fell off");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(1,1);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040123301_01_010");
    MsgDisp("Kazama","That's just your hope.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("B040123301_01_020");
    MsgDisp("Kazama","Fun? This is one of those punishment
games...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040123301_01_030");
    MsgDisp("Kazama","It didn't fall off, did it?
I don't need that kind of effect.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
