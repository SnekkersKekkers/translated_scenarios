Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Ah, a phone call from
｛風真＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
｛主人公苗字｝
speaking.");
    VoicePlay("J030101001_01_000");
    MsgDisp("Kazama","Ah, it's me.
I got your message.");
    MsgDisp("主人公","So, what is it?");
    VoicePlay("J030101001_01_010");
    MsgDisp("Kazama","I'm sorry.
I'm busy on that day.");
    MsgDisp("主人公","I see, that's too bad.");
    VoicePlay("J030101001_01_020");
    MsgDisp("Kazama","Yeah.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Can't be helped.
Let's stop for today......)");
    break ;
    case 3:
    MsgDisp("主人公","(Ah, a phone call from
｛風真＊＊｝! )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛風真＊＊｝?");
    VoicePlay("J030101001_01_030");
    MsgDisp("Kazama","I got your message.");
    MsgDisp("主人公","Ah, what's your answer?");
    VoicePlay("J030101001_01_040");
    MsgDisp("Kazama","That's unfortunate but......
I can't on that day.
Sorry.");
    MsgDisp("主人公","I see.
Can I call you another time?");
    VoicePlay("J030101001_01_050");
    MsgDisp("Kazama","Sure, I'll count on that.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmph...
Too bad......)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Ah, it's from ｛風真＊＊｝! )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛風真＊＊｝?");
    VoicePlay("J030101001_01_060");
    MsgDisp("Kazama","Yeah.
Thanks for calling earlier.");
    MsgDisp("主人公","Did you get my message?");
    VoicePlay("J030101001_01_070");
    MsgDisp("Kazama","Can't we do another day?
It's the only day I can't cancel stuff.");
    MsgDisp("主人公","I see......");
    VoicePlay("J030101001_01_080");
    MsgDisp("Kazama","Come on, cheer up. It just means you have
to stay excited a little longer. See ya?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It's too bad but it can't be helped, I'll
invite him again some other time.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
