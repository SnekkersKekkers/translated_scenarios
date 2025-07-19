switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("Q040300002_03_000");
    MsgDisp("Honda","Sorry.
The places I want to go to are weird.");
    MsgDisp("主人公","Huh?
Weird?");
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q040300002_03_010");
    MsgDisp("Honda","Uh-huh.
If you're interested, I'll tell you all
about it one day, okay?");
    MsgClose();
    BGMStop();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(What a shame...
But I wonder just where does ｛本多＊＊｝
want to go to?)");
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
