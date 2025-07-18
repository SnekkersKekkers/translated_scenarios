switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("F010300004_03_000");
    MsgDisp("Honda","Oh, can't.
I have plans today.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("F010300004_03_010");
    MsgDisp("Honda","Ah, sorry!
I've got plans today, so maybe another
time.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    case 4:
    case 5:
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("F010300004_03_020");
    MsgDisp("Honda","Well～
I already did it～");
    MsgDisp("主人公","Oh, you already made plans?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("F010300004_03_030");
    MsgDisp("Honda","Sigh...you'll ask me out again, right?
Of course, I'll ask you too!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
