BGOpen("sc210",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛颯砂＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A");
    ChOpen(2,254,3,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("L040200000_02_000");
    MsgDisp("Sassa","｛主人公｝.
Oh, could it be?");
    MsgDisp("主人公","Yes, here.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 3:
    MsgDisp("主人公","｛颯砂＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A");
    ChOpen(2,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("L040200000_02_010");
    MsgDisp("Sassa","｛主人公｝,
I've been waiting!");
    MsgDisp("主人公","Yes, here.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A");
    ChOpen(2,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("L040200000_02_020");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Ah, good timing.
I was looking for you, ｛颯砂＊＊｝.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("L040200000_02_030");
    MsgDisp("Sassa","Yeah. I know,
so I've been looking all over for you.");
    MsgDisp("主人公","Oh, is that so?");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("L040200000_02_040");
    MsgDisp("Sassa","Yeah.
I've been waiting since yesterday.");
    MsgDisp("主人公","Hehe, thank you for waiting.
Here's your Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
