BGOpen("ho210",1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Phone call, I wonder who it is?)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("U100D00003_22_000");
MsgDisp("Hikaru","Hi～i, Mari!
It's Hikaru♪");
MsgDisp("主人公","What's up, ｛ひかる＊｝?");
VoicePlay("U100D00003_22_010");
MsgDisp("Hikaru","You should have girl talk tonight with me
and sis!♪");
MsgSel("Ok, I'll come!","Sorry, I'm busy......");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("U100D00003_22_020");
    MsgDisp("Hikaru","Yay!
Merci, Mari▼");
    MsgDisp("主人公","Hehe! Well then, I'll get ready to come
over.");
    VoicePlay("U100D00003_22_030");
    MsgDisp("Hikaru","Ok, we'll wait for you♪
See you soon!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(A sleepover......
I'm looking forward to it!)");
    break ;
    case 1:
    VoicePlay("U100D00003_22_040");
    MsgDisp("Hikaru","Eh～, busy huh......
Well then, I guess it can't be helped.
I'm sure there will be another chance.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Even though she invited me, maybe that
was the wrong choice?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
