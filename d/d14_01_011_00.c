switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("D140101100_01_000");
    MsgDisp("Kazama","You get it.
This is it.");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("D140101100_01_010");
    MsgDisp("Kazama","You too, huh? we get along well.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
