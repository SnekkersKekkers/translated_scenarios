switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("D140101101_01_000");
    MsgDisp("Kazama","Heeh-, you chose the same thing as me.");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("D140101101_01_010");
    MsgDisp("Kazama","I thought so.");
    MsgDisp("主人公","You thought so?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("D140101101_01_020");
    MsgDisp("Kazama","I thought it was about time we overlapped.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
