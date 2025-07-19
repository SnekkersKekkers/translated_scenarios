BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah, ｛ひかる＊｝ is calling.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello, ｛ひかる＊｝?");
VoicePlay("W012201000_22_000");
MsgDisp("Hikaru","Hi～, Mari! Hikaru wants to hang out with
you next Sunday～▼ Let's go to the
amusement park.");
MsgDisp("主人公","You want to hang out at the amusement
park, ｛ひかる＊｝?");
VoicePlay("W012201000_22_010");
MsgDisp("Hikaru","Ehehe, Hikaru's inviting other people too.
You'll see who♪
So, how about it?");
MsgSel("Yeah, let's go!","Sorry, I have some errands to run");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("W012201000_22_020");
    MsgDisp("Hikaru","Yay!
Hikaru's looking forward to seeing you on
Sunday♪");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(This Sunday, huh...
I wonder who else is going.)");
    break ;
    case 1:
    VoicePlay("W012201000_22_030");
    MsgDisp("Hikaru","Eh～ , sorry to hear you have...errands.
Hikaru will invite you another time.
Okay?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(I feel a little bad saying that after she
invited me.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
