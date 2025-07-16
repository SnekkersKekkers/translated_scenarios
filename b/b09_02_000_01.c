BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Huh, there's a notification on my phone.
Ah, I got a message.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090200000_02_000");
MsgDisp("Sassa","Umm, it's Sassa.
What was up with today?");
MsgDisp("主人公","(It's ｛颯砂＊＊｝!
Ah...)");
VoicePlay("B090200000_02_010");
MsgDisp("Sassa","I was waiting for a while, but I'm going
home now.");
VoicePlay("B090200000_02_020");
MsgDisp("Sassa","It's not good if you simply forgot, but
it's fine. Though, I'll be worried, so at
leastdrop me a message. See you later.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Damn it!
I got the meeting place for our date
wrong!");
MsgClose();
ScrFadeOut(0,0);
