Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Ah, a phone call from ｛風真＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, it's ｛主人公苗字｝.");
    VoicePlay("J030101000_01_000");
    MsgDisp("Kazama","I got your message.
My answer is OK.");
    MsgDisp("主人公","Really?
Then, let's meet on ｛日付｝.
I'll wait for you at the ｛待ち合わせ場所｝.");
    VoicePlay("J030101000_01_010");
    MsgDisp("Kazama","I'll be expecting yo-u.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yes!
I can't wait for ｛日付｝.)");
    break ;
    case 3:
    MsgDisp("主人公","(Ah, a phone call from ｛風真＊＊｝!)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, it's ｛主人公苗字｝.");
    VoicePlay("J030101000_01_020");
    MsgDisp("Kazama","It's me.
Got your message.");
    VoicePlay("J030101000_01_030");
    MsgDisp("Kazama","Of course my answer is OK!");
    MsgDisp("主人公","Alright, then let's meet on ｛日付｝.
I'll wait for you at the ｛待ち合わせ場所｝.");
    VoicePlay("J030101000_01_040");
    MsgDisp("Kazama","Got it.
I'm looking forward to a lot of things.
See you later?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
I hope ｛日付｝ arrives fast!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Ah, it's from ｛風真＊＊｝!)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","｛風真＊＊｝, it's ｛主人公苗字｝.");
    VoicePlay("J030101000_01_050");
    MsgDisp("Kazama","I'm sorry, couldn't get your call.");
    MsgDisp("主人公","That's alright.
Did you listen to my message?
What's your answer?");
    VoicePlay("J030101000_01_060");
    MsgDisp("Kazama","There's no way I'd say no.");
    MsgDisp("主人公","Really?
Then, let's meet on ｛日付｝.
I'll wait for you at the ｛待ち合わせ場所｝.");
    VoicePlay("J030101000_01_070");
    MsgDisp("Kazama","Understood. Don't hurry too much, just get
there in one piece. Okay?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!!
I can't wait for ｛日付｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
