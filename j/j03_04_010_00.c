Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Oh, it's a phone call from ｛七ツ森＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, it's ｛主人公苗字｝.");
    VoicePlay("J030401000_04_000");
    MsgDisp("Nanatsumori","Ah......Hey.
I heard your voicemail thing, it's fine.");
    MsgDisp("主人公","Really? Then, on ｛日付｝ I'll be
waiting for you at ｛待ち合わせ場所｝.");
    VoicePlay("J030401000_04_010");
    MsgDisp("Nanatsumori","Okay, okay.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray-!
I hope that ｛日付｝ comes soon!)");
    break ;
    case 3:
    MsgDisp("主人公","(Oh, It's a phone call from ｛七ツ森＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, it's ｛主人公苗字｝.");
    VoicePlay("J030401000_04_020");
    MsgDisp("Nanatsumori","Oh, hi. It's Nanatsumori.
Just heard the voicemail.");
    MsgDisp("主人公","Yeah.
So, I suppose you'll come?");
    VoicePlay("J030401000_04_030");
    MsgDisp("Nanatsumori","It's OK.
What about the day of the event?");
    MsgDisp("主人公","Then, on ｛日付｝ I guess we can meet at
｛待ち合わせ場所｝?");
    VoicePlay("J030401000_04_040");
    MsgDisp("Nanatsumori","That's okay.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hoorayー!
I hope that ｛日付｝ comes soon!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Oh, it's a phone call from ｛七ツ森＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, it's ｛主人公苗字｝.");
    VoicePlay("J030401000_04_050");
    MsgDisp("Nanatsumori","Hi.
Sorry, I missed your call.");
    MsgDisp("主人公","It's okay.
So, you'll come?");
    VoicePlay("J030401000_04_060");
    MsgDisp("Nanatsumori","Of course I'm going.");
    MsgDisp("主人公","Phew! Then, on ｛日付｝ I'll be waiting
for you at the ｛待ち合わせ場所｝.");
    VoicePlay("J030401000_04_070");
    MsgDisp("Nanatsumori","Ah. I need a wake up call from you to avoid
oversleeping. Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hoorayー!
I hope that ｛日付｝ comes soon!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
