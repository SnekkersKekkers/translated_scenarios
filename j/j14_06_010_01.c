MsgSel("Yeah, I'm free!" , "I'll be a bit busy that day ...");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("J140601001_06_000");
    MsgDisp("Himuro","Then it's settled.");
    MsgDisp("主人公","Then, at the ｛待ち合わせ場所｝.
Should we meet up there?");
    VoicePlay("J140601001_06_010");
    MsgDisp("Himuro","Thanks for your time.
I'll let the other two know.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(The four of us are going out, huh?
I'm looking forward to it.)");
    break ;
    case 1:
    VoicePlay("J140601001_06_020");
    MsgDisp("Himuro","Oh, yeah.
That's okay then.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He went to the trouble of inviting me,
Did I do something bad to everyone?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
