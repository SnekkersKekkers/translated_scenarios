switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A");
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("J040200000_02_000");
    MsgDisp("Sassa","Found it!");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝, what's wrong?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("J040200000_02_010");
    MsgDisp("Sassa","Yeah, are you free this coming Sunday?");
    MsgSel("Yeah, I'm free.","I'm not available that day......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("J040200000_02_020");
        MsgDisp("Sassa","Oh.
I'll see you later.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("J040200000_02_030");
        MsgDisp("Sassa","Next time you're free, call me.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        MsgClose();
        ChClose(2);
        Wait(30);
        MsgDisp("主人公","(This Sunday......
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
    BGMPlay("BGM_C02_SASSA_A");
    ChOpen(2,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("J040200000_02_040");
    MsgDisp("Sassa","｛主人公｝.
I found you immediately.
Because you stand out.");
    MsgDisp("主人公","Eh, I don't think so?
So, what can I do for you?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("J040200000_02_050");
    MsgDisp("Sassa","Yes, it's important.
Are you free this Sunday?");
    MsgSel("Yeah, I'm free.","I'm not available that day......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("J040200000_02_060");
        MsgDisp("Sassa","I see......
Yeah, then I guess I don't have a choice.");
        MsgDisp("主人公","Sorry?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("J040200000_02_070");
        MsgDisp("Sassa","Don't apologize.
You didn't do anything wrong.
I'll call on you again.");
        MsgDisp("主人公","Yeah.
｛颯砂＊＊｝, thank you.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("J040200000_02_080");
        MsgDisp("Sassa","Thank you......
Yeah, I appreciate it too.
See you later.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        MsgClose();
        ChClose(2);
        Wait(30);
        MsgDisp("主人公","(He invited me to join him......
I wonder what he wanted this coming
Sunday?)");
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
