switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝ is calling.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    VoicePlay("S040200000_02_000");
    MsgDisp("Sassa","Hey, it's me.
Happy New Year!");
    MsgDisp("主人公","｛颯砂＊＊｝, Happy New Year!");
    VoicePlay("S040200000_02_010");
    MsgDisp("Sassa","Let's get along again this year!");
    VoicePlay("S040200000_02_020");
    MsgDisp("Sassa","......So, want to go to the shrine?");
    MsgSel("Yeah, let's go!","Sorry, I'm a bit......");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040200000_02_030");
        MsgDisp("Sassa","Alright.
I'll come and pick you up now.");
        MsgDisp("主人公","Okay, got it.");
        VoicePlay("S040200000_02_040");
        MsgDisp("Sassa","I'll be there soon.
See you.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(I have to quickly get ready!
What to wear......)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040200000_02_050");
        MsgDisp("Sassa","I see. That's unfortunate.");
        MsgDisp("主人公","Sorry.");
        VoicePlay("S040200000_02_060");
        MsgDisp("Sassa","Don't be. It can't be helped.
Well, I guess I'll go for a run.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Eh?　Running? To the shrine?)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝ is calling.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    SEWait();
    VoicePlay("S040200000_02_070");
    MsgDisp("Sassa","Happy New Year.
Let's get along well this year!");
    MsgDisp("主人公","｛颯砂＊＊｝, Happy New Year.
Same to you.");
    VoicePlay("S040200000_02_080");
    MsgDisp("Sassa","Yeah, New Year's greetings.");
    VoicePlay("S040200000_02_020");
    MsgDisp("Sassa","......so, want to visit the shrine
together?");
    MsgSel("Yeah, let's go!","Sorry, I'm a bit......");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040200000_02_090");
        MsgDisp("Sassa","Yes!
This year's off to a great start already.");
        MsgDisp("主人公","Hehe, thanks for inviting me.
How should we meet up?");
        VoicePlay("S040200000_02_100");
        MsgDisp("Sassa","No, don't worry about it.
I'll come pick you up.");
        MsgDisp("主人公","Thanks.
I'll get dressed now......");
        VoicePlay("S040200000_02_110");
        MsgDisp("Sassa","Yeah, you should.
I'll head there slowly.");
        MsgDisp("主人公","Yeah, thanks.
Okay then, see you soon.");
        VoicePlay("S040200000_02_120");
        MsgDisp("Sassa","I'll buy you something hot to
drink on the way there.
See you.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛颯砂＊＊｝ sounds like he's
expecting something......?
Now then, what to wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040200000_02_130");
        MsgDisp("Sassa","I see.");
        MsgDisp("主人公","Sorry.");
        VoicePlay("S040200000_02_140");
        MsgDisp("Sassa","No, it's fine.
I feel blessed just hearing your voice
first thing this year.
Bye.");
        VoicePlay("S040200000_02_150");
        MsgDisp("Sassa","......Sigh.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he went through
the trouble of inviting me,
Did I do something wrong......)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
