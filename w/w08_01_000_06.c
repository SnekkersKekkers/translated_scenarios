switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,4,2,2,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100006_01_000");
    MsgDisp("Kazama","... What are we supposed to talk about?");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,0,2,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100006_01_010");
    MsgDisp("Kazama","Hanatsubaki, 
are you okay with heights?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,4,4,2,10,-1,0,1);
    ScrFadeIn(0);
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("W080100006_01_020");
    MsgDisp("Kazama","15 minutes is a long time...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(1,0,30);
ChClose(21,0,30);
