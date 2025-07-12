switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,0,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100003_01_000");
    MsgDisp("Kazama","Alright, let's go then.");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,0,2,2,#1,#1,0,1);
    ScrFadeIn(0);
    ChMouth(1,0);
    VoicePlay("W080100003_01_010");
    MsgDisp("Kazama","... Let's go.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,0,0,2,8,#1,0,1);
    ScrFadeIn(0);
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEyeOpenLevel(1,#1);
    VoicePlay("W080100003_01_020");
    MsgDisp("Kazama","I see...
Let's go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(1,0,30);
ChClose(21,0,30);
