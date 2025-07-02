switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("F010300005_03_000");
    MsgDisp("Honda","A cafe?
Um, sure?");
    MsgDisp("主人公","I'm glad.
Well then, let's go.");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("F010300005_03_010");
    MsgDisp("Honda","Ah, that works!
Quickly!");
    MsgDisp("主人公","Hehe, okay!");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("F010300005_03_020");
    MsgDisp("Honda","Sure∋");
    MsgDisp("主人公","Ah, okay.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("F010300005_03_030");
    MsgDisp("Honda","To be honest,
I also wanted to talk with you somewhere
quiet.");
    MsgDisp("主人公","Haha, I'm glad.
Well then, shall we go?");
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
