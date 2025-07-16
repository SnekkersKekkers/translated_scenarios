switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(3,255,1,0,3,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300000_03_000");
    MsgDisp("Honda","Michiru-chan, let's go.");
    break ;
    case 3:
    MsgClose();
    ChOpen(3,255,1,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300000_03_010");
    MsgDisp("Honda","Then, I'm going with Michiru-chan, huh?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,255,4,4,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300000_03_020");
    MsgDisp("Honda","Ah, I'm going with Michiru-chan?
I see.
Hm, okaaay.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(3,0,30);
ChClose(21,0,30);
