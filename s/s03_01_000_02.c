switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030100002_01_000");
    MsgDisp("Kazama","Bad Luck.
I have to go help my grandpa...");
    MsgDisp("主人公","Oh, I see...");
    VoicePlay("S030100002_01_010");
    MsgDisp("Kazama","Cheer up.
I'm really happy to hear your voice.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Guess it can't be helped...
I'll just go alone.)");
    break ;
    case 3:
    VoicePlay("S030100002_01_020");
    MsgDisp("Kazama","Sorry, I can't.
Pull one for me, okay?");
    MsgDisp("主人公","Oh, I guess it can't be helped.");
    VoicePlay("S030100002_01_030");
    MsgDisp("Kazama","Listen, it's not safe to go alone.
Try to go with your parents or a friend.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Ahh, unfortunate...)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030100002_01_040");
    MsgDisp("Kazama","I want to go.
... But I can't.");
    MsgDisp("主人公","You have something else to do?");
    VoicePlay("S030100002_01_050");
    MsgDisp("Kazama","Grandpa's warehouse.
We haven't done end of year inventory yet.
Please pray for the both of us.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Ah, it can't be helped...
Time to go.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
