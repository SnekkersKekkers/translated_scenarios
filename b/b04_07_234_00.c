BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,4,0,0,6,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723400_07_000");
MsgDisp("Mikage","You look like you're having fun...");
MsgSel("I'm merry like a child!","We were able to experience the centrifugal force","The world... it's spinning...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    ChEyeOpenLevel(7,10);
    VoicePlay("B040723400_07_010");
    MsgDisp("Mikage","I'm glad.
This is pretty intense.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040723400_07_020");
    MsgDisp("Mikage","We've been blessed with Miss Diligent 
again today.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040723400_07_030");
    MsgDisp("Mikage","You're the one who spun it?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
