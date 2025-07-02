switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("F010700003_07_000");
    MsgDisp("Mikage","Oh, that's fine. If you'll give me a
moment, I'll get ready!");
    MsgDisp("主人公","Yes, thank you!");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("F010700003_07_010");
    MsgDisp("Mikage","Oh, I'd be glad.
Count to ten slowly!
I'll go get my stuff.");
    MsgDisp("主人公","Yes, thank you!");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("F010700003_07_020");
    MsgDisp("Mikage","Oh, let's go, let's go.
I didn't ride my bike today.");
    MsgDisp("主人公","Yay!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("F010700003_07_030");
    MsgDisp("Mikage","If you're going to be that happy,
maybe I should forget my bike everyday.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
SEWait();
ChEye(7,-1);
ChMouth(7,-1);
ChEyeOpenLevel(7,-1);
