switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("D140701100_07_000");
    MsgDisp("Mikage","Ah, we're on the same page.
When in doubt, this is the right one.");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("D140701100_07_010");
    MsgDisp("Mikage","Huh? Are you copying me?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("D140701100_07_020");
    MsgDisp("Mikage","Well, having the same taste in food is the
most important thing of all, right?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
