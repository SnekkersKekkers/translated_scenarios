switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,0,1,0,0,#1,0,0);
    VoicePlay("F010600006_06_000");
    MsgDisp("Himuro","Why?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(How unfortunate.
I'll go straight home today...)");
    break ;
    case 3:
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("F010600006_06_010");
    MsgDisp("Himuro","Another time.");
    MsgDisp("主人公","So you can't go today?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("F010600006_06_020");
    MsgDisp("Himuro","That's a nonsensical question.
If I could, I'd go with you.
That's how it is.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(How unfortunate.
I'll go straight home today...)");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,4,0,0,#1,#1,0,0);
    VoicePlay("F010600006_06_030");
    MsgDisp("Himuro","...right now?");
    MsgDisp("主人公","Yes.
Can you not?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600006_06_040");
    MsgDisp("Himuro","... I can't.
But...");
    MsgDisp("主人公","Can I ask you another time?");
    ChEye(6,2);
    ChMouth(6,2);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("F010600006_06_050");
    MsgDisp("Himuro","... Another time.
I would appreciate it.");
    MsgDisp("主人公","Got it.
Well, bye-bye.");
    ChEye(6,2);
    ChMouth(6,2);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("F010600006_06_060");
    MsgDisp("Himuro","Mhm, later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(How unfortunate.
I'll go straight home today...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
