switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛七ツ森＊｝.");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,4,2,1,#1,#1,0,0);
    VoicePlay("F010400001_04_000");
    MsgDisp("Nanatsumori","Shh!
That name, it's totally NG.
So.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(He left...
He doesn't seem to like it when I call him
that.)");
    break ;
    case 3:
    MsgDisp("主人公","｛七ツ森＊｝.");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,4,4,1,#1,#1,0,0);
    VoicePlay("F010400001_04_010");
    MsgDisp("Nanatsumori","That... shush!
Quit calling me that!");
    MsgDisp("主人公","Sorry, is it bad?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("F010400001_04_020");
    MsgDisp("Nanatsumori","Very.
So don't.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(He left...
He doesn't seem to like it when I call him
that.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛七ツ森＊｝.");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,2,0,0,0,0,0,0);
    VoicePlay("F010400001_04_030");
    MsgDisp("Nanatsumori","......");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("F010400001_04_040");
    MsgDisp("Nanatsumori","... Still NG.
I don't like it...");
    MsgDisp("主人公","You don't like it when I call you that?");
    ChMotion(4,0,1);
    VoicePlay("F010400001_04_050");
    MsgDisp("Nanatsumori","I just don't want you to call me that.
Please.
Seriously...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(He left...
He doesn't seem to like it when I call him
that.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
