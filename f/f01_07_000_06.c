switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("F010700006_07_000");
    MsgDisp("Mikage","I can't today.
I've got a lot of work to do once I get
home...");
    MsgDisp("主人公","Oh, I see...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(How unfortunate.)");
    break ;
    case 3:
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("F010700006_07_010");
    MsgDisp("Mikage","I'm about to go to some kind of meeting.
...sorry?");
    MsgDisp("主人公","Don't be.
Good luck!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(It can't be helped.
I'll go home alone...)");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("F010700006_07_020");
    MsgDisp("Mikage","I can't.
I already made plans today.");
    MsgDisp("主人公","I see...");
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("F010700006_07_030");
    MsgDisp("Mikage","Don't look so disappointed.
We'll go to a cafe next time, I promise.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(It's unfortunate, but I'll try to invite
him another time.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
