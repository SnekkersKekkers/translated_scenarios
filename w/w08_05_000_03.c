switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,0,0,4,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500003_05_000");
    MsgDisp("Hiiragi","Hanatsubaki-san, let's go, shall we.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,0,0,4,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500003_05_010");
    MsgDisp("Hiiragi","Got it. Hanatsubaki-san, do
you like the merry go round?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,2,4,2,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500003_05_020");
    MsgDisp("Hiiragi","... Hanatsubaki-san, huh.
I see.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(5,0,30);
ChClose(21,0,30);
