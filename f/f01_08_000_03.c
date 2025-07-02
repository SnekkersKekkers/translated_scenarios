switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("F010800003_08_000");
    MsgDisp("Shirahane","Yep, that's it.");
    MsgDisp("主人公","Well, then let's go.");
    break ;
    case 3:
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,2,1);
    ChEyeOpenLevel(8,0);
    ChCheek(8,5);
    VoicePlay("F010800003_08_010");
    MsgDisp("Shirahane","Of course.
I was a little nervous, y'know.");
    MsgDisp("主人公","Hehe.
Let's go!");
    break ;
    case 4:
    case 5:
    ChEye(8,4);
    ChMouth(8,4);
    ChMotion(8,4,1);
    ChCheek(8,7);
    VoicePlay("F010800003_08_020");
    MsgDisp("Shirahane","Mhm!
Haha, I feel a little shy all of a
sudden.");
    MsgDisp("主人公","Hehe.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("F010800003_08_030");
    MsgDisp("Shirahane","Well, let's go.");
    MsgDisp("主人公","Yep!");
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
ChCheek(8,0);
