switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("Q040200002_02_000");
    MsgDisp("Sassa","Sorry, I already promised to go with
someone else.");
    MsgDisp("主人公","I see, that's a shame.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q040200002_02_010");
    MsgDisp("Sassa","Yeah, sorry again.
Let's enjoy the day though!");
    MsgClose();
    BGMStop();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Sigh......
How unlucky.
I guess it can't be helped.)");
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
ChClose(2,0,0);
