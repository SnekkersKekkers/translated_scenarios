ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    break ;
    case 2:
    case 3:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("F010600007_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Oh, ｛氷室＊＊｝. What's up?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("F010600007_06_010");
    MsgDisp("Himuro","I happened to see you.
So, how about we walk home together?");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("F010600007_06_020");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","Oh, ｛氷室＊＊｝. What's up?");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    ChCheek(6,5);
    VoicePlay("F010600007_06_030");
    MsgDisp("Himuro","Nothing's 'up'.
...let's walk home together.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I'm busy.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        break ;
        case 2:
        case 3:
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,1);
        VoicePlay("F010600007_06_040");
        MsgDisp("Himuro","Then, let's go.");
        break ;
        case 4:
        case 5:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        VoicePlay("F010600007_06_050");
        MsgDisp("Himuro","...got it.");
        MsgDisp("主人公","Huh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("F010600007_06_060");
        MsgDisp("Himuro","It's nothing for you to worry about.
Well, let's go.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        break ;
        case 2:
        case 3:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("F010600007_06_070");
        MsgDisp("Himuro","That works.
I'm thirsty.");
        break ;
        case 4:
        case 5:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("F010600007_06_080");
        MsgDisp("Himuro","...I don't mind?");
        MsgDisp("主人公","You know, you don't have to.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("F010600007_06_090");
        MsgDisp("Himuro","I said I don't mind.
So, let's go!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        break ;
        case 2:
        case 3:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChEyeOpenLevel(6,0);
        VoicePlay("F010600007_06_100");
        MsgDisp("Himuro","Oh, okay.
...later.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(6);
        MsgDisp("主人公","(He called me out and everything, so I
feel like I did something wrong...)");
        break ;
        case 4:
        case 5:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChCheek(6,0);
        VoicePlay("F010600007_06_110");
        MsgDisp("Himuro",".....");
        MsgDisp("主人公","Sorry?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("F010600007_06_120");
        MsgDisp("Himuro","Nothing.
I'll ask you out again.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(6);
        MsgDisp("主人公","(He called me out and everything, so I
feel like I did something wrong...)");
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
ScrFadeOut(0,0);
ChCheek(6,0);
