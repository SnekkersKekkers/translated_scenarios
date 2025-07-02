switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,255,0,0,0,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600007_06_000");
    MsgDisp("Himuro","I'm fine with anyone.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,255,0,0,0,8,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600007_06_010");
    MsgDisp("Himuro","Well, I'm fine with this.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,255,2,2,2,0,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600007_06_020");
    MsgDisp("Himuro","Well, it doesn't matter who
I ride with.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(6,0,30);
ChClose(22,0,30);
