BGOpen("ho210",0);
ScrFadeIn(0);
BGOpen("ho210",0);
ChLayout(1);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
VoicePlay("J010400001_04_000");
MsgDisp("Nanatsumori","Can't take your call right now.
Leave your message if it's important.");
MsgDisp("主人公","I only got his voicemail.
What should I do?...");
    MsgSel("Leave a message","Hang up the phone");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","No use calling today.
I'll just try again later.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
