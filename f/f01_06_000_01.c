switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛氷室＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,2,1,0,0,#1,0,0);
    VoicePlay("F010600001_06_000");
    MsgDisp("Himuro","......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(He left...
I definitely shouldn't call him that.)");
    break ;
    case 3:
    MsgDisp("主人公","｛氷室＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,0,1,0,#1,#1,0,0);
    VoicePlay("F010600001_06_010");
    MsgDisp("Himuro","...who?");
    MsgDisp("主人公","Are you not ｛氷室＊＊｝?");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600001_06_020");
    MsgDisp("Himuro","Quit it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(He left...
I guess I shouldn't call him that.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛氷室＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,2,2,0,0,#1,0,0);
    VoicePlay("F010600001_06_030");
    MsgDisp("Himuro","Hey, stop that.");
    MsgDisp("主人公","What, calling you ｛氷室＊＊｝?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600001_06_040");
    MsgDisp("Himuro","Yeah, that.
I don't want you to call me that.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(He left...
I guess I shouldn't call him that.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
