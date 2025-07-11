switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B060200011_02_000");
    MsgDisp("Sassa","Isn't it about time?　Let's leave.");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("B060200011_02_010");
    MsgDisp("Sassa","See you later then!
Be careful on the way home, okay?");
    break ;
    case 4:
    case 5:
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B060200011_02_020");
    MsgDisp("Sassa","Thanks to you, I had a good day.
See you later then.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
