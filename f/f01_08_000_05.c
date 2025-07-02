switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("F010800005_08_000");
    MsgDisp("Shirahane","Yeah, let's do it!");
    MsgDisp("主人公","Good.
Then, let's go.");
    break ;
    case 3:
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("F010800005_08_010");
    MsgDisp("Shirahane","Yeah!
I want to talk to ya the whole time.");
    MsgDisp("主人公","Hehe.
Then, let's go!");
    break ;
    case 4:
    case 5:
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("F010800005_08_020");
    MsgDisp("Shirahane","Yeah.
Let's go and take our time.");
    MsgDisp("主人公","Okay.");
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,2,1);
    ChCheek(8,5);
    VoicePlay("F010800005_08_030");
    MsgDisp("Shirahane","Yeah...
This really feels like that
'springtime of youth' thing.");
    MsgDisp("主人公","Hehe.
Well, shall we go?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
SEWait();
