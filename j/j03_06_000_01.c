switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030600001_06_000");
    MsgDisp("Himuro","Impossible.");
    MsgDisp("主人公","What, you already have plans?");
    VoicePlay("J030600001_06_010");
    MsgDisp("Himuro","I'm saying no because I do.
Later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad!)");
    break ;
    case 3:
    VoicePlay("J030600001_06_020");
    MsgDisp("Himuro","I can't because I have plans that day..");
    MsgDisp("主人公","I see.
Too bad......");
    VoicePlay("J030600001_06_030");
    MsgDisp("Himuro","Well, invite me again when you feel like
it.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad!)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030600001_06_040");
    MsgDisp("Himuro","Are you free, only that day?");
    MsgDisp("主人公","Maybe you already have a plan?");
    VoicePlay("J030600001_06_050");
    MsgDisp("Himuro","Yeah......");
    MsgDisp("主人公","I see.
Well, I don't have a choice.
I'll invite you next time, okay?");
    VoicePlay("J030600001_06_060");
    MsgDisp("Himuro","......Alright.
Be sure to invite me.");
    MsgDisp("主人公","Yeah, I'll see you later..");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Too bad, I'll invite him again......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
