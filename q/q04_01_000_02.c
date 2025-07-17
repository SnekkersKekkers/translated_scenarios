switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("Q040100002_01_000");
    MsgDisp("Kazama","Wait, seriously...?
I already made plans with somebody else.
Sorry about that.");
    MsgDisp("主人公","I see...
Sorry for asking.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Aw, that's too bad...)");
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
