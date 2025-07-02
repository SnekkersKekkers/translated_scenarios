switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("L040400001_04_000");
    MsgDisp("Nanatsumori","Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Hm,
well, I guess that's it......)");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("L040400001_04_010");
    MsgDisp("Nanatsumori","I see it's obligatory chocolate.");
    MsgDisp("主人公","What......?");
    ChEye(4,4);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("L040400001_04_020");
    MsgDisp("Nanatsumori","I'm joking.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(I guess he seemed pleased?)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,0);
    VoicePlay("L040400001_04_030");
    MsgDisp("Nanatsumori","............?
Are you sure you're giving this to
the right person?");
    MsgDisp("主人公","You're ｛七ツ森＊｝, right?");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("L040400001_04_040");
    MsgDisp("Nanatsumori","No way......
Obligatory, obligatory, obligatory......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(He seemed depressed......
Maybe I should've given him better
chocolate......?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
