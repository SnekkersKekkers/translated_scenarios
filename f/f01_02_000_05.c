switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("F010200005_02_000");
    MsgDisp("Sassa","A cafe?
Sure.");
    MsgDisp("主人公","I'm glad.
Well then, let's go.");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("F010200005_02_010");
    MsgDisp("Sassa","That's fine.
I'll eat something, too.");
    MsgDisp("主人公","I'm glad.
Let's go.");
    break ;
    case 4:
    case 5:
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("F010200005_02_020");
    MsgDisp("Sassa","Sure, sounds good.
Let's go.");
    MsgDisp("主人公","Hehe, I did it.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("F010200005_02_030");
    MsgDisp("Sassa","Haha, you did it.
Anyhow, I'm already having fun.");
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
