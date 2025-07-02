ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,1);
    VoicePlay("F012100005_21_000");
    MsgDisp("Michiru","Is this a good time?
Let's go.");
    MsgDisp("主人公","Alright!");
    break ;
    case 3:
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,1);
    VoicePlay("F012100005_21_010");
    MsgDisp("Michiru","Some after-school teatime?
I like it.");
    MsgDisp("主人公","Yay!");
    break ;
    case 4:
    case 5:
    ChEye(21,3);
    ChMouth(21,3);
    ChMotion(21,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("F012100005_21_020");
    MsgDisp("Michiru","Of course!
Being able to talk with Mari after
school... it makes me so happy.");
    MsgDisp("主人公","Haha, me too, I guess?");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("F012100005_21_030");
    MsgDisp("Michiru","Then, let's go quickly.
There are many things I want to
discuss!");
    MsgDisp("主人公","Okay!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(21,-1);
ChMouthOpenLevel(21,-1);
ChCheek(21,0);
