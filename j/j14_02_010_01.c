MsgSel("Yeah, I'll be there!" , " Sorry but that day I'm busy...");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("J140201001_02_000");
    MsgDisp("Sassa","Oh, that's nice.");
    MsgDisp("主人公","Then, I'll meet you at the
｛待ち合わせ場所｝ Is it okay with you?");
    VoicePlay("J140201001_02_010");
    MsgDisp("Sassa","I'll let them know.
See you on the day!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(The four of us are going out, huh?
I'm looking forward to it.)");
    break ;
    case 1:
    VoicePlay("J140201001_02_020");
    MsgDisp("Sassa","I see, I don't have a choice.
I'll ask you out again.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He went to the trouble of inviting me,
Did I do something bad to everyone?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
