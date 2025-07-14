switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("F010500003_05_000");
    MsgDisp("Hiiragi","I do not mind.");
    MsgDisp("主人公","I'm glad.
Let's go.");
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("F010500003_05_010");
    MsgDisp("Hiiragi","Of course.
Your presence is always welcome.");
    MsgDisp("主人公","Hehe, I'm glad!
Well then, let's go.");
    break ;
    case 4:
    case 5:
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("F010500003_05_020");
    MsgDisp("Hiiragi","Oh,
I was thinking that, as well.");
    MsgDisp("主人公","Good!
Well then, let's go!");
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
