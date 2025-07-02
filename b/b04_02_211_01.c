BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040221101_02_000");
MsgDisp("Sassa","It's said that cheetahs 
are the fastest land animals, huh...");
MsgSel("Do you wnat a competition?","I wonder how fast","Their body is like an athlete's.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040221101_02_010");
    MsgDisp("Sassa","Even a world champion would have no
chance.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040221101_02_020");
    MsgDisp("Sassa","Close to 100 kilometers an hour.
Humans couldn't compete with that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040221101_02_030");
    MsgDisp("Sassa","Yeah, they have ideal muscles.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
