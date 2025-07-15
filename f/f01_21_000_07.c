MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
ChOpen(21,254,7,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChMotion(21,0);
    VoicePlay("F012100007_21_000");
    MsgDisp("Michiru","Mari.");
    MsgDisp("主人公","Oh, ｛みちる＊｝.");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("F012100007_21_010");
    MsgDisp("Michiru","Hehe. Shall we go home together?");
    break ;
    case 4:
    case 5:
    ChEye(21,3);
    ChMouth(21,3);
    ChMotion(21,1);
    VoicePlay("F012100007_21_020");
    MsgDisp("Michiru","Oh, Mari!");
    MsgDisp("主人公","｛みちる＊｝. What's up?");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("F012100007_21_030");
    MsgDisp("Michiru","I want to go home together.
What about you?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I have something to do...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(21,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(21,3);
        ChMouth(21,3);
        ChMotion(21,3);
        VoicePlay("F012100007_21_040");
        MsgDisp("Michiru","Good.
Let's go.");
        break ;
        case 4:
        case 5:
        ChEye(21,3);
        ChMouth(21,3);
        ChMotion(21,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("F012100007_21_050");
        MsgDisp("Michiru","Ah, I'm glad.
Well then, let's go slowly.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(21,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(21,0);
        ChMouth(21,3);
        ChMotion(21,1);
        VoicePlay("F012100007_21_060");
        MsgDisp("Michiru","I approve.
Let's go.");
        break ;
        case 4:
        case 5:
        ChEye(21,3);
        ChMouth(21,3);
        ChMotion(21,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("F012100007_21_070");
        MsgDisp("Michiru","That's a brilliant idea!
Let's talk a lot.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    switch (ChPrmGet(21,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(21,4);
        ChMouth(21,4);
        ChMotion(21,4);
        VoicePlay("F012100007_21_080");
        MsgDisp("Michiru","That's unfortunate.
Well, another time?");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(21);
        MsgDisp("主人公","(Hmm,
Did I do something wrong?)");
        break ;
        case 4:
        case 5:
        ChEye(21,2);
        ChMouth(21,2);
        ChMotion(21,4);
        VoicePlay("F012100007_21_090");
        MsgDisp("Michiru","I see...");
        MsgDisp("主人公","Sorry.");
        ChEye(21,4);
        ChMouth(21,0);
        ChMotion(21,5);
        VoicePlay("F012100007_21_100");
        MsgDisp("Michiru","No, it's alright.
Well then, another time?");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(21);
        MsgDisp("主人公","(Hmm,
Did I do something wrong?)");
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
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
