switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛ひかる＊｝.");
    MsgClose();
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,1,2,2,#1,#1,0,0);
    VoicePlay("F012200001_22_000");
    MsgDisp("Hikaru","Oh～
That name's no good, you know.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(She left...
It doesn't seem like she likes it when I
call her that.)");
    break ;
    case 3:
    MsgDisp("主人公","｛ひかる＊｝.");
    MsgClose();
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,4,2,#1,#1,0,0);
    VoicePlay("F012200001_22_010");
    MsgDisp("Hikaru","Are you talking to Hikaru?");
    MsgDisp("主人公","Yes.");
    ChMotion(22,2,1);
    VoicePlay("F012200001_22_020");
    MsgDisp("Hikaru","No, no!
It might be Mari, but you can't call
Hikaru that.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(She left...
It doesn't seem like she likes it when I
call her that.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛ひかる＊｝.");
    MsgClose();
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,4,2,#1,#1,0,0);
    VoicePlay("F012200001_22_030");
    MsgDisp("Hikaru","Just now...did you call for Hikaru?");
    MsgDisp("主人公","Yes.
Was it bad?");
    ChEye(22,2);
    ChMouth(22,0);
    ChMotion(22,3,1);
    VoicePlay("F012200001_22_040");
    MsgDisp("Hikaru","Mhm, no good.
It might be Mari, but still.
You know?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(22);
    MsgDisp("主人公","(She left...
It doesn't seem like she likes it when I
call her that.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
