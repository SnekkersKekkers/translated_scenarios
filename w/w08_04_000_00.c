switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,2,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080400000_04_000");
    MsgDisp("Nanatsumori","Michiru-san, huh...
Got it.");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,1,2,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080400000_04_010");
    MsgDisp("Nanatsumori","Got it.
Michiru-san, huh...");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,2,2,0,-1,-1,0,1);
    ScrFadeIn(0);
    ChEye(4,2);
    ChMouth(4,2);
    VoicePlay("W080400000_04_020");
    MsgDisp("Nanatsumori","...With Michiru-san?
I see.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(4,0,30);
ChClose(21,0,30);
