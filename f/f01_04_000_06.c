switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,2,1);
    VoicePlay("F010400006_04_000");
    MsgDisp("Nanatsumori","That kind of thing...
I don't want to do it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(...It can't be helped.
I'll go straight home.)");
    break ;
    case 3:
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("F010400006_04_010");
    MsgDisp("Nanatsumori","I'd like to talk with you, but I don't
have time to stop.
Sorry.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(...It can't be helped.
I'll go straight home.)");
    break ;
    case 4:
    case 5:
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("F010400006_04_020");
    MsgDisp("Nanatsumori","I'd like to, but...
I already have plans.
Sorry.");
    MsgDisp("主人公","Is that so...
That's unfortunate.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("F010400006_04_030");
    MsgDisp("Nanatsumori","Don't be so sad about it.
Now I feel even worse.");
    ChEye(4,2);
    ChMouth(4,3);
    VoicePlay("F010400006_04_040");
    MsgDisp("Nanatsumori","I'll ask you out next time.
So another day, okay?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(...It can't be helped.
I'll go straight home.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
