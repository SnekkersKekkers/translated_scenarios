switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Oh, it's from ｛氷室＊＊｝?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    MsgDisp("主人公","Hello, ｛氷室＊＊｝?
Happy New Year.");
    VoicePlay("S040600000_06_000");
    MsgDisp("Himuro","Ah, yeah.
......Happy New Year.");
    MsgDisp("主人公","What's wrong?");
    VoicePlay("S040600000_06_010");
    MsgDisp("Himuro","Uh......Do you have any plans?
Want to visit the shrine?");
    MsgSel("Yeah, let's go!","Sorry, I can't......");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040600000_06_020");
        MsgDisp("Himuro","Okay, it's settled then.
I'll pick you up so wait home.");
        MsgDisp("主人公","Got it.
Okay, see you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(A shrine visit with ｛氷室＊＊｝.
Well then, what should I wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040600000_06_030");
        MsgDisp("Himuro","Ah, I see.");
        MsgDisp("主人公","Sorry.");
        VoicePlay("S040600000_06_040");
        MsgDisp("Himuro","It's fine.
Bye then.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he invited me,
maybe I did something wrong......)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Huh?
｛氷室＊＊｝ is calling.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛氷室＊＊｝?");
    VoicePlay("S040600000_06_050");
    MsgDisp("Himuro","Ah, yeah......
Happy New Year.");
    MsgDisp("主人公","Happy New Year!");
    VoicePlay("S040600000_06_060");
    MsgDisp("Himuro","It's good to see you so energetic
this early in the year. By the way, are
you free today?");
    MsgSel("Yeah, let's go!","Sorry, I can't......");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040600000_06_070");
        MsgDisp("Himuro","I see.
......I'm glad I invited you.");
        MsgDisp("主人公","Eh?");
        VoicePlay("S040600000_06_080");
        MsgDisp("Himuro","Nothing.
I'll come pick you up, so wait for me.");
        MsgDisp("主人公","Alright, got it!");
        VoicePlay("S040600000_06_090");
        MsgDisp("Himuro","Oh, don't rush to get ready.
I'll come slowly.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(A shrine visit with ｛氷室＊＊｝
Now what to wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040600000_06_100");
        MsgDisp("Himuro","Errands or something?
Just do them another——
......No, it's nothing.");
        VoicePlay("S040600000_06_110");
        MsgDisp("Himuro","See you later then.");
        MsgDisp("主人公","Yeah, bye......");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he invited me,
maybe I did something wrong......)");
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
