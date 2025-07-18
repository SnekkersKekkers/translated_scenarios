switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030200001_02_000");
    MsgDisp("Sassa","...Ah, this day is not good for me.
Sorry.");
    MsgDisp("主人公","I see, too bad.");
    VoicePlay("J030200001_02_010");
    MsgDisp("Sassa","My bad.");
    MsgDisp("主人公","Don't worry, talk to you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He refused, that's too bad.)");
    break ;
    case 3:
    VoicePlay("J030200001_02_020");
    MsgDisp("Sassa","Ah, I can't on that day!
I have stuff planned.
Sorry.");
    MsgDisp("主人公","I see, that's too bad.");
    VoicePlay("J030200001_02_030");
    MsgDisp("Sassa","Yeah, invite me again, okay?");
    MsgDisp("主人公","Sure, I'll do that.");
    VoicePlay("J030200001_02_040");
    MsgDisp("Sassa","See ya.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Did I ask him out at a bad time?)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030200001_02_050");
    MsgDisp("Sassa","Ahh...
I can't!
I have plans on that day...");
    MsgDisp("主人公","I see, can't be helped!");
    VoicePlay("J030200001_02_060");
    MsgDisp("Sassa","Even though you took the time to ask me...");
    MsgDisp("主人公","That's okay.
I'll call you another time.");
    VoicePlay("J030200001_02_070");
    MsgDisp("Sassa","Huhh, but when is \"another time\"?
Bye...");
    MsgDisp("主人公","B-Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmph...
I called at a bad time.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
