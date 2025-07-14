BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛風真＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,254,0,2,3,#1,#1,0,0);
    VoicePlay("K010100100_01_000");
    MsgDisp("Kazama","What is it?
You're a noisy one.");
    MsgDisp("主人公","What, it's ｛風真＊＊｝'s birthday today,
right?
Happy birthday.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("K010100100_01_010");
    MsgDisp("Kazama","Wow, you remembered?
You can do it if you try.");
    MsgDisp("主人公","Gosh, I do remember!
Anyways, do you want to open it?");
    break ;
    case 3:
    MsgDisp("主人公","Ah, he's here. ｛風真＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,254,0,2,3,#1,#1,0,0);
    VoicePlay("K010100100_01_020");
    MsgDisp("Kazama","What are you hurrying for?");
    MsgDisp("主人公","It's your birthday, isn't it?
Here, a present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("K010100100_01_030");
    MsgDisp("Kazama","Amazing. Even just remembering would be
enough, you know?");
    ChEye(1,0);
    ChMotion(1,0);
    MsgDisp("主人公","Gosh, I won't forget it.
Anyways, do you want to open it?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛風真＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ChEye(1,3);
    ChMotion(1,3);
    VoiceEVSPlay(1);
    VoicePlay("K010100100_01_040");
    MsgDisp("Kazama","｛主人公｝. I've been waiting for you.");
    MsgDisp("主人公","Hehe, thank you for waiting.
Happy birthday!
I hope you'll like your present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("K010100100_01_050");
    MsgDisp("Kazama","Well, I'm already happy enough that you
remembered.");
    MsgDisp("主人公","Gosh. Alright already, open up your
present.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("K010100100_01_060");
    MsgDisp("Kazama","Got it, got it.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
