ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,254,1,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(3);
    VoicePlay("J040300000_03_000");
    MsgDisp("Honda","｛主人公｝,
I found you!");
    MsgDisp("主人公","｛本多＊＊｝,
is something wrong?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("J040300000_03_010");
    MsgDisp("Honda","Hey.
Are you free this Sunday?");
    MsgSel("Yeah, I'm free.", "I'm not available that day......");
    switch (MsgSelRsltGet()){
        case 0:
        ChEyeOpenLevel(3,#1);
        ChCheek(3,0);
        break ;
        case 1:
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,5);
        VoicePlay("J040300000_03_020");
        MsgDisp("Honda","Oh, I see.
That was unexpected.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("J040300000_03_030");
        MsgDisp("Honda","I guess it can't be helped.
Well, I'll ask you out another time.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        MsgClose();
        ChClose(3);
        Wait(30);
        MsgDisp("主人公","(This Sunday....
What was that about?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,254,3,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("J040300000_03_040");
    MsgDisp("Honda","Oh, there you are.
I looked for you!");
    MsgDisp("主人公","Oh, ｛本多＊＊｝.
What's wrong?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("J040300000_03_050");
    MsgDisp("Honda","Yeah, listen.
Are you free this Sunday?");
    MsgSel("Yeah, I'm free.", "I have to run an errand......");
    switch (MsgSelRsltGet()){
        case 0:
        ChEyeOpenLevel(3,#1);
        ChCheek(3,0);
        break ;
        case 1:
        ChEye(3,5);
        ChMouth(3,4);
        ChMotion(3,5);
        VoicePlay("J040300000_03_060");
        MsgDisp("Honda","Eh!　I see......");
        MsgDisp("主人公","I'm sorry......");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("J040300000_03_070");
        MsgDisp("Honda","Don't apologize.
I'm the one who expected it.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("J040300000_03_080");
        MsgDisp("Honda","I'll ask you out again sometime!
Really, don't mind at all.
I'll see you later, okay?");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        MsgClose();
        ChClose(3);
        Wait(30);
        MsgDisp("主人公","(I think I did something wrong......)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
