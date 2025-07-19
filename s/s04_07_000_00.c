switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Oh, a phone call.
I wonder who it is?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    VoicePlay("S040700000_07_000");
    MsgDisp("Mikage","Happy New Years.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Happy New Years to you too!");
    VoicePlay("S040700000_07_010");
    MsgDisp("Mikage","I was thinking about visiting the shrine
soon, what do you think?");
    MsgSel("Yes, I'd love to!","Sorry, I'm a bit...");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040700000_07_020");
        MsgDisp("Mikage","It's good luck, so we'd better go.
I'll come pick you up.");
        MsgDisp("主人公","Okay, got it.");
        VoicePlay("S040700000_07_030");
        MsgDisp("Mikage","It'll be good, right?");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(A shrine visit with ｛御影＊＊｝!
...Now what should I wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040700000_07_040");
        MsgDisp("Mikage","I see.
Well, I'll go without you.");
        MsgDisp("主人公","Hehe, please do.");
        VoicePlay("S040700000_07_050");
        MsgDisp("Mikage","Got it.
I'll pray on your behalf for your success!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Maybe I should have gone?
I feel a bit sorry...)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Oh, a phone call.
Who is it?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    VoicePlay("S040700000_07_060");
    MsgDisp("Mikage","Hey, Happy New Years.");
    MsgDisp("主人公","｛御影＊＊｝!
Happy New Years.");
    VoicePlay("S040700000_07_070");
    MsgDisp("Mikage","I'm thinking about visiting the shrine
now.
Are you free?");
    MsgSel("Yeah, I'd be happy to!","Sorry, I'm a bit...");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040700000_07_080");
        MsgDisp("Mikage","Oh, I see.
We're together this year.");
        MsgDisp("主人公","Hehe, what should we pray for?");
        VoicePlay("S040700000_07_090");
        MsgDisp("Mikage","What do pray for, hmm?
I'll think about it while I come to pick
you up.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(A New Year's shrine visit with
｛御影＊＊｝!
...What should I wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040700000_07_100");
        MsgDisp("Mikage","I understand.
I'll go in your place then.");
        MsgDisp("主人公","Yes please.");
        VoicePlay("S040700000_07_110");
        MsgDisp("Mikage","Got it, I'm in charge.
See you later then.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Hm...
I guess I feel bad about that...?)");
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
