switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("F010400003_04_000");
    MsgDisp("Nanatsumori","That's fine.");
    MsgDisp("主人公","I'm glad.
Well then, let's go.");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("F010400003_04_010");
    MsgDisp("Nanatsumori","OK.
I needed someone to talk to.");
    MsgDisp("主人公","Hehe, I'm glad.
Well then, what should we talk about while
we walk?");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("F010400003_04_020");
    MsgDisp("Nanatsumori","Ah.
I'll go with you.");
    MsgDisp("主人公","Great!");
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
