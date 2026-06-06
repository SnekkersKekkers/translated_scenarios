BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Ah, I have an unread message...
I wonder who it is...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090500000_05_000")MsgDisp("Hiiragi","Hello, this is Hiiragi.");
MsgDisp("主人公","Huh?
｛Hiiragi＊＊＊｝?");
VoicePlay("B090500000_05_010")MsgDisp("Hiiragi","I just need to know that you're safe.
I'll be waiting to hear from you.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Damn it!
I got the meeting place for our date wrong!");
MsgClose();
ScrFadeOut(0,0);
