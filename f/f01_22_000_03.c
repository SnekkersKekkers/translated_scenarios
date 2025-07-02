switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,0,1);
    VoicePlay("F012200003_22_000");
    MsgDisp("Hikaru","Sure, okay!");
    MsgDisp("主人公","Yay!");
    break ;
    case 3:
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,0,1);
    VoicePlay("F012200003_22_010");
    MsgDisp("Hikaru","Of course that works～");
    MsgDisp("主人公","Hehe, yay!");
    break ;
    case 4:
    case 5:
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    ChCheek(22,5);
    VoicePlay("F012200003_22_020");
    MsgDisp("Hikaru","Heh▼
Mari asked Hikaru out.
Let's go♪");
    MsgDisp("主人公","Yay!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
