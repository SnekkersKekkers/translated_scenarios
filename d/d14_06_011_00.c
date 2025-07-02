switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("D140601100_06_000");
    MsgDisp("Himuro","Ah......you copied me.");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("D140601100_06_010");
    MsgDisp("Himuro","Ah, the same thing......
......Are you copying me?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
