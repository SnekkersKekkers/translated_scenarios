switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030400001_04_000");
    MsgDisp("Nanatsumori","I can't. I have something to do that day.");
    MsgDisp("主人公","Is that so......
Well, then, I don't blame you.");
    VoicePlay("J030400001_04_010");
    MsgDisp("Nanatsumori","Oh, well, then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad!)");
    break ;
    case 3:
    VoicePlay("J030400001_04_020");
    MsgDisp("Nanatsumori","That day......Huh.");
    MsgDisp("主人公","Eh?");
    VoicePlay("J030400001_04_030");
    MsgDisp("Nanatsumori","I had a prior engagement.
Too bad.");
    MsgDisp("主人公","Is that so......
Well, then I don't blame you.");
    VoicePlay("J030400001_04_040");
    MsgDisp("Nanatsumori","Next time you try, go for it.
Well then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad!)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030400001_04_050");
    MsgDisp("Nanatsumori","Oh, my God......Ah-.");
    MsgDisp("主人公","Perhaps you have a prior engagement?");
    VoicePlay("J030400001_04_060");
    MsgDisp("Nanatsumori","Yeah. I can't leave this one
out......Nope, nope. Sorry.");
    MsgDisp("主人公","Ahh.
I'll ask you out again?");
    VoicePlay("J030400001_04_070");
    MsgDisp("Nanatsumori","Like that.
Oh, I'll ask you out too.");
    MsgDisp("主人公","Ha ha!
Okay, I'll see you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
