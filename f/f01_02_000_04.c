switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("F010200004_02_000");
    MsgDisp("Sassa","Oh, sorry.
I have plans today.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("F010200004_02_010");
    MsgDisp("Sassa","Sorry. You invited me,
but I can't go with you today.
Maybe another time.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(That sucks.
I'll go home alone today.)");
    break ;
    case 4:
    case 5:
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("F010200004_02_020");
    MsgDisp("Sassa","I have plans today.");
    MsgDisp("主人公","Oh, that's unfortunate.");
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("F010200004_02_030");
    MsgDisp("Sassa","Sory, it's the timing.
Next time for sure.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(It can't be helped.
I'll walk home alone.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
