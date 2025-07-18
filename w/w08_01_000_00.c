switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,0,4,2,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100000_01_000");
    MsgDisp("Kazama","Got it.");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,0,2,2,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100000_01_010");
    MsgDisp("Kazama","I see...okay.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,4,2,2,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100000_01_020");
    MsgDisp("Kazama","I'll ride with Hanatsubaki then...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(1,0,30);
ChClose(21,0,30);
