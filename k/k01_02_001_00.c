BGOpen("sc210",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛颯砂＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A");
    ChOpen(2,254,0,0,4,#1,#1,0,0);
    VoicePlay("K010200100_02_000");
    MsgDisp("Sassa","Oh, what is it?");
    MsgDisp("主人公","Um, here, I got you a
birthday present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("K010200100_02_010");
    MsgDisp("Sassa","You got one for me?
I'm happy.");
    MsgDisp("主人公","Yeah, I chose it for you, ｛颯砂＊＊｝.");
    break ;
    case 3:
    MsgDisp("主人公","｛颯砂＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A");
    ChOpen(2,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("K010200100_02_020");
    MsgDisp("Sassa","｛主人公｝. What's up?");
    MsgDisp("主人公","It's your birthday.
Here's your present, ｛颯砂＊＊｝!");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("K010200100_02_030");
    MsgDisp("Sassa","Really!?
I'm so happy, thank you!");
    MsgDisp("主人公","I hope you like it......");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A");
    ChOpen(2,254,1,0,3,#1,#1,0,0);
    VoicePlay("K010200100_02_040");
    MsgDisp("Sassa","I've been waiting!");
    MsgDisp("主人公","Hehe, you have?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("K010200100_02_050");
    MsgDisp("Sassa","Yeah. I was even about to go running over
to where you were.");
    MsgDisp("主人公","Hehe! Well then, here's your birthday
present. Do you want to open it?");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("K010200100_02_060");
    MsgDisp("Sassa","Yeah, I've been looking forward to this.
Well, what did you get me～?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
