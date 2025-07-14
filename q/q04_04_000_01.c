switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("Q040400001_04_000");
    MsgDisp("Nanatsumori","I'm okay with it.");
    MsgDisp("主人公","I'm glad!");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("Q040400001_04_010");
    MsgDisp("Nanatsumori","'Kay.");
    MsgDisp("主人公","I'm glad.
Well then, let's go!");
    break ;
    case 4:
    case 5:
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("Q040400001_04_020");
    MsgDisp("Nanatsumori","That's what I was waiting for.");
    ChMotion(4,1,1);
    VoicePlay("Q040400001_04_030");
    MsgDisp("Nanatsumori","I sure am coming.
Should we leave right now?");
    MsgDisp("主人公","Yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
