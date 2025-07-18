switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200007_02_000");
    MsgDisp("Sassa","With Hikaru-san, huh.
Alright, let's go.");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200007_02_010");
    MsgDisp("Sassa","With Hikaru-san, huh...
Got it.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,255,4,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200007_02_020");
    MsgDisp("Sassa","...Ah, so we've decided.
With Hikaru-san, huh...
Let's go!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(2,0,30);
ChClose(22,0,30);
