switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030100000_01_000");
    MsgDisp("Kazama","OK.");
    MsgDisp("主人公","Great, then I'll be waiting 
at the ｛待ち合わせ場所｝
on ｛日付｝.");
    VoicePlay("J030100000_01_010");
    MsgDisp("Kazama","Can't wait.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yes!
I can't wait for ｛日付｝ to come!)");
    break ;
    case 3:
    VoicePlay("J030100000_01_020");
    MsgDisp("Kazama","Sure, I'll go out with you.");
    MsgDisp("主人公","Great, then I'll be waiting 
at the ｛待ち合わせ場所｝
on ｛日付｝.");
    VoicePlay("J030100000_01_030");
    MsgDisp("Kazama","Don't rush, take your time coming.
See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
I hope ｛日付｝ comes fast!)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030100000_01_040");
    MsgDisp("Kazama","Sure, I was thinking about it too.");
    MsgDisp("主人公","Really?");
    VoicePlay("J030100000_01_050");
    MsgDisp("Kazama","No point in lying to you.
Isn't that good? The telepathy.");
    MsgDisp("主人公","Yeah! Then, I'll be waiting for you 
at the ｛待ち合わせ場所｝ on ｛日付｝. 
Alright?");
    VoicePlay("J030100000_01_060");
    MsgDisp("Kazama","Yeah, take care on the way.
But you know that.");
    MsgDisp("主人公","I got it!
Take care too, ｛風真＊＊｝!");
    VoicePlay("J030100000_01_070");
    MsgDisp("Kazama","I don't have to worry about you anymore,
do I? See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay, can't wait!
I hope ｛日付｝ arrives soon!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
