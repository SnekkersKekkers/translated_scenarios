switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030200002_02_000");
    MsgDisp("Sassa","I'm going to visit family now.
I promised them beforehand.");
    MsgDisp("主人公","Ah, I see.");
    VoicePlay("S030200002_02_010");
    MsgDisp("Sassa","Sorry, even though you went through the
trouble of inviting me...");
    MsgDisp("主人公","Don't worry.
It's fine.
Okay then, see you later?");
    VoicePlay("S030200002_02_020");
    MsgDisp("Sassa","Yeah.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(I guess it can't be helped...
I'll visit the shrine alone.)");
    break ;
    case 3:
    break ;
    case 4:
    case 5:
    break ;
    default :
    DbgAssert(1);
    break ;
    }
