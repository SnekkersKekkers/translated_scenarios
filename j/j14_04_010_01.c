MsgSel("Yes, I would love to!" , "I'll be a bit busy that day ......");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("J140401001_04_000");
    MsgDisp("Nanatsumori","Alright.
Okay, I'll meet you there ......");
    MsgDisp("主人公","At ｛待ち合わせ場所｝....
You want to meet up there?");
    VoicePlay("J140401001_04_010");
    MsgDisp("Nanatsumori","OK.
Well, I'll see you on Sunday.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(The four of us are going out, huh?
I'm looking forward to it.)");
    break ;
    case 1:
    VoicePlay("J140401001_04_020");
    MsgDisp("Nanatsumori","No need to be unreasonable.
We'll be in touch.
Bye .......");
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
ScrFadeOut(0,0);
