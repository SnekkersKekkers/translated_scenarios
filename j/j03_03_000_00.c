switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030300000_03_000");
    MsgDisp("Honda","Yeah, it's okay.");
    MsgDisp("主人公","Then, let's meet on ｛日付｝.
I'll wait for you at the ｛待ち合わせ場所｝.");
    VoicePlay("J030300000_03_010");
    MsgDisp("Honda","Yes ma～m!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
I hope ｛日付｝ arrives fast!)");
    break ;
    case 3:
    VoicePlay("J030300000_03_020");
    MsgDisp("Honda","Mm-hm, let's go!");
    MsgDisp("主人公","Alright, then let's meet on ｛日付｝.
I'll wait for you at the ｛待ち合わせ場所｝.");
    VoicePlay("J030300000_03_030");
    MsgDisp("Honda","Oka～ y!
I'm excited!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
I hope ｛日付｝ arrives fast!)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030300000_03_040");
    MsgDisp("Honda","Yes of course!
Whatever you ask, from now on, the answer
is okay, get it?");
    MsgDisp("主人公","Eh!!");
    VoicePlay("J030300000_03_050");
    MsgDisp("Honda","After all, that'd be troublesome, right?
Sorry sorry.");
    MsgDisp("主人公","Then let's meet on ｛日付｝.
I'll wait for you at the ｛待ち合わせ場所｝.");
    VoicePlay("J030300000_03_060");
    MsgDisp("Honda","Ah, wait!!");
    MsgDisp("主人公","Is something wrong?");
    VoicePlay("J030300000_03_070");
    MsgDisp("Honda","No...
I just thought since you called, it'd be
too bad to hang up just now.");
    VoicePlay("J030300000_03_080");
    MsgDisp("Honda","But there'd be no end!
And it's better to talk in person.");
    MsgDisp("主人公","Hehe, you're right.");
    VoicePlay("J030300000_03_090");
    MsgDisp("Honda","Well, I'm looking forward to the day!
There's a lot I want to talk about.
Don't be late, okay?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!!
I can't wait for ｛日付｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
