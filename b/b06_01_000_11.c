switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B060100011_01_000");
    MsgDisp("Kazama","See you, go straight home.");
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B060100011_01_010");
    MsgDisp("Kazama","See you.
Be careful on your way home.");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B060100011_01_020");
    MsgDisp("Kazama","Listen, go home before it gets dark.
I'll see you.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
