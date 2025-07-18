switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,2,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080400001_04_000");
    MsgDisp("Nanatsumori","With Hikaru-san, huh...
Got it.");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,2,0,#1,#1,0,1);
    ScrFadeIn(0);
    ChMotion(4,1,1);
    VoicePlay("W080400001_04_010");
    MsgDisp("Nanatsumori","Got it.
With Hikaru-san, huh...");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,2,2,0,#1,#1,0,1);
    ScrFadeIn(0);
    ChEye(4,2);
    ChMouth(4,2);
    VoicePlay("W080400001_04_020");
    MsgDisp("Nanatsumori","...With Hikaru-san?
I see.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(4,0,30);
ChClose(22,0,30);
