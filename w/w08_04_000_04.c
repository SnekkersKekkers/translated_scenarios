switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,0,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080400004_04_000");
    MsgDisp("Nanatsumori","Hikaru-san, huh, got it.");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,1,0,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080400004_04_010");
    MsgDisp("Nanatsumori","Let's go, Hikaru-san.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,1,2,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080400004_04_020");
    MsgDisp("Nanatsumori","Okay... with
Hikaru-san, huh.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(4,0,30);
ChClose(22,0,30);
