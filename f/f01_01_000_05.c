switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("F010100005_01_000");
    MsgDisp("Kazama","Oh, let's go.");
    MsgDisp("主人公","Sure!");
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("F010100005_01_010");
    MsgDisp("Kazama","Ha, you can do it after all, huh?");
    MsgDisp("主人公","Uh, what?");
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    Wait(16,0);
    ChMouth(1,3);
    ChEyeOpenLevel(1,#1);
    VoicePlay("F010100005_01_020");
    MsgDisp("Kazama","This way.
Thanks for inviting me. Let's go!");
    break ;
    case 4:
    case 5:
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("F010100005_01_030");
    MsgDisp("Kazama","Sure, let's go.");
    MsgDisp("主人公","Yay!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("F010100005_01_040");
    MsgDisp("Kazama","Don't be so happy about it.");
    MsgDisp("主人公","I am happy, though.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("F010100005_01_050");
    MsgDisp("Kazama","I get it. 
This way can be good, too.
Well, should we go?");
    MsgDisp("主人公","Hehe, yep!");
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
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
