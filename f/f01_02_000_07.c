ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,254,3,0,3,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("F010200007_02_000");
    MsgDisp("Sassa","｛主人公｝. Are you going home now?");
    MsgDisp("主人公","Mhm. You too?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("F010200007_02_010");
    MsgDisp("Sassa","Yeah, I was hoping you would go home with
me.
What do you think?");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("F010200007_02_020");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Oh, ｛颯砂＊＊｝. Were you waiting for me?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("F010200007_02_030");
    MsgDisp("Sassa","Yeah. I thought we could go home together.
What do you think?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I'm busy.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,4);
        VoicePlay("F010200007_02_040");
        MsgDisp("Sassa","Yes! Let's go.");
        MsgDisp("主人公","Okay.");
        break ;
        case 4:
        case 5:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("F010200007_02_050");
        MsgDisp("Sassa","I see... that's fine. I wanted to go home
with you today. Let's go.");
        MsgDisp("主人公","Heheh, sure.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,0);
        ChEyeOpenLevel(2,0);
        VoicePlay("F010200007_02_060");
        MsgDisp("Sassa","That's good.
I'm hungry, too.");
        break ;
        case 4:
        case 5:
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("F010200007_02_070");
        MsgDisp("Sassa","That's good.
We can talk about a lot of things.");
        MsgDisp("主人公","Yep, that's right.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("F010200007_02_080");
        MsgDisp("Sassa","I guess we'll eat something, too?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    BGMStop();
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("F010200007_02_090");
        MsgDisp("Sassa","Oh, is that so...
The timing must be bad.");
        MsgClose();
        BGMStop();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(2);
        MsgDisp("主人公","(He went to the trouble of inviting me, so
I feel guilty...)");
        break ;
        case 4:
        case 5:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("F010200007_02_100");
        MsgDisp("Sassa","I see.
It's all good, don't apologize.
Maybe another time.");
        MsgDisp("主人公","Sure.
Thank you for inviting me.");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,0);
        ChEyeOpenLevel(2,0);
        VoicePlay("F010200007_02_110");
        MsgDisp("Sassa","Well then, take care.");
        MsgClose();
        BGMStop();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(2);
        MsgDisp("主人公","(He went to the trouble of inviting me, so
I feel guilty...)");
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
