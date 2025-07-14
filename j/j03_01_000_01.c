switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030100001_01_000");
    MsgDisp("Kazama","Sorry.
I have something on that day...");
    MsgDisp("主人公","Oh, I see,
That's too bad......");
    VoicePlay("J030100001_01_010");
    MsgDisp("Kazama","Yeah, see you around, mh?");
    MsgDisp("主人公","Yeah.
See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(I asked him to go out at a bad
timing......)");
    break ;
    case 3:
    VoicePlay("J030100001_01_020");
    MsgDisp("Kazama","That's bad timing, you know!");
    MsgDisp("主人公","Huh?");
    VoicePlay("J030100001_01_030");
    MsgDisp("Kazama","It's the only day I can't go out! Sorry.");
    MsgDisp("主人公","I see!
I'll ask you out another time then.");
    VoicePlay("J030100001_01_040");
    MsgDisp("Kazama","Sorry. Let's go out again?
Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Can't be helped, let's stop calling for
today......)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030100001_01_050");
    MsgDisp("Kazama","I can't go out on that day.");
    MsgDisp("主人公","Eh, why?");
    VoicePlay("J030100001_01_060");
    MsgDisp("Kazama","If I could cancel, I'd do it. But I can't.
Sorry.");
    MsgDisp("主人公","No, that's my bad......
Talk to you later?");
    VoicePlay("J030100001_01_070");
    MsgDisp("Kazama","Hey, don't go ask some other g— Forget
it.
Let's definitely go out next time.");
    MsgDisp("主人公","Yeah, I'll call again another day.
See you!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmm, I asked him out at a bad time.
Too bad......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
