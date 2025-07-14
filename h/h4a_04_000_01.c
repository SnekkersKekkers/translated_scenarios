BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_B",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H4A0400001_04_000");
    MsgDisp("Nanatsumori","It was close.
Don't mind.");
    MsgDisp("主人公","｛七ツ森＊｝...... Thanks.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("H4A0400001_04_010");
    MsgDisp("Nanatsumori","If you ask me, just on visuals, I think
you were the best, you know?");
    MsgDisp("主人公","Really?");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H4A0400001_04_020");
    MsgDisp("Nanatsumori","Really. Congrats on winning the grand
prize for visuals today!");
    MsgDisp("主人公","(Hehe......! I lost, but I'm glad I stayed
in the rhythmic gymnastics club.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C04_NANA_B",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("H4A0400001_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","｛七ツ森＊｝......");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("H4A0400001_04_040");
    MsgDisp("Nanatsumori","Good work.
Cheer up.");
    MsgDisp("主人公","Okay......");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H4A0400001_04_050");
    MsgDisp("Nanatsumori","You were so pretty and cute that I
would've given you points even when you
messed up, you know?");
    MsgDisp("主人公","Really......?
Hehe, thanks.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H4A0400001_04_060");
    MsgDisp("Nanatsumori","Yeah. So, for making me feel like I was
the only one who got it, thank you.");
    MsgDisp("主人公","(｛七ツ森＊｝...... I lost, but I'm
glad I stayed in the rhythmic gymnastics
club.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
