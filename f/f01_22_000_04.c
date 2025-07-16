switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    ChEye(22,2);
    ChMouth(22,0);
    ChMotion(22,2,1);
    VoicePlay("F012200004_22_000");
    MsgDisp("Hikaru","Hikaru has errands today.
Sorry!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(...
It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(22,2);
    ChMouth(22,0);
    ChMotion(22,2,1);
    VoicePlay("F012200004_22_010");
    MsgDisp("Hikaru","Ah, today's impossible～
Because Hikaru has errands.");
    MsgDisp("主人公","I see, that's unfortunate...");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("F012200004_22_020");
    MsgDisp("Hikaru","Can you invite Hikaru again sometime?
Sorry!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(...
It can't be helped.
I'll go home alone.)");
    break ;
    case 4:
    case 5:
    ChEye(22,2);
    ChMouth(22,2);
    ChMotion(22,2,1);
    VoicePlay("F012200004_22_030");
    MsgDisp("Hikaru","Eh...");
    MsgDisp("主人公","Oh... are you busy today?");
    ChEye(22,2);
    ChMouth(22,2);
    ChMotion(22,4,1);
    VoicePlay("F012200004_22_040");
    MsgDisp("Hikaru","Yep.
Sorry, Mari.
Please don't hate Hikaru for this.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(...
It can't be helped.
I'll go home alone.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
