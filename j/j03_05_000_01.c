switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030500001_05_000");
    MsgDisp("Hiiragi","...That day is filled.");
    MsgDisp("主人公","I see...
It can't be helped.");
    VoicePlay("J030500001_05_010");
    MsgDisp("Hiiragi","Yes, sorry about that.
If you will excuse me.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    MsgDisp("主人公","(Hmmm, too bad!)");
    break ;
    case 3:
    VoicePlay("J030500001_05_020");
    MsgDisp("Hiiragi","...Oh, that day is filled.");
    MsgDisp("主人公","I see...
Too bad, but what can you do.");
    VoicePlay("J030500001_05_030");
    MsgDisp("Hiiragi","It was your invitation, I'm sorry.");
    MsgDisp("主人公","Er, well.
Well, I'll see you later?");
    VoicePlay("J030500001_05_040");
    MsgDisp("Hiiragi","Yes");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Well, that's a real shame!)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030500001_05_050");
    MsgDisp("Hiiragi","...Oh...no, it's difficult that day.");
    MsgDisp("主人公","Oh ... you're busy.");
    VoicePlay("J030500001_05_060");
    MsgDisp("Hiiragi","Sorry, I just can not take it off.");
    MsgDisp("主人公","It's fine!
I'll ask you out again.");
    VoicePlay("J030500001_05_070");
    MsgDisp("Hiiragi","Yes, next time I'll be sure to say ...
I prefer not to make promises I can't
keep. Well then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Ugh... too bad!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
