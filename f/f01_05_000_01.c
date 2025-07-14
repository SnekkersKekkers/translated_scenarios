switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛柊＊＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,0,0,0,#1,#1,0,0);
    VoicePlay("F010500001_05_000");
    MsgDisp("Hiiragi","Excuse me, but what exactly are you trying
to accomplish in calling me that?
Well then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(He left...
He doesn't seem to like it when I call him
that.)");
    break ;
    case 3:
    MsgDisp("主人公","｛柊＊＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,0,2,2,#1,#1,0,0);
    VoicePlay("F010500001_05_010");
    MsgDisp("Hiiragi","What was that just now?");
    MsgDisp("主人公","Sorry, did you not like it?");
    ChEye(5,4);
    ChMouth(5,0);
    VoicePlay("F010500001_05_020");
    MsgDisp("Hiiragi","No, I did not.
There's a natural order to some things.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(He left...
He doesn't seem to like it when I call him
that.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛柊＊＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,4,2,4,#1,#1,0,0);
    VoicePlay("F010500001_05_030");
    MsgDisp("Hiiragi","Are you referring to me?");
    MsgDisp("主人公","Yes. Sorry, do you dislike it?");
    ChEye(5,4);
    ChMouth(5,0);
    ChMotion(5,2);
    VoicePlay("F010500001_05_040");
    MsgDisp("Hiiragi","I do... sorry.");
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("F010500001_05_050");
    MsgDisp("Hiiragi","If I overlook this, you might try to keep
going.
I need to stop it here.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
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
