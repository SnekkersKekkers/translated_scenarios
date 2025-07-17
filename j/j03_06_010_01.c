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
    MsgDisp("主人公","Hello.
It's
｛主人公苗字｝.");
    VoicePlay("J030601001_06_000");
    MsgDisp("Himuro","Hey.
You called me, right?");
    MsgDisp("主人公","Yeah, so?");
    VoicePlay("J030601001_06_010");
    MsgDisp("Himuro","I can't because I have plans.");
    MsgDisp("主人公","I see.
Too bad.");
    VoicePlay("J030601001_06_020");
    MsgDisp("Himuro","That's all I wanted to say.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","Hmmm, too bad...)");
    break ;
    case 3:
    MsgDisp("主人公","(Oh, it's a call from ｛氷室＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛氷室＊＊｝?");
    VoicePlay("J030601001_06_030");
    MsgDisp("Himuro","Yep.
Just thought I'd respond to your
voicemail.");
    MsgDisp("主人公","Oh, you heard it.
What do you think?");
    VoicePlay("J030601001_06_040");
    MsgDisp("Himuro","I have a prior arrangement.
Maybe some other time.");
    MsgDisp("主人公","Oh, I see.");
    VoicePlay("J030601001_06_050");
    MsgDisp("Himuro","Bad timing, I guess.
Well then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm, too bad...)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Oh, it's a call from ｛氷室＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛氷室＊＊｝?");
    VoicePlay("J030601001_06_060");
    MsgDisp("Himuro","... Hey.
You left me a message on my voicemail?");
    MsgDisp("主人公","Oh, you heard me.
What do you think?");
    VoicePlay("J030601001_06_070");
    MsgDisp("Himuro","Sorry...
I have a prior commitment.
No other days available?");
    MsgDisp("主人公","I don't think so...
Well, I'll see you another day.");
    VoicePlay("J030601001_06_080");
    MsgDisp("Himuro","... Yeah.
Definitely invite me back.
See you then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(I see, he had a prior engagement.
Too bad...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
