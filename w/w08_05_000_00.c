switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500000_05_000");
    MsgDisp("Hiiragi","Got it.
Well then, let's go.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500000_05_010");
    MsgDisp("Hiiragi","With Hanatsubaki-san, huh.
Sure.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,2,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500000_05_020");
    MsgDisp("Hiiragi","... I see, okay. Well then,
let's go, Hanatsubaki-san.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(5,0,30);
ChClose(21,0,30);
