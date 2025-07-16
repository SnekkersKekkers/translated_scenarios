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
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    VoicePlay("L040100000_01_000");
    MsgDisp("Kazama","You're finally here.");
    MsgDisp("主人公","Hehe, thanks for waiting.
Here, Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 3:
    MsgDisp("主人公","｛風真＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ChMotion(1,3);
    VoicePlay("L040100000_01_010");
    MsgDisp("Kazama","Oh, you're fast.
Those priorities are okay with me.");
    MsgDisp("主人公","Um...... what?");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("L040100000_01_020");
    MsgDisp("Kazama","What, today, you have some, right?");
    MsgDisp("主人公","Hehe, were you waiting?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("L040100000_01_030");
    MsgDisp("Kazama","You set me up?
Yeah yeah, I've been waiting for you.");
    MsgDisp("主人公","It's good to be honest.
Here you go.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 4:
    case 5:
    VoiceEVSPlay(1);
    VoicePlay("L040100000_01_040");
    MsgDisp("Kazama?","｛主人公｝.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","｛風真＊＊｝!
I was looking for you.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100000_01_050");
    MsgDisp("Kazama","I thought so.
That's why I came here for you.");
    MsgDisp("主人公","Hehe, thank you.
Well, here.
Your chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,1);
    VoicePlay("L040100000_01_060");
    MsgDisp("Kazama","Thank you.
...... Do you have other chocolates too?");
    MsgDisp("主人公","Hm?
Um......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100000_01_070");
    MsgDisp("Kazama","Well, even if there are, it seems like I'm
the highest priority, so I'll forgive you.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
