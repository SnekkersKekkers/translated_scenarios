switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛御影＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,254,1,2,0,-1,-1,0,0);
    VoicePlay("F010700001_07_000");
    MsgDisp("Mikage","Uh, what's with that?
Do something else.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(He left.
I definitely shouldn't call him that...)");
    break ;
    case 3:
    MsgDisp("主人公","｛御影＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,254,3,2,3,0,-1,0,0);
    VoicePlay("F010700001_07_010");
    MsgDisp("Mikage","Hahaha.
You don't mean me, do you?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(I did...
I definitely shouldn't call him that.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛御影＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,254,2,2,0,-1,-1,0,0);
    VoicePlay("F010700001_07_020");
    MsgDisp("Mikage","Hm, it's you...
But no, no no no. Not that.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(Um...
I shouldn't call him that...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
