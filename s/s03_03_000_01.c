switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030300001_03_000");
    MsgDisp("Honda","That sounds good!
Let's go.");
    MsgDisp("主人公","Yay!");
    VoicePlay("S030300001_03_010");
    MsgDisp("Honda","I'm coming to pick you up.
Wait there for me.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
A shrine visit with ｛本多＊＊｝.
What should I wear?)");
    break ;
    case 3:
    VoicePlay("S030300001_03_020");
    MsgDisp("Honda","Let's go, let's go!");
    MsgDisp("主人公","Yay.
Okay then, let's meet up at——");
    VoicePlay("S030300001_03_030");
    MsgDisp("Honda","I'm going to pick you up. I'll be there
soon so get ready and wait for me, okay?
Cya!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(I need to get ready before
｛本多＊＊｝ gets here!
So, what should I wear?)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030300001_03_040");
    MsgDisp("Honda","Of course!
I'll be right there!");
    VoicePlay("S030300001_03_050");
    MsgDisp("Honda","Oh, wait...
Girls take a while to get ready.");
    VoicePlay("S030300001_03_060");
    MsgDisp("Honda","I'll give you a bit more time.");
    MsgDisp("主人公","Hehe, thank you.");
    VoicePlay("S030300001_03_070");
    MsgDisp("Honda","Well, see you later then!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(｛本多＊＊｝ is coming soon.
I have to hurry up and get dressed!
What should I wear?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
