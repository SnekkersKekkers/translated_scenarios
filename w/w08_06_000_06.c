switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600006_06_000");
    MsgDisp("Himuro","Alright, I'm okay with anyone.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600006_06_010");
    MsgDisp("Himuro","Hanatsubaki-senpai, huh?
It doesn't matter.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,255,2,2,2,0,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600006_06_020");
    MsgDisp("Himuro","... don't know why you invited me here.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(6,0,30);
ChClose(21,0,30);
