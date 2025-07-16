BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Ah, there's a voicemail on my phone... who
could it be?");
SEPlay("SYS_SE_PHONE_POWER_ON");
VoicePlay("B090100000_01_000");
MsgDisp("Kazama","Hello.");
MsgDisp("主人公","Huh?
It's ｛風真＊＊｝...");
VoicePlay("B090100000_01_010");
MsgDisp("Kazama","About today.");
VoicePlay("B090100000_01_020");
MsgDisp("Kazama","I guess it didn't mean that much to you
huh.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","I've done it!
I got the date meeting place wrong...!");
MsgClose();
ScrFadeOut(0,0);
