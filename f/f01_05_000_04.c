switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("F010500004_05_000");
    MsgDisp("Hiiragi","I have important tasks today, so I must go
home quickly.
My apologies.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(...
It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(5,2);
    ChMouth(5,0);
    ChMotion(5,2);
    VoicePlay("F010500004_05_010");
    MsgDisp("Hiiragi","Rehearsal starts early today for me.");
    MsgDisp("主人公","I see.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("F010500004_05_020");
    MsgDisp("Hiiragi","Please don't be discouraged.
Invite me again sometime.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(...
It can't be helped.
I'll go home alone.)");
    break ;
    case 4:
    case 5:
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,1);
    ChEyeOpenLevel(5,0);
    VoicePlay("F010500004_05_030");
    MsgDisp("Hiiragi","...I can not.");
    MsgDisp("主人公","Huh?");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    ChEyeOpenLevel(5,8);
    VoicePlay("F010500004_05_040");
    MsgDisp("Hiiragi","I considered canceling it, but I have a
meeting today with an important patron.
I cannot miss it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    ChEyeOpenLevel(5,#1);
    MsgDisp("主人公","(He can't cancel his meeting.
I'll go home alone today.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
