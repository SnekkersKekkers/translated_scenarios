switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("F010100006_01_000");
    MsgDisp("Kazama","Sorry.
I don't have time today.");
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
    VoicePlay("F010100006_01_010");
    MsgDisp("Kazama","It's too bad.
I can't go with you today.");
    MsgDisp("主人公","Alright.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("F010100006_01_020");
    MsgDisp("Kazama","But, next time?
I promise.
When neither of us have any detours.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(It can't be helped.
I'll go home alone.)");
    break ;
    case 4:
    case 5:
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("F010100006_01_030");
    MsgDisp("Kazama","I can't go with you today.");
    MsgDisp("主人公","Okay.
It sucks, but it can't be helped.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("F010100006_01_040");
    MsgDisp("Kazama","You give up too easily.");
    MsgDisp("主人公","Huh?
But, doesn't ｛風真＊＊｝ have errands to
run?");
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChMouth(1,1);
    ChEyeOpenLevel(1,#1);
    VoicePlay("F010100006_01_050");
    MsgDisp("Kazama","Well, can't we work something out?");
    MsgDisp("主人公","...can we?");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("F010100006_01_060");
    MsgDisp("Kazama","Ha...we probably can't.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(I'm all depressed, now...
But I got rejected, right?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
