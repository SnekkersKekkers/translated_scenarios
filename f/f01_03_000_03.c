switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("F010300003_03_000");
    MsgDisp("Honda","Let's do it.
I'm free.");
    MsgDisp("主人公","I'm glad.
Well then, let's go.");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("F010300003_03_010");
    MsgDisp("Honda","Mhm, let's do it!
There are tons of things I want to talk to
you about.");
    MsgDisp("主人公","Hehe, I'm glad.
Well then, let's go.");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("F010300003_03_020");
    MsgDisp("Honda","If you hadn't asked me, I would've asked
you.");
    MsgDisp("主人公","Hehe, I'm glad.
Well then, let's go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
SEWait();
