BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Ah, I have an unread message...
I wonder who it is...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090500000_05_000");
MsgDisp("Hiiragi","Hello, this is Hiiragi.");
MsgDisp("主人公","Huh? ｛柊＊＊＊｝?");
VoicePlay("B090500000_05_010");
MsgDisp("Hiiragi","I just wanted to check if you were
alright.
I'll be awaiting your message.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Damn it!
We were supposed to have a date today!");
MsgClose();
ScrFadeOut(0,0);
