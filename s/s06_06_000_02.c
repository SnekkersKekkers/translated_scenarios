switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("S060600002_06_000");
    MsgDisp("Himuro","Okay, let's go.");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("S060600002_06_010");
    MsgDisp("Himuro","Sure, let's go then.");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChCheek(6,5);
    VoicePlay("S060600002_06_020");
    MsgDisp("Himuro","Should we go now, then?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
