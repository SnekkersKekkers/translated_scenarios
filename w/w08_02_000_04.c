switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,255,2,0,2,7,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200004_02_000");
    MsgDisp("Sassa","Hikaru-san, you seem to enjoy tea cups,
huh...");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,255,4,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200004_02_010");
    MsgDisp("Sassa","I'm going with Hikaru-san, huh...
I'll do the spinning.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,255,4,0,2,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200004_02_020");
    MsgDisp("Sassa","I'm going to ride with Hikaru-san?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(2,0,30);
ChClose(22,0,30);
