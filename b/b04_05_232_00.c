BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,4,4,4,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523200_05_000");
MsgDisp("Hiiragi","It had already ended when I realized...");
MsgSel("I was able to enjoy a beautiful view♪","It feels so nice I feel sleepy...","It was just tall, cramped and scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040523200_05_010");
    MsgDisp("Hiiragi","Yes, Habataki City is truly a scenic
place.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040523200_05_020");
    MsgDisp("Hiiragi","Me too...
It was like a big cradle.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040523200_05_030");
    MsgDisp("Hiiragi","Ehh? It looked like you were having a lot
of fun...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
