BGOpen("ho210",1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(A phone call, wonder who it's from.)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("U100D00001_22_000");
MsgDisp("Hikaru","Hello, Mari?
It's Hikaru.
Is now a good time to talk?");
MsgDisp("主人公","It's ｛ひかる＊｝!
Sure, what's up?");
VoicePlay("U100D00001_22_010");
MsgDisp("Hikaru","Would you like to sleepover at our
house tonight? It will be fun to have
girl talk all night with sis♪");
MsgSel("Ok, I'll go!","Sorry, I'm busy……");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("U100D00001_22_020");
    MsgDisp("Hikaru","Aha▼
Yay! I'm excited!");
    MsgDisp("主人公","Hehe.
Ok then, I'll get ready to come over
okay?");
    VoicePlay("U100D00001_22_030");
    MsgDisp("Hikaru","Take care.
A bientotー♪");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(A sleepover......This will be fun!)");
    break ;
    case 1:
    VoicePlay("U100D00001_22_040");
    MsgDisp("Hikaru","Ah～n, that's unfortunate......
Well then......maybe another time?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Even though she went through the trouble
of inviting me......Was that the right
choice?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
