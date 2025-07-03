switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    ChLayout(1);
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A");
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(5);
    VoicePlay("J040500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Oh, ｛柊＊＊＊｝.
What's wrong?");
    VoicePlay("J040500000_05_010");
    MsgDisp("Hiiragi","Are you free this Sunday?");
    MsgSel("Yeah, I'm free.", "I have to run an errand……");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("J040500000_05_020");
        MsgDisp("Hiiragi","Oh, I see......");
        MsgDisp("主人公","Yeah, I'm sorry.");
        ChEye(5,0);
        ChMotion(5,0);
        VoicePlay("J040500000_05_030");
        MsgDisp("Hiiragi","Sorry for the timing, too.
I'll ask you out again.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(5);
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
    default :
    DbgAssert(1);
    break ;
    }
