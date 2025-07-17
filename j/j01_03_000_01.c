BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
VoicePlay("J010300001_03_000");
MsgDisp("Honda","Honda here.
Thanks for calling in!");
MsgDisp("主人公","Ah, ｛本多＊＊｝?
It's ｛主人公苗字｝.");
VoicePlay("J010300001_03_010");
MsgDisp("Honda","——Unfortunately, I can't take your call
at the moment!");
VoicePlay("J010300001_03_020");
MsgDisp("Honda","I'll call you back later, so please leave
your message!");
MsgDisp("主人公","Huh, voicemail.
Hmm, what should I do?...");
switch (MsgSelRsltGet()){
    case 0:
    case 1:
    MsgSel("Leave a message","Hang up the phone");
    break ;
    case 0:
    break ;
    case 1:
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","Oh well.
I suppose I should try calling again
later.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
