switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600004_06_000");
    MsgDisp("Himuro","Why?");
    MsgDisp("主人公","Why?
Because I want to walk home with you.");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("F010600004_06_010");
    MsgDisp("Himuro","That's for your convenience.
To me, it makes no sense.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(It can't be helped.
I'll go home alone...)");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600004_06_020");
    MsgDisp("Himuro","I have plans, so no.");
    MsgDisp("主人公","I see.
That's unfortunate.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600004_06_030");
    MsgDisp("Himuro","If you want,
invite me another time.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(It can't be helped.
I'll go home alone...)");
    break ;
    case 4:
    case 5:
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChCheek(6,0);
    VoicePlay("F010600004_06_040");
    MsgDisp("Himuro","...I'm busy today.");
    MsgDisp("主人公","I see.
That's unfortunate.
Well, I'll invite you again.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("F010600004_06_050");
    MsgDisp("Himuro","I see...okay.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(It can't be helped.
I'll go home alone...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
