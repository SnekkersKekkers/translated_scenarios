switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Oh, a phone call.
It's from ｛風真＊＊｝.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛風真＊＊｝?");
    VoicePlay("S040100000_01_000");
    MsgDisp("Kazama","Happy New Year.");
    MsgDisp("主人公","Hehe, Happy New Year.");
    VoicePlay("S040100000_01_010");
    MsgDisp("Kazama","Let's go and visit the shrine.");
    MsgSel("Sure, let's go!","Sorry, I'm a bit……");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040100000_01_020");
        MsgDisp("Kazama","Nice answer.
I'll take my time coming there, so don't
rush getting ready.");
        MsgDisp("主人公","You're coming to pick me up?　Thanks.");
        VoicePlay("S040100000_01_030");
        MsgDisp("Kazama","No, thank you.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He's expecting something, huh?
Now then, what should I wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040100000_01_040");
        MsgDisp("Kazama","A bit what.");
        MsgDisp("主人公","Sorry.");
        VoicePlay("S040100000_01_050");
        MsgDisp("Kazama","It's fine.
I guess we can go whenever.
See you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he invited me...
Did I do something wrong......)");
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
It's ｛風真＊＊｝.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    MsgDisp("主人公","Hello?");
    VoicePlay("S040100000_01_060");
    MsgDisp("Kazama","Happy New Years.");
    MsgDisp("主人公","Hehe, Happy New Years.
Take care of me this year.");
    VoicePlay("S040100000_01_070");
    MsgDisp("Kazama","Gotcha.
Let's go then and visit the shrine.");
    MsgSel("Yeah, let's go!","Sorry, I'm a bit……");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040100000_01_080");
        MsgDisp("Kazama","ＯＫ.
I'm coming in a bit.");
        MsgDisp("主人公","Thank you.
You're coming to pick me up?");
        VoicePlay("S040100000_01_090");
        MsgDisp("Kazama","I'll be the first one to see you in a
kimono. I won't give that memory over to
anyone else. See you soon.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He's expecting I wear a kimono......
What should I do?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040100000_01_100");
        MsgDisp("Kazama","......Well, we don't have to go today.
It's crowded, anyway.");
        MsgDisp("主人公","Yeah, sorry.");
        VoicePlay("S040100000_01_110");
        MsgDisp("Kazama","Don't apologize. You'll make me feel like
I got rejected.
See you.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he took the time to
invite me...
Was that the right choice?......)");
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
