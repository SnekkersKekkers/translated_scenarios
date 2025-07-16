ChLayout(1);
BGOpen("sc130",1);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    VoicePlay("F010700007_07_000");
    MsgDisp("Mikage","Oh.
Are you going home right now?");
    MsgDisp("主人公","Yes.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("F010700007_07_010");
    MsgDisp("Mikage","Then let's go home together.");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("F010700007_07_020");
    MsgDisp("Mikage","Oh.
If you've got time, how about we walk home
together?");
    MsgDisp("主人公","Oh, ｛御影＊＊｝!");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,4);
    VoicePlay("F010700007_07_030");
    MsgDisp("Mikage","That just now, wasn't it kind of weak?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I have something to do...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("F010700007_07_040");
        MsgDisp("Mikage","Then, let's go.");
        break ;
        case 4:
        case 5:
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,0);
        VoicePlay("F010700007_07_050");
        MsgDisp("Mikage","Oh, that's fine.
Then, shall we go?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("F010700007_07_060");
        MsgDisp("Mikage","Oh, that's fine.");
        break ;
        case 4:
        case 5:
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,2);
        VoicePlay("F010700007_07_070");
        MsgDisp("Mikage","Oh.
Well, take it easy.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("F010700007_07_080");
        MsgDisp("Mikage","Well, then it can't be helped.
See you later.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(7);
        MsgDisp("主人公","(Right...
He went to the trouble of inviting me, but
it just wasn't right...)");
        break ;
        case 4:
        case 5:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("F010700007_07_090");
        MsgDisp("Mikage","Hey, why are you apologize?
It's my fault.
See you.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(7);
        MsgDisp("主人公","(Right...
He went to the trouble of inviting me, but
it just wasn't right...)");
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
ChEye(7,#1);
ChMouth(7,#1);
ChEyeOpenLevel(7,#1);
