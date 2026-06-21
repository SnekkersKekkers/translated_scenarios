switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(3,255,1,0,3,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300003_03_000");
    MsgDisp("Honda","Well, is this fine with you, Michiru-chan?");
    break ;
    case 3:
    MsgClose();
    ChOpen(3,255,0,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300003_03_010");
    MsgDisp("Honda","With Michiru-chan?
Okaay.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,255,4,4,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300003_03_020");
    MsgDisp("Honda","Riding with Michiru-chan would be a change
of pace, huh?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(3,0,30);
ChClose(21,0,30);
