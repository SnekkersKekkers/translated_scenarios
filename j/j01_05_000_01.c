BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
VoicePlay("J010500001_05_000");
MsgDisp("Hiiragi","This is Hiiragi. I apologize, but I'm
currently unable to answer your call. I'll
call back as soon as possible.");
VoicePlay("J010500001_05_010");
MsgDisp("Hiiragi","Apologies, but could you please state your
business after the tone.");
MsgDisp("主人公","Hmm, what should I do...");
    MsgSel("Leave a message","Hang up the phone");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","Can't do anything about it.
Let's try calling again another time.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
