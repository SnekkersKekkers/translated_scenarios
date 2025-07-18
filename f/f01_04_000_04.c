switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("F010400004_04_000");
    MsgDisp("Nanatsumori","I have errands to do, so not today.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0);
    VoicePlay("F010400004_04_010");
    MsgDisp("Nanatsumori","Sorry, I can't.
I have to go somewhere today.
Another time?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone");
    break ;
    case 4:
    case 5:
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("F010400004_04_020");
    MsgDisp("Nanatsumori","Can't.
I've got errands I already said I'd do.");
    MsgDisp("主人公","Okay. If you have errands, then there's
nothing we can do. Don't worry about it.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("F010400004_04_030");
    MsgDisp("Nanatsumori","It was nice of you.
I'm really sorry.
Well, then...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
