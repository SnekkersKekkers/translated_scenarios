Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Oh, it's a call from
｛柊＊＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
It's
｛主人公苗字｝.");
    VoicePlay("J030501001_05_000");
    MsgDisp("Hiiragi","It's Hiiragi.
I heard your message.
My schedule is full on that day.");
    MsgDisp("主人公","I see...
Then I guess I can't blame you.");
    VoicePlay("J030501001_05_010");
    MsgDisp("Hiiragi","I'm so sorry.
Now, if you'll excuse me.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad!)");
    break ;
    case 3:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Oh, it's a call from
｛柊＊＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛柊＊＊＊｝?");
    VoicePlay("J030501001_05_020");
    MsgDisp("Hiiragi","Yes, it is Hiiragi.
Thanks for your message.");
    MsgDisp("主人公","Yes, are you free then?");
    VoicePlay("J030501001_05_030");
    MsgDisp("Hiiragi","I had plans that day...
Sorry.");
    MsgDisp("主人公","Oh, I see... is busy, isn't it.
I can't blame you.");
    VoicePlay("J030501001_05_040");
    MsgDisp("Hiiragi","I'm sorry you had to go through the
trouble of inviting me.");
    MsgDisp("主人公","No, it's okay!
Well, I'll see you around?");
    VoicePlay("J030501001_05_050");
    MsgDisp("Hiiragi","Yes, again.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Oh, it's a call from
｛柊＊＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛柊＊＊＊｝?");
    VoicePlay("J030501001_05_060");
    MsgDisp("Hiiragi","Yes, it is Hiiragi.
I'm sorry I couldn't get to the phone.");
    MsgDisp("主人公","No, no, it's okay.
So, what do you think?
Are you good to go?");
    VoicePlay("J030501001_05_070");
    MsgDisp("Hiiragi","Oh, no.
I have a schedule I can't miss.
I'm afraid I can't even coordinate.");
    MsgDisp("主人公","I'm sorry I pushed you.");
    VoicePlay("J030501001_05_080");
    MsgDisp("Hiiragi","It's your invitation. I want to take it
easy. But I'm sorry. I'll see you
later...");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Well, that's a real shame!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
