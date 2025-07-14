switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝ is calling.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛七ツ森＊｝?");
    VoicePlay("S040400000_04_000");
    MsgDisp("Nanatsumori","Happy New Year.");
    MsgDisp("主人公","Happy New Year!");
    VoicePlay("S040400000_04_010");
    MsgDisp("Nanatsumori","Hey, if you're free right now, would you
like to come with me to the shrine?");
    MsgSel("Yeah, let's go!","Sorry, I can't......");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040400000_04_020");
        MsgDisp("Nanatsumori","ＯＫ.
Ok then, I'll pick you up.");
        MsgDisp("主人公","Okay, got it.");
        SEWait();
        MsgDisp("主人公","(A shrine visit with ｛七ツ森＊｝!
What should I wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040400000_04_030");
        MsgDisp("Nanatsumori","Oh, you're busy.
That's disappointing.");
        MsgDisp("主人公","Sorry.");
        VoicePlay("S040400000_04_040");
        MsgDisp("Nanatsumori","Don't worry about it.
See you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he went through the trouble
of inviting me, did I do something
wrong......)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝ is calling.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛七ツ森＊｝?");
    VoicePlay("S040400000_04_050");
    MsgDisp("Nanatsumori","Happy New Year.");
    MsgDisp("主人公","Hehe, Happy New Year!");
    VoicePlay("S040400000_04_060");
    MsgDisp("Nanatsumori","I'm so relieved you picked up.");
    MsgDisp("主人公","Huh?");
    VoicePlay("S040400000_04_070");
    MsgDisp("Nanatsumori","I want to us to go to the shrine together.
What do you think?");
    MsgSel("Sure, let's go!","Sorry, I can't......");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040400000_04_080");
        MsgDisp("Nanatsumori","Yes!
Okay, I'm coming to pick you up now.");
        MsgDisp("主人公","Okay, got it.");
        VoicePlay("S040400000_04_090");
        MsgDisp("Nanatsumori","Ah, you'll take a while to
get ready, huh?");
        MsgDisp("主人公","Eh?");
        VoicePlay("S040400000_04_100");
        MsgDisp("Nanatsumori","You don't have to hurry.
Just make the right decision.
See you soon.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(I feel like he's expecting something from
me......
Hmm, what to wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040400000_04_110");
        MsgDisp("Nanatsumori","Noo......");
        MsgDisp("主人公","Yeah.");
        VoicePlay("S040400000_04_120");
        MsgDisp("Nanatsumori","It's fine.
New Year's is a really busy day, I guess.");
        MsgDisp("主人公","I'm really sorry.");
        VoicePlay("S040400000_04_130");
        MsgDisp("Nanatsumori","Don't worry about it. It's cold, so try
not to get sick. Bye......");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he went through all the
trouble of inviting me......
Did I make a bad choice......)");
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
