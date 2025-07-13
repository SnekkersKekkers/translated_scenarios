switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    ChLayout(1);
    MsgClose();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(6);
    VoicePlay("J040600000_06_000");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","Oh, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("J040600000_06_010");
    MsgDisp("Himuro","Are you free this Sunday?");
    MsgSel("Yeah, I'm free.", "I have to run an errand......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChEyeOpenLevel(6,8);
        VoicePlay("J040600000_06_020");
        MsgDisp("Himuro","What's that?");
        MsgDisp("主人公","Um, sorry.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("J040600000_06_030");
        MsgDisp("Himuro","There's nothing to apologize for....
It was just bad timing.
See you.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        MsgClose();
        ChClose(6);
        Wait(30);
        MsgDisp("主人公","(I feel bad about what I did......)");
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
