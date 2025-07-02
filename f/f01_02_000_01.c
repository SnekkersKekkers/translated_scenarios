switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛颯砂＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,254,5,0,0,-1,-1,0,0);
    VoicePlay("F010200001_02_000");
    MsgDisp("Sassa","Uh, did you mean me?");
    MsgDisp("主人公","Was it so bad?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("F010200001_02_010");
    MsgDisp("Sassa","Hm... I guess it's too early to say.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(Seems like I shouldn't call him that.)");
    break ;
    case 3:
    MsgDisp("主人公","｛颯砂＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,254,5,0,0,-1,-1,0,0);
    VoicePlay("F010200001_02_020");
    MsgDisp("Sassa","Did you mean me?");
    MsgDisp("主人公","Yeah. Was it bad?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("F010200001_02_030");
    MsgDisp("Sassa","I'd like it if you didn't call me that.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(He left.
Seems like I shouldn't call him that.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛颯砂＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,254,4,0,0,-1,-1,0,0);
    VoicePlay("F010200001_02_040");
    MsgDisp("Sassa","Huh?　Just now, were you calling me?");
    MsgDisp("主人公","Uhm, yeah.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("F010200001_02_050");
    MsgDisp("Sassa","Uh, no matter how much you like it,
It doesn't seem right.");
    MsgDisp("主人公","Sorry. Do you dislike it?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("F010200001_02_060");
    MsgDisp("Sassa","Yeah, call me something else.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(He left.
It doesn't seem like he liked that.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
