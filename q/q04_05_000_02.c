switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("Q040500002_05_000");
    MsgDisp("Hiiragi","I apologize, however I already promised to
go with somebody else.");
    MsgDisp("主人公","I see... that can't be helped.");
    ChMotion(5,0);
    VoicePlay("Q040500002_05_010");
    MsgDisp("Hiiragi","Yes.
Now if you will excuse me...");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Ah, what a bummer...
I'll be on my own then.)");
    SEWait();
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
