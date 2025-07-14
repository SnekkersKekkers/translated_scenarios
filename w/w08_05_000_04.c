switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,0,4,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500004_05_000");
    MsgDisp("Hiiragi","Okay, Hanatsubaki-san, after you.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,4,0,3,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500004_05_010");
    MsgDisp("Hiiragi","This is a ride that goes round and round,
Hanatsubaki-san.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,2,2,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500004_05_020");
    MsgDisp("Hiiragi","Sounds like a good idea.
Okay, since we are here, let's have fun.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(5,0,30);
ChClose(22,0,30);
