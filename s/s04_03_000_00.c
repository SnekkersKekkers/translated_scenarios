switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, ｛本多＊＊｝ is calling.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛本多＊＊｝?");
    VoicePlay("S040300000_03_000");
    MsgDisp("Honda","Happy New Year!");
    MsgDisp("主人公","Happy New Year.");
    VoicePlay("S040300000_03_010");
    MsgDisp("Honda","Hey, do you want to go visit the shrine
together right now?");
    MsgSel("Yep, let's go!","Sorry, that's a bit...");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040300000_03_020");
        MsgDisp("Honda","It's decided!
I'll pick you up ASAP so wait at home.");
        MsgDisp("主人公","Wait, right now?");
        VoicePlay("S040300000_03_030");
        MsgDisp("Honda","Yep!
See you soon!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛本多＊＊｝ will be here soon...
I need to hurry and get ready!
What should I wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040300000_03_040");
        MsgDisp("Honda","Dang, no way.");
        MsgDisp("主人公","Uhm...
Sorry.");
        VoicePlay("S040300000_03_050");
        MsgDisp("Honda","It's fine, I guess it was too sudden.
See you later!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he took the trouble to invite
me, I wonder if I made the wrong
choice...)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, it's ｛本多＊＊｝.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    MsgDisp("主人公","Hello——");
    VoicePlay("S040300000_03_060");
    MsgDisp("Honda","Happy New Year!");
    MsgDisp("主人公","Happy New Year.
Treat me well this year.");
    VoicePlay("S040300000_03_070");
    MsgDisp("Honda","Of course, you too!
Are you home right now?");
    MsgDisp("主人公","Yep, what's up?");
    VoicePlay("S040300000_03_080");
    MsgDisp("Honda","If you're free, would you want to visit
the shrine with me?");
    MsgSel("Yeah, let's go!","Sorry, I can't...");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040300000_03_090");
        MsgDisp("Honda","Phew, that's a relief.");
        VoicePlay("S040300000_03_100");
        MsgDisp("Honda","Okay, I'll come to your house.
Get ready and wait for me.");
        MsgDisp("主人公","Okay, got it.");
        VoicePlay("S040300000_03_110");
        MsgDisp("Honda","Kimono time——");
        VoicePlay("S040300000_03_120");
        MsgDisp("Honda","Ah, that sounds so good.
I'm looking forward to seeing you.");
        MsgDisp("主人公","?");
        VoicePlay("S040300000_03_130");
        MsgDisp("Honda","See you soon.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He clearly just said Kimono.
Well then, what should we wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040300000_03_140");
        MsgDisp("Honda","No way......");
        MsgDisp("主人公","Uhm...
｛本多＊＊｝?");
        VoicePlay("S040300000_03_150");
        MsgDisp("Honda","Ah, yeah.
It's okay, I just froze for a second.");
        MsgDisp("主人公","Sorry.");
        VoicePlay("S040300000_03_160");
        MsgDisp("Honda","It can't be helped.
My invitation was too sudden.
See you later...");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he went through the trouble
of inviting me.
Did I make the wrong choice...)");
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
