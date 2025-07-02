switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,0,0,4,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500001_05_000");
    MsgDisp("Hiiragi","I'm going with Hanatsubaki-san, huh.
Sure, let's go then.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,0,0,4,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500001_05_010");
    MsgDisp("Hiiragi","Let's go, then, Hanatsubaki-san.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,0,4,2,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500001_05_020");
    MsgDisp("Hiiragi","Is it really okay that I go with
Hanatsubaki-san?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(5,0,30);
ChClose(22,0,30);
