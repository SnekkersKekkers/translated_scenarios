BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
VoicePlay("J010200001_02_000");
MsgDisp("Sassa","Sassa speaking.");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝?
Is it OK to call you now?");
VoicePlay("J010200001_02_010");
MsgDisp("Sassa","I'm busy at the moment, but feel free to
leave your name and message and I'll get
back to you soon.");
MsgDisp("主人公","Ah, it's his voicemail......");
MsgSel("Leave a message","Hang up the phone");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","It can't be helped.
I'll try to call again some other time
then.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
