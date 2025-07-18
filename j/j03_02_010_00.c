Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Ah, a phone call from
｛颯砂＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, hello.");
    VoicePlay("J030201000_02_000");
    MsgDisp("Sassa","Ah, can you talk now?");
    MsgDisp("主人公","Yeah.");
    VoicePlay("J030201000_02_010");
    MsgDisp("Sassa","I got your message earlier.
It's okay, I can go.");
    MsgDisp("主人公","Really? Then, let's meet on
｛日付｝. I'll wait for
you at the
｛待ち合わせ場所｝.");
    VoicePlay("J030201000_02_020");
    MsgDisp("Sassa","Yes, got it.
Then, see you on that day.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yes!
I can't wait for
｛日付｝.)");
    break ;
    case 3:
    MsgDisp("主人公","(Ah, a phone call from
｛颯砂＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, it's ｛主人公苗字｝.");
    VoicePlay("J030201000_02_030");
    MsgDisp("Sassa","It's me.
Sorry, I couldn't get to the phone!");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Did you get my message?");
    VoicePlay("J030201000_02_040");
    MsgDisp("Sassa","Yes, I got it.
Let's go out!");
    MsgDisp("主人公","Yay! Then let's meet on
｛日付｝ at the
｛待ち合わせ場所｝.");
    VoicePlay("J030201000_02_050");
    MsgDisp("Sassa","Yeah, great!
See ya on that day then!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
I hope ｛日付｝ arrives
fast!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Ah, it's from ｛颯砂＊＊｝! )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","｛風真＊＊｝, it's
｛主人公苗字｝.");
    VoicePlay("J030201000_02_060");
    MsgDisp("Sassa","Ah, it's me.
Sorry for not picking up!");
    MsgDisp("主人公","Don't worry.
So, what do you say?");
    VoicePlay("J030201000_02_070");
    MsgDisp("Sassa","Of course I'll go!");
    MsgDisp("主人公","Then, let's meet on
｛日付｝! I'll wait for
you at the
｛待ち合わせ場所｝.");
    VoicePlay("J030201000_02_080");
    MsgDisp("Sassa","Hah, I'm glad I reached you before you
planned something else. It's gonna be fun!
See ya.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!!
I can't wait for
｛日付｝! )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
