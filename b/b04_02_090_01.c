BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040209001_02_000");
MsgDisp("Sassa","Apparently they're doing a stamp rally.");
MsgSel("I hear the participation prize are plant seeds!","Even the flower stamps are cute▼","Seems like it's aimed at little kids.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040209001_02_010");
    MsgDisp("Sassa","Ehhh, cool. If they were vegetables seeds,
I could bring them as a souvenir for
Mikage-sensei.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040209001_02_020");
    MsgDisp("Sassa","Hmmー Girls really do like flowers.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040209001_02_030");
    MsgDisp("Sassa","Ehh?
There's not really an age target right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
