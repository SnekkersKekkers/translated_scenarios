switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("F010500006_05_000");
    MsgDisp("Hiiragi","My schedule is full today.
My apologies.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("F010500006_05_010");
    MsgDisp("Hiiragi","Excuse me.
I have plans with a patron of the troupe.");
    MsgDisp("主人公","Okay, I'll invite you again later.");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("F010500006_05_020");
    MsgDisp("Hiiragi","Yes.
Whenever I talk to you, I never fail to
enjoy it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(It seems like ｛柊＊＊＊｝ is busy.
It can't be helped, I'll go home alone.)");
    break ;
    case 4:
    case 5:
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("F010500006_05_030");
    MsgDisp("Hiiragi","I have to attend a meeting today.
I apologize for the trouble.");
    MsgDisp("主人公","Okay...
That's unfortunate.");
    ChMouth(5,4);
    ChMotion(5,2);
    ChEyeOpenLevel(5,8);
    VoicePlay("F010500006_05_040");
    MsgDisp("Hiiragi","Rather, going together...
Ha, what am I saying?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    ChEyeOpenLevel(5,#1);
    MsgDisp("主人公","(Sounds like a lot of work for
｛柊＊＊＊｝. It can't be helped. I'll go
home alone.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
