switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("F010400005_04_000");
    MsgDisp("Nanatsumori","Well, it's fine if we go together.");
    MsgDisp("主人公","That's good!
Well then, let's go.");
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("F010400005_04_010");
    MsgDisp("Nanatsumori","ＯＫ.
I wanted someone to talk to, anyways.
Let's take it easy.");
    MsgDisp("主人公","Of course!
Let's go.");
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("F010400005_04_020");
    MsgDisp("Nanatsumori","OK, let's go together.
I wanted to take my time talking to you.
You too, I guess?");
    MsgDisp("主人公","Really?");
    ChMotion(4,0,1);
    VoicePlay("F010400005_04_030");
    MsgDisp("Nanatsumori","Really.
Come on, let's go.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","Oh, ｛七ツ森＊｝, wait up!");
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
