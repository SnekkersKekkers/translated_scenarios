switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S060500002_05_000");
    MsgDisp("Hiiragi","Well then, shall we go?");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S060500002_05_010");
    MsgDisp("Hiiragi","Alright then, let's go.");
    break ;
    case 4:
    case 5:
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S060500002_05_020");
    MsgDisp("Hiiragi","Well, let's go. Watch your step.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
