BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
VoicePlay("J010100001_01_000");
MsgDisp("Kazama","Hello, this is Kazama Ryota speaking.");
MsgDisp("主人公","Ah, ｛風真＊＊｝?
It's ｛主人公苗字｝...");
VoicePlay("J010100001_01_010");
MsgDisp("Kazama","Sorry, I can't answer the phone right now.
Please call back or leave a message.");
MsgDisp("主人公","Ah, voicemail.
...What should I do?");
MsgSel("Leave a message","Hang up the phone");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","I'll call back later then.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
