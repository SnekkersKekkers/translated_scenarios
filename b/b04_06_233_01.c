BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,3,3,0,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623301_06_000");
MsgDisp("Himuro","It feels like you're challenging your
limits.
It's great, isn't it?");
MsgSel("I can't understand it...","I may have surpassed my limits!","I want to surpass them in a different way");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040623301_06_010");
    MsgDisp("Himuro","Have you given up on trying to understand?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,0);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040623301_06_020");
    MsgDisp("Himuro","That's right.
With this, let's go beyond our limits
together.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623301_06_030");
    MsgDisp("Himuro","In another way you say...
Like skydiving?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
