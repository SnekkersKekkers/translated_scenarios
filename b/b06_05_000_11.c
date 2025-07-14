switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("B060500011_05_000");
    MsgDisp("Hiiragi","We're here.
Well then, excuse me.");
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B060500011_05_010");
    MsgDisp("Hiiragi","Be careful.
See you later.");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B060500011_05_020");
    MsgDisp("Hiiragi","Please be careful on your way home.
I'll think about what we should do next
time.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
