switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030300001_03_000");
    MsgDisp("Honda","Uh, wait a minute.");
    MsgDisp("主人公","Was it too sudden?");
    VoicePlay("J030300001_03_010");
    MsgDisp("Honda","...Yeah.
I'm not available that day.
Sorry.");
    MsgDisp("主人公","I see.
Well, see you later then?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Haah...what a shame.)");
    break ;
    case 3:
    VoicePlay("J030300001_03_020");
    MsgDisp("Honda","Ah, on that day, I think...");
    MsgDisp("主人公","Does it seem inconvenient?");
    VoicePlay("J030300001_03_030");
    MsgDisp("Honda","Yeah. Sorry, even though you went out of
your way to invite me.. Can you invite me
again sometime?");
    MsgDisp("主人公","Yeah, I understand.
Well, see you later then?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Haah, what a shame!)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030300001_03_040");
    MsgDisp("Honda","Daー,that's it!");
    MsgDisp("主人公","Did you already have plans?");
    VoicePlay("J030300001_03_050");
    MsgDisp("Honda","Yes...
Oh, but, but!
If I squeeze in my schedule, maybe...");
    MsgDisp("主人公","Don't push yourself too hard!
I'll invite you again.");
    VoicePlay("J030300001_03_060");
    MsgDisp("Honda","Uh...
I see, you're right.
So, it's a promise then∋");
    MsgDisp("主人公","Hehe, yeah.
Well then, see you later?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It's a shame, but it can't be helped this
time.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
