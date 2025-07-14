BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_B",0.01);
    ChOpen(5,254,0,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(5,3);
    VoicePlay("H3A0500000_05_000");
    MsgDisp("Hiiragi","That was a wonderful point!");
    MsgDisp("主人公","｛柊＊＊＊｝! Yes, I did it!");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("H3A0500000_05_010");
    MsgDisp("Hiiragi","You executed that shoulder throw, and your
opponent did a breakfall, and the
referee's right hand went up-");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("H3A0500000_05_020");
    MsgDisp("Hiiragi","With you in the center, time seemed to
stop.
It was beautiful.");
    MsgDisp("主人公","Thank you, ｛柊＊＊＊｝.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("H3A0500000_05_030");
    MsgDisp("Hiiragi","Your judo completely mesmerized me.");
    ChMotion(5,0);
    ChEyeOpenLevel(5,#1);
    VoicePlay("H3A0500000_05_040");
    MsgDisp("Hiiragi","Hm?
No, perhaps it was you?");
    MsgDisp("主人公","(Yay! ｛柊＊＊＊｝ seems pleased, and I'm
really glad I did my best in judo!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
BGMStop();
