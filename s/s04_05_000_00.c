switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Oh, a phone call. Who is it?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    VoicePlay("S040500000_05_000");
    MsgDisp("Hiiragi","Hello.
It's Hiiragi.");
    MsgDisp("主人公","｛柊＊＊＊｝?
Happy New Years!");
    VoicePlay("S040500000_05_010");
    MsgDisp("Hiiragi","Happy New Years.
I was thinking about going to the shrine.
Do you want to go together?");
    MsgSel("Yeah, let's go!","Sorry, I'm a bit……");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040500000_05_020");
        MsgDisp("Hiiragi","Okay then, I'll let you get
ready.
I'll be there in a while.");
        MsgDisp("主人公","Got it.
I'll wait for you.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","I need to get dressed.
What should I wear?");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040500000_05_030");
        MsgDisp("Hiiragi","I see.
I'm sorry for being so spontaenous.");
        VoicePlay("S040500000_05_040");
        MsgDisp("Hiiragi","See you later then.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he took the
time to invite me, did I do something
wrong?......)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, a phone call. Who is it?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    VoicePlay("S040500000_05_050");
    MsgDisp("Hiiragi","Hello. It's Hiiragi.
Happy New Year.");
    MsgDisp("主人公","Happy New Years, ｛柊＊＊＊｝!");
    VoicePlay("S040500000_05_060");
    MsgDisp("Hiiragi","Such a cheerful voice on the first
day of the year. I'm happy to hear it.");
    MsgDisp("主人公","Hehe, I'm happy to hear
｛柊＊＊＊｝ 's voice too.");
    VoicePlay("S040500000_05_070");
    MsgDisp("Hiiragi","How about we both go and cheerfully
say hello to the gods?");
    MsgSel("Yeah, let's go!","Sorry, I'm a bit……");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040500000_05_080");
        MsgDisp("Hiiragi","That's a good response.
I'll come and pick you up now.");
        MsgDisp("主人公","Is that okay?
I'll get ready and wait for you.");
        VoicePlay("S040500000_05_090");
        MsgDisp("Hiiragi","It's a lot of work to get ready,
right? I'll wait a bit, so take your
time.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(I feel like he has high
expectations for something......
Now then, what should I wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040500000_05_100");
        MsgDisp("Hiiragi","Oh I see, it's impossible.");
        MsgDisp("主人公","Yeah......sorry.");
        VoicePlay("S040500000_05_110");
        MsgDisp("Hiiragi","Just hearing your voice is
already half of my New Year's goal.");
        VoicePlay("S040500000_05_120");
        MsgDisp("Hiiragi","I hope to see you
again this year.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he went through
the trouble of inviting me......
Did I make the wrong choice......?)");
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
