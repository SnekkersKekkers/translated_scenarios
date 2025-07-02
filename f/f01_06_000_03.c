switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,8);
    VoicePlay("F010600003_06_000");
    MsgDisp("Himuro","...I don't particularly mind.");
    MsgDisp("主人公","Yay!
Let's go.");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600003_06_010");
    MsgDisp("Himuro","Okay.");
    MsgDisp("主人公","Then, let's go!");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,5);
    VoicePlay("F010600003_06_020");
    MsgDisp("Himuro","...Well, I don't have plans.");
    MsgDisp("主人公","Yay!
Well then, let's go home.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600003_06_030");
    MsgDisp("Himuro","Why do you look so happy about it?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
SEWait();
ChCheek(6,0);
