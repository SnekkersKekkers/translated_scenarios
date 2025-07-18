switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030400002_04_000");
    MsgDisp("Nanatsumori","Not possible.");
    MsgDisp("主人公","Ehー...");
    VoicePlay("S030400002_04_010");
    MsgDisp("Nanatsumori","It's really cold outside.
I don't want to catch a cold.");
    MsgDisp("主人公","Ah...yeah.
I guess that's true.");
    VoicePlay("S030400002_04_020");
    MsgDisp("Nanatsumori","Yeah.
Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It can't be helped...
Let's go alone then.)");
    break ;
    case 3:
    VoicePlay("S030400002_04_030");
    MsgDisp("Nanatsumori","No, I'm not a child anymore.");
    MsgDisp("主人公","But we're the same age...");
    VoicePlay("S030400002_04_040");
    MsgDisp("Nanatsumori","You're a child still.
I'm an adult.");
    MsgDisp("主人公","Ehー...");
    VoicePlay("S030400002_04_050");
    MsgDisp("Nanatsumori","Be safe then.
And don't catch a cold, okay?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It can't be helped...
Let's go alone then.)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030400002_04_060");
    MsgDisp("Nanatsumori","Haa...
I wanted to go with you too.");
    MsgDisp("主人公","Ah...
Work?");
    VoicePlay("S030400002_04_070");
    MsgDisp("Nanatsumori","Yeah.
The Model Agency's New Year's Party.");
    MsgDisp("主人公","I guess it can't be helped...
Be safe then.
Byebye.");
    VoicePlay("S030400002_04_080");
    MsgDisp("Nanatsumori","Thank you.
Try not to catch a cold, okay?");
    MsgDisp("主人公","Yeah.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hm, that's unfortunate...
Let's go alone then...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
