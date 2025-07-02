switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("D140701101_07_000");
    MsgDisp("Mikage","I had a feeling you would do that.");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("D140701101_07_010");
    MsgDisp("Mikage","Ooh, we meet again.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("D140701101_07_020");
    MsgDisp("Mikage","How's it going?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
