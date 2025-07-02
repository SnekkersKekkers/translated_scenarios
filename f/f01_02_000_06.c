switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("F010200006_02_000");
    MsgDisp("Sassa","Um, I'm good.
Sorry.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(It can't be helped. 
I'll go straight home today.)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("F010200006_02_010");
    MsgDisp("Sassa","Can't. My spending money's tight now.
Well, ask me next month.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(Well, it can't be helped.
I'll go straight home today.)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("F010200006_02_020");
    MsgDisp("Sassa","Ah, today's no good.");
    MsgDisp("主人公","Oh...");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("F010200006_02_030");
    MsgDisp("Sassa","Sorry, I can't go with you.
I can't use my pocket money freely.");
    MsgDisp("主人公","Hehe.
Well, next time.
When you have a lot of pocket money.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("F010200006_02_040");
    MsgDisp("Sassa","Mhm, see you.
Go home safe.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(As expected,
I'll walk home alone today...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
