switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030500000_05_000");
    MsgDisp("Hiiragi","... Yes.
I'm available.");
    MsgDisp("主人公","Well then, on ｛日付｝
I will be waiting for you at
｛待ち合わせ場所｝!");
    VoicePlay("J030500000_05_010");
    MsgDisp("Hiiragi","Yes.
I look forward to seeing you on the day.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    MsgDisp("主人公","(Hooray!
I can't wait for
｛日付｝ to come!)");
    break ;
    case 3:
    VoicePlay("J030500000_05_020");
    MsgDisp("Hiiragi","... Yes, I am available.
I will go out with you.");
    MsgDisp("主人公","Then, on ｛日付｝ I'll
be waiting for you at the
｛待ち合わせ場所｝.");
    VoicePlay("J030500000_05_030");
    MsgDisp("Hiiragi","Yes.
I will be waiting for you too.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for
｛日付｝ to come.)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030500000_05_040");
    MsgDisp("Hiiragi","...Ah.");
    MsgDisp("主人公","Oh, are you busy?");
    VoicePlay("J030500000_05_050");
    MsgDisp("Hiiragi","No, it's alright.
If we fill it now, I will be able to
schedule it.");
    MsgDisp("主人公","Really?
Then, on ｛日付｝ at
｛待ち合わせ場所｝... okay?");
    VoicePlay("J030500000_05_060");
    MsgDisp("Hiiragi","Yes, of course.
I look forward to it.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for
｛日付｝ to come.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
