switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(3,255,1,0,3,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300001_03_000");
    MsgDisp("Honda","Then, I'm with
Pika-chan?");
    break ;
    case 3:
    MsgClose();
    ChOpen(3,255,0,0,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300001_03_010");
    MsgDisp("Honda","Hey, isn't this an unusual
combination?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,255,4,4,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300001_03_020");
    MsgDisp("Honda","I'm going with Pika-chan?
I see, got it.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(3,0,30);
ChClose(22,0,30);
