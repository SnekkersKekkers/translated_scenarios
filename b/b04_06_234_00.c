BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623400_06_000");
MsgDisp("Himuro","...What a child's trick.");
MsgSel("I got excited like a child!","We were able to experience the centrifrugal force","The world...is spinning...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623400_06_010");
    MsgDisp("Himuro","You completely fell for it.
Well, the most important thing 
is that you had fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040623400_06_020");
    MsgDisp("Himuro","I see, we definitely
got to experience that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040623400_06_030");
    MsgDisp("Himuro","You reap what you sow.
Since you spun it that much.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
