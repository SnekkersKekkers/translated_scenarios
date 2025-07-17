switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("Q040700002_07_000");
    MsgDisp("Mikage","Wait a second.
Thanks alot.
Sounds fun, but it's a no from me.");
    MsgDisp("主人公","I see...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q040700002_07_010");
    MsgDisp("Mikage","Look. It is a school trip after all. Make
sure to make memories with friends, kay?");
    MsgClose();
    BGMStop();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(Aah, it really is a shame, but I guess it
can't be helped...)");
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
