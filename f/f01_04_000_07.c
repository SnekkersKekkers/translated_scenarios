ChLayout(1);
MsgClose();
BGMPlay("BGM_C04_NANA_A",0.01);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("F010400007_04_000");
    MsgDisp("Nanatsumori","Yo.
Are you going home right now?");
    MsgDisp("主人公","Yes.
You too, ｛七ツ森＊｝?");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("F010400007_04_010");
    MsgDisp("Nanatsumori","Yep.
Should we walk together?");
    break ;
    case 4:
    case 5:
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoiceEVSPlay(4);
    VoicePlay("F010400007_04_020");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Oh, ｛七ツ森＊｝.");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("F010400007_04_030");
    MsgDisp("Nanatsumori","Yo.
I was waiting.
I thought we could go home together.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I'm busy.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("F010400007_04_040");
        MsgDisp("Nanatsumori","Ah.
Let's go.");
        break ;
        case 4:
        case 5:
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("F010400007_04_050");
        MsgDisp("Nanatsumori","...Ah.");
        MsgDisp("主人公","What's wrong?");
        ChEye(4,0);
        ChMouth(4,3);
        VoicePlay("F010400007_04_060");
        MsgDisp("Nanatsumori","Is this what they call happiness?
Let's go.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("F010400007_04_070");
        MsgDisp("Nanatsumori","OK, let's go.
I'm hungry.");
        break ;
        case 4:
        case 5:
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("F010400007_04_080");
        MsgDisp("Nanatsumori","OK.
Let's eat together.
Sweets are on me.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("F010400007_04_090");
        MsgDisp("Nanatsumori","Oh, that's fine.
Later.");
        MsgClose();
        BGMStop();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(4,0,30);
        MsgDisp("主人公","(He went to the trouble of inviting me,
so I feel guilty...)");
        break ;
        case 4:
        case 5:
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,2,1);
        VoicePlay("F010400007_04_100");
        MsgDisp("Nanatsumori","Oh... if you're busy, then there's
nothing we can do.");
        MsgDisp("主人公","Huh?");
        ChEye(4,0);
        ChMouth(4,0);
        ChMouthOpenLevel(4,0);
        VoicePlay("F010400007_04_110");
        MsgDisp("Nanatsumori","......");
        ChEye(4,2);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("F010400007_04_120");
        MsgDisp("Nanatsumori","Go ahead, get your stuff done.");
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("F010400007_04_130");
        MsgDisp("Nanatsumori","Don't worry about it.
Later...");
        MsgClose();
        BGMStop();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(4,0,30);
        MsgDisp("主人公","(He went to the trouble of inviting me,
so I feel guilty...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
