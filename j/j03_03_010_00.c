Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Ah, it's from ｛本多＊＊｝! )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, this is ｛主人公苗字｝.");
    VoicePlay("J030301000_03_000");
    MsgDisp("Honda","Hello.
This is about the voicemail!");
    MsgDisp("主人公","Oh, did you listen to it?");
    VoicePlay("J030301000_03_010");
    MsgDisp("Honda","Yep.
I'm okay!");
    MsgDisp("主人公","Really? Then on
｛日付｝
｛待ち合わせ場所｝ we'll
meet there.");
    VoicePlay("J030301000_03_020");
    MsgDisp("Honda","Yes, okay!
Well, see you later?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yippee!
On ｛日付｝, I can't
wait for that to come!)");
    break ;
    case 3:
    MsgDisp("主人公","(Oh, it's from ｛本多＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, this is ｛主人公苗字｝.");
    VoicePlay("J030301000_03_030");
    MsgDisp("Honda","Hey hey.
Listen, about the voicemail.");
    MsgDisp("主人公","Oh, did you listen to it?");
    VoicePlay("J030301000_03_040");
    MsgDisp("Honda","Yep!
Of course, it's okay.");
    MsgDisp("主人公","Then, on ｛日付｝
｛待ち合わせ場所｝.
I'll be there.");
    VoicePlay("J030301000_03_050");
    MsgDisp("Honda","Got it. Ah! So Excited! Well, see you
later?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
I can't wait for
｛日付｝ to come.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Oh, it's from ｛本多＊＊｝! )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, this is ｛主人公苗字｝.");
    VoicePlay("J030301000_03_060");
    MsgDisp("Honda","Oh, it's me.
Sorry, I couldn't answer your call.");
    MsgDisp("主人公","No problem.
So, how about it??");
    VoicePlay("J030301000_03_070");
    MsgDisp("Honda","Oh, the thing you mentioned in the
voicemail?
Of course, it's okay.");
    VoicePlay("J030301000_03_080");
    MsgDisp("Honda","I mean, you invited me.
There's no way I'd refuse, right?");
    MsgDisp("主人公","Hehe. Then, ｛日付｝
｛待ち合わせ場所｝, I'll be
there.");
    VoicePlay("J030301000_03_090");
    MsgDisp("Honda","I'll be the one waiting!
Don't rush, just come, okay?
See you!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
I can't wait for
｛日付｝ to come.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
