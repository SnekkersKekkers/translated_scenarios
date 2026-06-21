BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Ah, I got a voicemail...
I wonder who it's from...");
SEPlay("SYS_SE_PHONE_POWER_ON");
VoicePlay("B090100000_01_000");
MsgDisp("Kazama","Hello.");
MsgDisp("主人公","Huh? It's ｛Kazama＊＊｝...");
VoicePlay("B090100000_01_010");
MsgDisp("Kazama","About today.");
VoicePlay("B090100000_01_020");
MsgDisp("Kazama","Guess it didn't mean that much to
you, huh?");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Crap!
We were supposed to go on a date today!");
MsgClose();
ScrFadeOut(0,0);
