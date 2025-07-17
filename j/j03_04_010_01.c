Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Oh, it's a call from
｛七ツ森＊｝. )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
It's ｛主人公苗字｝.");
    VoicePlay("J030401001_04_000");
    MsgDisp("Nanatsumori","Oh...
Nanatsumori.
I just heard the voicemail.");
    MsgDisp("主人公","Yes?");
    VoicePlay("J030401001_04_010");
    MsgDisp("Nanatsumori","I can't that day.
I have to run an errand.");
    MsgDisp("主人公","Oh.
That's too bad...");
    VoicePlay("J030401001_04_020");
    MsgDisp("Nanatsumori","Sorry.
See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad...)");
    break ;
    case 3:
    MsgDisp("主人公","(Oh, it's a call from
｛七ツ森＊｝. )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
It's ｛主人公苗字｝.");
    VoicePlay("J030401001_04_030");
    MsgDisp("Nanatsumori","Sorry about the voicemail.");
    MsgDisp("主人公","Er, well.
So, can you?");
    VoicePlay("J030401001_04_040");
    MsgDisp("Nanatsumori","I have an appointment that day.
Sorry.");
    MsgDisp("主人公","Oh...");
    VoicePlay("J030401001_04_050");
    MsgDisp("Nanatsumori","Cheer up?
I'll see you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad...)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Oh, it's a call from
｛七ツ森＊｝. )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
It's ｛主人公苗字｝.");
    VoicePlay("J030401001_04_060");
    MsgDisp("Nanatsumori","Yo.
Sorry I missed your call.");
    MsgDisp("主人公","Er, well.
So, about the voicemail.
What do you think?");
    VoicePlay("J030401001_04_070");
    MsgDisp("Nanatsumori","Sorry.
I have an errand I can't miss.");
    MsgDisp("主人公","Oh.
Well, then I guess I can't blame you...");
    VoicePlay("J030401001_04_080");
    MsgDisp("Nanatsumori","Don't make that sound.
I'll make sure to recover it next time.
Well then...");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
