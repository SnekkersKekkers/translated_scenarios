BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
VoicePlay("J010600001_47_000");
MsgDisp("Voice Mail","You've reached
the voicemail service.");
VoicePlay("J010600001_47_010");
MsgDisp("Voice Mail","Your correspondant
is unable to reach the phone at the 
moment. Please leave a message.");
MsgDisp("主人公","Huh, what should I do......");
MsgSel("Leave a message","Hang up the phone");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","Can't be helped.
Let's try again some other time.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
