switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    VoicePlay("S060800002_08_000");
    MsgDisp("Shirahane","Ok, let's go then?");
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    VoicePlay("S060800002_08_010");
    MsgDisp("Shirahane","Ok, let's go.");
    break ;
    case 4:
    case 5:
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0);
    VoicePlay("S060800002_08_020");
    MsgDisp("Shirahane","Ok, I'd better get going.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
