ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛みちる＊｝.");
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,5,4,4,-1,-1,0,0);
    VoicePlay("F012100001_21_000");
    MsgDisp("Michiru","It's no good, Mari.
It's embarassing when you call me that...");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(21);
    MsgDisp("主人公","(She left...
She doesn't seem to like it when I call
her that.)");
    break ;
    case 3:
    MsgDisp("主人公","｛みちる＊｝.");
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,0,5,4,-1,-1,0,0);
    VoicePlay("F012100001_21_010");
    MsgDisp("Michiru","...Huh?
Are you talking to me?");
    MsgDisp("主人公","Yes.");
    ChEye(21,2);
    ChMouth(21,2);
    ChMotion(21,5);
    VoicePlay("F012100001_21_020");
    MsgDisp("Michiru","I can't...
I just don't think I can accept it.");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(21);
    MsgDisp("主人公","(She left...
She doesn't seem to like it when I call
her that.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛みちる＊｝.");
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,0,2,3,-1,-1,0,0);
    VoicePlay("F012100001_21_030");
    MsgDisp("Michiru","Ugh, that...
Are you joking?");
    MsgDisp("主人公","Huh?");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,5);
    VoicePlay("F012100001_21_040");
    MsgDisp("Michiru","No...
But wouldn't even Mari get mad for the
second time?");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(21);
    MsgDisp("主人公","(She left...
She doesn't seem to like it when I call
her that.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
