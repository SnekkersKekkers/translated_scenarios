switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("D140601101_06_000");
    MsgDisp("Himuro","Hmm...
So you got it too?");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("D140601101_06_010");
    MsgDisp("Himuro","I thought you would choose this one.
I definitely understand.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
