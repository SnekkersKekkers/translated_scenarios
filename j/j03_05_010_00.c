Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Oh,it's a call from ｛柊＊＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes,It's ｛主人公苗字｝.");
    VoicePlay("J030501000_05_000");
    MsgDisp("Hiiragi","Hi it's Hiiragi.
Thank you for your message.
I'm available that day.");
    MsgDisp("主人公","Really? Then, on｛日付｝ I'll be waiting
for you at the ｛待ち合わせ場所｝.");
    VoicePlay("J030501000_05_010");
    MsgDisp("Hiiragi","Yes.
Well then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for ｛日付｝ to come.)");
    break ;
    case 3:
    MsgDisp("主人公","(Oh,it's a call from ｛柊＊＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes,It's ｛主人公苗字｝.");
    VoicePlay("J030501000_05_020");
    MsgDisp("Hiiragi","Hello, this is Hiiragi.");
    MsgDisp("主人公","Oh, ｛柊＊＊＊｝.
Did you get my voicemail?");
    VoicePlay("J030501000_05_030");
    MsgDisp("Hiiragi","Yes, thanks for the invitation.
And don't worry, I can go");
    MsgDisp("主人公","Okay,on ｛日付｝
I'll be waiting you at ｛待ち合わせ場所｝.");
    VoicePlay("J030501000_05_040");
    MsgDisp("Hiiragi","I'm looking forward to it.
Well then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for ｛日付｝ to come.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Oh,it's a call from ｛柊＊＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes,It's ｛主人公苗字｝.");
    VoicePlay("J030501000_05_050");
    MsgDisp("Hiiragi","I'm Hiiragi.
Sorry I couldn't get to the phone.");
    MsgDisp("主人公","No, it's okay!
So, are you free?");
    VoicePlay("J030501000_05_060");
    MsgDisp("Hiiragi","Yeah, I'm just available that day.
We should go.");
    MsgDisp("主人公","Then, on ｛日付｝ I'll be waiting for you
at ｛待ち合わせ場所｝.");
    VoicePlay("J030501000_05_070");
    MsgDisp("Hiiragi","Yeah, I'll be waiting too.
On that day.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for ｛日付｝ to come.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
