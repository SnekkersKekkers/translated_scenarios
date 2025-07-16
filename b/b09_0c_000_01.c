BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Huh?
I got a message on my phone. who is it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090C00000_05_000");
MsgDisp("Hiiragi","... Hm?
I was instructed to leave a message.
What should we do?");
VoicePlay("B090C00000_06_000");
MsgDisp("Himuro","Don't tell me she's still sleeping?");
VoicePlay("B090C00000_07_000");
MsgDisp("Mikage","Oi—, if you're sleeping, wake up～");
VoicePlay("B090C00000_05_010");
MsgDisp("Hiiragi","Ummm... If you've received this message,
please get in touch. We'll be waiting.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","As I thought, I got the meeting place
wrong...");
MsgClose();
ScrFadeOut(0);
