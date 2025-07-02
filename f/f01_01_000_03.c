switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("F010100003_01_000");
    MsgDisp("Kazama","Oh, sure.");
    MsgDisp("主人公","Yay!
Well then, let's go.");
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("F010100003_01_010");
    MsgDisp("Kazama","Yeah, let's walk together.");
    MsgDisp("主人公","Yay!
Well then, let's go.");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChCheek(1,7);
    VoicePlay("F010100003_01_020");
    MsgDisp("Kazama","Yes, that's fine.
I don't mind if we do this everyday.");
    ChMotion(1,0);
    MsgDisp("主人公","Yay!
Well then, let's go!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
SEWait();
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
