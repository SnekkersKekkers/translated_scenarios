switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("F010100004_01_000");
    MsgDisp("Kazama","Not today.
I have to hurry somewhere today.
Maybe another time.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("F010100004_01_010");
    MsgDisp("Kazama","Bad timing...
I have to go to my grandpa's store.");
    MsgDisp("主人公","Alright...");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("F010100004_01_020");
    MsgDisp("Kazama","Sorry.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(It can't be helped.
I'll go home alone today...)");
    break ;
    case 4:
    case 5:
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("F010100004_01_030");
    MsgDisp("Kazama","...are you serious?");
    MsgDisp("主人公","Huh?");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("F010100004_01_040");
    MsgDisp("Kazama","I've got something today I can't miss.");
    MsgDisp("主人公","Well, another time, then.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("F010100004_01_050");
    MsgDisp("Kazama","Yeah, something like that.");
    MsgDisp("主人公","It can't be helped.
｛風真＊＊｝ is busy.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("F010100004_01_060");
    MsgDisp("Kazama","Ha... I don't feel like doing errands
anymore..");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(I'm all depressed now.
I got rejected, right?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
