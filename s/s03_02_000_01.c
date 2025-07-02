switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030200001_02_000");
    MsgDisp("Sassa","Sure, let's go!");
    MsgDisp("主人公","Phew.
Where should we meet up?");
    VoicePlay("S030200001_02_010");
    MsgDisp("Sassa","Right, hmm......
How about I come pick you up?");
    MsgDisp("主人公","Really? Thank you.
I'll be waiting.");
    VoicePlay("S030200001_02_020");
    MsgDisp("Sassa","Yup, got it.
See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(A shrine visit with ｛颯砂＊＊｝!
What should I wear......)");
    break ;
    case 3:
    VoicePlay("S030200001_02_030");
    MsgDisp("Sassa","Of course I'll go.");
    MsgDisp("主人公","Yay!
Where should we meet up?");
    VoicePlay("S030200001_02_040");
    MsgDisp("Sassa","No, it's fine.
I'll come pick you up, so wait there.");
    MsgDisp("主人公","Really? Thank you.");
    VoicePlay("S030200001_02_050");
    MsgDisp("Sassa","It's cold, so dress warmly.
See you soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(A shrine visit with ｛颯砂＊＊｝!
What should I wear......)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030200001_02_060");
    MsgDisp("Sassa","I'm definitely going.");
    MsgDisp("主人公","Yay.
So where should we meet up?");
    VoicePlay("S030200001_02_070");
    MsgDisp("Sassa","Just wait there. It's hard for
girls to get dressed up in that way, so
take your time. See you soon.");
    MsgDisp("主人公","Really? Thank you.");
    VoicePlay("S030200001_02_080");
    MsgDisp("Sassa","I'll make my way there slowly, so
take your time, okay?
See you soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Dressed up, huh......
｛颯砂＊＊｝ is expecting something......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
