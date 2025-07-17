Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Oh, it's a call from ｛氷室＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, it's ｛主人公苗字｝.");
    VoicePlay("J030601000_06_000");
    MsgDisp("Himuro","Hey, it's me.
About the voicemail thing, okay.");
    MsgDisp("主人公","Really? Then, on
｛日付｝ I'll be
waiting for you at
｛待ち合わせ場所｝.");
    VoicePlay("J030601000_06_010");
    MsgDisp("Himuro","I get it.
Then, on the day, there we go.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for
｛日付｝ to come.)");
    break ;
    case 3:
    MsgDisp("主人公","(Oh, it's a call from ｛氷室＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, it's ｛主人公苗字｝.");
    VoicePlay("J030601000_06_020");
    MsgDisp("Himuro","Hey, it's me.");
    MsgDisp("主人公","Oh, ｛氷室＊＊｝, did you get my
voicemail?");
    VoicePlay("J030601000_06_030");
    MsgDisp("Himuro","Heard it.
Okay, let's go.");
    MsgDisp("主人公","Okay then, on ｛日付｝
I'll be waiting for you at
｛待ち合わせ場所｝.");
    VoicePlay("J030601000_06_040");
    MsgDisp("Himuro","All right, bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for
｛日付｝ to come.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Oh, it's a call from ｛氷室＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, it's ｛主人公苗字｝.");
    VoicePlay("J030601000_06_050");
    MsgDisp("Himuro","Hey, it's me.
I'm sorry I didn't answer the phone.");
    MsgDisp("主人公","Er, well.
So, will you go out with me?");
    VoicePlay("J030601000_06_060");
    MsgDisp("Himuro","Of course I'm going.
When is it?");
    MsgDisp("主人公","Okay then, on ｛日付｝
I'll be waiting for you at
｛待ち合わせ場所｝.");
    VoicePlay("J030601000_06_070");
    MsgDisp("Himuro","Gotcha.
You promised me, so don't forget.
Well then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for
｛日付｝ to come.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
