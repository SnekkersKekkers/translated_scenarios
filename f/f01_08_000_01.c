ChLayout(1);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,254,4,0,4,10,-1,5,0);
    VoicePlay("F010800001_08_000");
    MsgDisp("Shirahane","∋
That sucks. It's embarrassing...
Later!");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(He left...
I guess he didn't like that?)");
    break ;
    case 3:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,254,4,2,4,-1,-1,5,0);
    VoicePlay("F010800001_08_010");
    MsgDisp("Shirahane","No good.
I can't even think of a reply...
Later.");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(He left.
It seems like that name's no good.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,254,2,1,1,0,0,5,0);
    VoicePlay("F010800001_08_020");
    MsgDisp("Shirahane","......");
    ChEye(8,2);
    ChMouth(8,2);
    ChMotion(8,0,1);
    VoicePlay("F010800001_08_030");
    MsgDisp("Shirahane","That's no good.
No matter how you look at it, it's
no good.");
    MsgDisp("主人公","Do you not like it when I call you
that?");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("F010800001_08_040");
    MsgDisp("Shirahane","Nah.
I forgive ya, but...
Later.");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(He left...
It seems like that name's no good.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
