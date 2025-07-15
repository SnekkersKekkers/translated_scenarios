BGOpen("ho210",0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Huh? It's ｛七ツ森＊｝. )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello?");
    VoicePlay("J040400001_04_000");
    MsgDisp("Nanatsumori","It's me. Nanatsumori. Can I talk to you
now?");
    MsgDisp("主人公","Yeah, what's up?");
    VoicePlay("J040400001_04_010");
    MsgDisp("Nanatsumori","This coming Sunday,
are you free??");
    MsgSel("Yeah, I'm free.", "I have to run an errand......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040400001_04_020");
        MsgDisp("Nanatsumori","I don't blame you for running errands.");
        MsgDisp("主人公","Sorry.");
        VoicePlay("J040400001_04_030");
        MsgDisp("Nanatsumori","All right,
I'll see you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Hmmm, he invited me all this way.
Did I do something wrong......)");
        MsgClose();
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
