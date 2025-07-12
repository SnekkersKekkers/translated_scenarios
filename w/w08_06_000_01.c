switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600001_06_000");
    MsgDisp("Himuro","Sure thing.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600001_06_010");
    MsgDisp("Himuro","Well, that's fine, I guess.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,255,2,2,0,0,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080600001_06_020");
    MsgDisp("Himuro","Huh... Why are we pairing up
like this?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(6,0,30);
ChClose(22,0,30);
