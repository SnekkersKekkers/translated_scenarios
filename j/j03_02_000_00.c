switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030200000_02_000");
    MsgDisp("Sassa","Yeah, that seems alright.");
    MsgDisp("主人公","Great, then I'll be waiting at the
｛待ち合わせ場所｝ on
｛日付｝.");
    VoicePlay("J030200000_02_010");
    MsgDisp("Sassa","Yeah, see ya!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yes!
I can't wait for
｛日付｝ to come!)");
    break ;
    case 3:
    VoicePlay("J030200000_02_020");
    MsgDisp("Sassa","Yeah, that's good.");
    MsgDisp("主人公","Great, then I'll be waiting at the
｛待ち合わせ場所｝ on
｛日付｝.");
    VoicePlay("J030200000_02_030");
    MsgDisp("Sassa","Yeah, it'll be fun.
Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yes!
I can't wait for
｛日付｝ to come!)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030200000_02_040");
    MsgDisp("Sassa","Sure, I'll go!
I'm getting really excited right now.");
    MsgDisp("主人公","Hehe, that much?");
    VoicePlay("J030200000_02_050");
    MsgDisp("Sassa","Of course, it's going to be fun.");
    MsgDisp("主人公","Sure, then I'll be waiting at the
｛待ち合わせ場所｝ on
｛日付｝.");
    VoicePlay("J030200000_02_060");
    MsgDisp("Sassa","Got it.
I'll run.
Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
I hope ｛日付｝ comes
fast!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
