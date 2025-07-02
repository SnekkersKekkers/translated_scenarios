switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,1,0,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100001_01_000");
    MsgDisp("Kazama","Got it.
Well then, let's go.");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,4,4,2,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100001_01_010");
    MsgDisp("Kazama","...Well, this is fine I guess.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,0,4,2,10,-1,0,1);
    ScrFadeIn(0);
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("W080100001_01_020");
    MsgDisp("Kazama","I'd like to hear the reason for this
later.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(1,0,30);
ChClose(22,0,30);
