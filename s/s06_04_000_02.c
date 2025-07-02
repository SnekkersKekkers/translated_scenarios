switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("S060400002_04_000");
    MsgDisp("Nanatsumori","Let's go.");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("S060400002_04_010");
    MsgDisp("Nanatsumori","Let's go now, then.");
    break ;
    case 4:
    case 5:
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("S060400002_04_020");
    MsgDisp("Nanatsumori","Okay, let's go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
