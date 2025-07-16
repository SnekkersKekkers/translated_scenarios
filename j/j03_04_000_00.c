switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030400000_04_000");
    MsgDisp("Nanatsumori","Well...... it's fine.");
    MsgDisp("主人公","Okay then, on ｛日付｝
I'll be waiting for you at
｛待ち合わせ場所｝!");
    VoicePlay("J030400000_04_010");
    MsgDisp("Nanatsumori","Okay, okay.
I'll be the guest of honor.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray-!
I hope that ｛日付｝
comes soon!)");
    break ;
    case 3:
    VoicePlay("J030400000_04_020");
    MsgDisp("Nanatsumori","ＯＫ.
The rendezvous point will be?");
    MsgDisp("主人公","Then, on ｛日付｝ I'll
be waiting for you at the
｛待ち合わせ場所｝.");
    VoicePlay("J030400000_04_030");
    MsgDisp("Nanatsumori","Roger.
I'll be the guest of honor.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray-!
I hope that ｛日付｝
comes soon!)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030400000_04_040");
    MsgDisp("Nanatsumori","I'll be there.");
    MsgDisp("主人公","Then, ｛日付｝ I'll be
waiting for you at the
｛待ち合わせ場所｝.");
    VoicePlay("J030400000_04_050");
    MsgDisp("Nanatsumori","Gotcha.");
    MsgDisp("主人公","See you later......");
    VoicePlay("J030400000_04_060");
    MsgDisp("Nanatsumori","Wait.");
    MsgDisp("主人公","What's up?");
    VoicePlay("J030400000_04_070");
    MsgDisp("Nanatsumori","Ah......Sorry. I'll save the talk for our
date. See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray-!
I hope that ｛日付｝
comes soon!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
