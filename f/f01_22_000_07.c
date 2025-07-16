ChLayout(1);
MsgClose();
BGMPlay("BGM_C22_HIKARU_A",0.01);
Wait(15,0);
ChOpen(22,254,0,3,3,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(22,0);
    ChMouth(22,0);
    ChMotion(22,3,1);
    VoicePlay("F012200007_22_000");
    MsgDisp("Hikaru","Oh, it's Mari.");
    MsgDisp("主人公","｛ひかる＊｝.
Are you going home now?");
    ChEye(22,0);
    ChMouth(22,0);
    ChMotion(22,4,1);
    VoicePlay("F012200007_22_010");
    MsgDisp("Hikaru","Yep!
Ah, how about Hikaru and Mari go home
together?");
    break ;
    case 4:
    case 5:
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("F012200007_22_020");
    MsgDisp("Hikaru","Found you, Mari!");
    MsgDisp("主人公","｛ひかる＊｝.
Are you going home now?");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("F012200007_22_030");
    MsgDisp("Hikaru","That's right～
Hey, hey, we should go together▼");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I have something to do...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(22,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(22,0);
        ChMouth(22,3);
        ChMotion(22,3,1);
        VoicePlay("F012200007_22_040");
        MsgDisp("Hikaru","Aha▼
Then, let's go.");
        break ;
        case 4:
        case 5:
        ChEye(22,3);
        ChMouth(22,3);
        ChMotion(22,3,1);
        ChEyeOpenLevel(22,0);
        ChCheek(22,5);
        VoicePlay("F012200007_22_050");
        MsgDisp("Hikaru","Yay!
Going home with Mari▼");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(22,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(22,0);
        ChMouth(22,3);
        ChMotion(22,3,1);
        VoicePlay("F012200007_22_060");
        MsgDisp("Hikaru","Oh, okay!
Then let's take a detour▼");
        break ;
        case 4:
        case 5:
        ChEye(22,3);
        ChMouth(22,3);
        ChMotion(22,3,1);
        ChCheek(22,5);
        VoicePlay("F012200007_22_070");
        MsgDisp("Hikaru","Let's go!
Hikaru wants to talk with Mari the whole
time▼");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    switch (ChPrmGet(22,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(22,2);
        ChMouth(22,0);
        ChMotion(22,2,1);
        VoicePlay("F012200007_22_080");
        MsgDisp("Hikaru","Eh～ unfortunate.
Goodbye.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(22);
        MsgDisp("主人公","(Hm, did I do something bad?)");
        break ;
        case 4:
        case 5:
        ChEye(22,2);
        ChMouth(22,1);
        ChMotion(22,2,1);
        VoicePlay("F012200007_22_090");
        MsgDisp("Hikaru","No way...");
        MsgDisp("主人公","Sorry.");
        ChEye(22,2);
        ChMouth(22,2);
        ChMotion(22,0,1);
        VoicePlay("F012200007_22_100");
        MsgDisp("Hikaru","Hm...
Bye-bye, Mari.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(22);
        MsgDisp("主人公","(Hm, did I do something bad?)");
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
