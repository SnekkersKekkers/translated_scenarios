BGOpen("ho210",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah, ｛みちる＊｝ is calling.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello, ｛みちる＊｝?");
VoicePlay("W012101000_21_000");
MsgDisp("Michiru","Hehe, Mari.
Hey, why don't we go to the amusement
park this Sunday?");
MsgDisp("主人公","You want to go to the amusement
park with just me, ｛みちる＊｝?");
VoicePlay("W012101000_21_010");
MsgDisp("Michiru","Nope, I'm inviting other people too.
Though, who I'm inviting is a secret...
How about it?");
MsgSel("Yeah, let's go！","Sorry, I have some errands to run.");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("W012101000_21_020");
    MsgDisp("Michiru","Thank goodness!
Well then, I'll see you on Sunday.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(This Sunday, huh...
I wonder who else is coming.)");
    break ;
    case 1:
    VoicePlay("W012101000_21_030");
    MsgDisp("Michiru","It can't be helped if you're busy...
Maybe next time, then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(I feel a little bad saying that
after she invited me.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
