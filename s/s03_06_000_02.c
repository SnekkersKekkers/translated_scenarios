switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030600002_06_000");
    MsgDisp("Himuro","It's not possible today.");
    MsgDisp("主人公","I see...
Well, I guess it can't be helped then.");
    VoicePlay("S030600002_06_010");
    MsgDisp("Himuro","Yeah.
Well then, bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It can't be helped...
I'll just go alone.)");
    break ;
    case 3:
    VoicePlay("S030600002_06_020");
    MsgDisp("Himuro","Sorry, I just went with my family.");
    MsgDisp("主人公","I see, that's unfortunate.");
    VoicePlay("S030600002_06_030");
    MsgDisp("Himuro","I think it's more crowded around this time
so be careful.
Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It can't be helped...
I'll just go alone.)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030600002_06_040");
    MsgDisp("Himuro","Eh...really?");
    MsgDisp("主人公","Not a good time?");
    VoicePlay("S030600002_06_050");
    MsgDisp("Himuro","My family has a gathering today.");
    MsgDisp("主人公","Ah, I see...");
    VoicePlay("S030600002_06_060");
    MsgDisp("Himuro","Huh...I miscalculated. I didn't expect to
be asked out. I wasn't thinking...");
    MsgDisp("主人公","It was too sudden.
Sorry.");
    VoicePlay("S030600002_06_070");
    MsgDisp("Himuro","No, I should have asked you earlier
myself.
...Take care.");
    MsgDisp("主人公","Thanks.
Okay then, see you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He had plans, how unfortunate...
I don't have a choice then, let's go with
someone else.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
