MsgSel("Yes, I would love to!" , "I'll be a bit busy that day ......");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("J140301001_03_000");
    MsgDisp("Honda","Okay, decided!");
    MsgDisp("主人公","Then,
I'll meet you at the ｛待ち合わせ場所｝
Do you think it's okay?");
    VoicePlay("J140301001_03_010");
    MsgDisp("Honda","Right.
I'll let them know.
See you later!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(The four of us are going out, huh?
I'm looking forward to it.)");
    break ;
    case 1:
    VoicePlay("J140301001_03_020");
    MsgDisp("Honda","Oh, that's too bad. But if you have
something to do, I guess it can't be
helped. I'll invite you again next time!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He went to the trouble of inviting me,
Did I do something bad to everyone?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
