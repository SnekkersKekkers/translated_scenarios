switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    ChEye(22,0);
    ChMouth(22,0);
    ChMotion(22,3,1);
    VoicePlay("F012200006_22_000");
    MsgDisp("Hikaru","Sorry, there's no time for tea today～
Another time!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(22,2);
    ChMouth(22,2);
    ChMotion(22,2,1);
    VoicePlay("F012200006_22_010");
    MsgDisp("Hikaru","A cafe...
Mm, it won't really work.");
    MsgDisp("主人公","Oh, are you busy today?");
    ChEye(22,2);
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("F012200006_22_020");
    MsgDisp("Hikaru","That's right.
Another time?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(That's unfortunate...
I'll go home alone.)");
    break ;
    case 4:
    case 5:
    ChEye(22,2);
    ChMouth(22,5);
    ChMotion(22,2,1);
    VoicePlay("F012200006_22_030");
    MsgDisp("Hikaru","Oh... Hikaru wants to, but...
Hikaru is busy...");
    MsgDisp("主人公","That's fine.
Well, how about another time?");
    ChEye(22,2);
    ChMouth(22,0);
    ChMotion(22,3,1);
    VoicePlay("F012200006_22_040");
    MsgDisp("Hikaru","Another time.
Sorry, Mari.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(That's unfortunate...
I'll go home alone.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
