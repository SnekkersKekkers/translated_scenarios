MsgSel("Yes, I would love to!" , "I'll be a bit busy that day ...");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("J140501001_05_000");
    MsgDisp("Hiiragi","Good.
Now, let's go out with the four of us.");
    MsgDisp("主人公","Then, at the
｛待ち合わせ場所｝.
Should we meet up there?");
    VoicePlay("J140501001_05_010");
    MsgDisp("Hiiragi","Let's.
I will let Inori and Mikage-sensei know.
See you on Sunday.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(The four of us are going out, huh?
I'm looking forward to it.)");
    break ;
    case 1:
    VoicePlay("J140501001_05_020");
    MsgDisp("Hiiragi","Well, that's too bad.
But it can't be helped.
Well, I'll see you later.");
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
