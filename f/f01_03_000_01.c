switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛本多＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A",0.01);
    ChOpen(3,254,0,4,4,#1,#1,0,0);
    VoicePlay("F010300001_03_000");
    MsgDisp("Honda","...");
    MsgDisp("主人公","Huh?
Um, ｛本多＊＊｝?");
    ChEye(3,5);
    ChMouth(3,5);
    ChMotion(3,5);
    VoicePlay("F010300001_03_010");
    MsgDisp("Honda","'Da'— You forgot the 'Hon'!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(If I call him that...
I don't think he'll ever respond...)");
    break ;
    case 3:
    MsgDisp("主人公","｛本多＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A",0.01);
    ChOpen(3,254,5,5,4,#1,#1,0,0);
    VoicePlay("F010300001_03_020");
    MsgDisp("Honda","Uh, me?");
    MsgDisp("主人公","Yes.
Should I not call you that?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("F010300001_03_030");
    MsgDisp("Honda","No, it's more like...
I don't think I can respond to that.
Sorry.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(Okay...
Seems like he doesn't like it when I call
him that.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛本多＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A",0.01);
    ChOpen(3,254,0,4,4,#1,#1,0,0);
    VoicePlay("F010300001_03_040");
    MsgDisp("Honda","That's a creative name.");
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("F010300001_03_050");
    MsgDisp("Honda","But I don't think it really suits me～
It makes me feel all itchy, so can't you
call me something else?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(It'd be good if I think of something else
to call him...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
