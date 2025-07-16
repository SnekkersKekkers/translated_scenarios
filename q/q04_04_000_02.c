switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("Q040400002_04_000");
    MsgDisp("Nanatsumori","My bad.
I already planned on going alone.");
    MsgDisp("主人公","I see......");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("Q040400002_04_010");
    MsgDisp("Nanatsumori","Bye then.");
    MsgClose();
    BGMStop();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(Aww, what a shame!)");
    break ;
    case 3:
    break ;
    case 4:
    case 5:
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
