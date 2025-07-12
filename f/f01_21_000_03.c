ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,1);
    VoicePlay("F012100003_21_000");
    MsgDisp("Michiru","We shall do that.");
    MsgDisp("主人公","Hehe, I'm glad!");
    break ;
    case 3:
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("F012100003_21_010");
    MsgDisp("Michiru","Of course.
Let's go.");
    MsgDisp("主人公","Mhm!");
    break ;
    case 4:
    case 5:
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,4);
    VoicePlay("F012100003_21_020");
    MsgDisp("Michiru","We shall do that.
There are many things I want to talk
about.");
    MsgDisp("主人公","Hehe.
Well, let's go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(21,#1);
ChMouthOpenLevel(21,#1);
ChCheek(21,0);
