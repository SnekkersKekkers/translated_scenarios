MsgSel("Yes, by all means!" , "I'll be a little bit busy that day ...");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("J140701001_07_000");
    MsgDisp("Mikage","Okay, it's settled.");
    MsgDisp("主人公","Then, I'll meet you at the
｛待ち合わせ場所｝ okay?");
    VoicePlay("J140701001_07_010");
    MsgDisp("Mikage","Oh, I'll let them know.
See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(The four of us are going out, huh?
I'm looking forward to it.)");
    break ;
    case 1:
    VoicePlay("J140701001_07_020");
    MsgDisp("Mikage","Well then, I guess it can't be helped.
I'll call you again.
See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He went to the trouble of inviting me,
Did I do something wrong?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
