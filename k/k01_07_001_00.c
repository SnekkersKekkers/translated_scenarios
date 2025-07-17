BGOpen("sc351",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛御影＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    SEWait();
    BGMPlay("BGM_C07_MIKAGE_A");
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoiceEVSPlay(7);
    VoicePlay("K010700100_07_000");
    MsgDisp("Mikage","｛主人公｝.
You're in high spirits today.");
    MsgDisp("主人公","Since it's your birthday,
｛御影＊＊｝.
Here, take this.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("K010700100_07_010");
    MsgDisp("Mikage","Gifts from students are...");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("K010700100_07_020");
    MsgDisp("Mikage","I'll take it!
Thank you.");
    MsgDisp("主人公","Yay!
Please open it!");
    break ;
    case 3:
    MsgDisp("主人公","｛御影＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    SEWait();
    BGMPlay("BGM_C07_MIKAGE_A");
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("K010700100_07_030");
    MsgDisp("Mikage","Ooh, you're in high spirits?");
    MsgDisp("主人公","Happy birthday!
Will you accept this present?");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("K010700100_07_040");
    MsgDisp("Mikage","Of course～
Thanks.");
    MsgDisp("主人公","You're welcome.
If you'd like, please open it!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛御影＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    SEWait();
    BGMPlay("BGM_C07_MIKAGE_A");
    ChOpen(7,254,3,0,3,8,#1,0,0);
    VoicePlay("K010700100_07_050");
    MsgDisp("Mikage","You've come～?
I've been waiting.");
    MsgDisp("主人公","Hehe, thank you for waiting.
Happy birthday!
Here's your present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    ChEyeOpenLevel(7,10);
    VoicePlay("K010700100_07_060");
    MsgDisp("Mikage","Thank you!
So, what is it?
What did you choose for me?");
    MsgDisp("主人公","Please open it up and see!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChEyeOpenLevel(7,#1);
