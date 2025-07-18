BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Huh? Huh? There's a new voicemail. Who is
it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090A00001_02_000");
MsgDisp("Sassa","Huh...it went to voicemail.
What should we do?");
VoicePlay("B090A00001_01_000");
MsgDisp("Kazama","Maybe she's running here in a panic.");
VoicePlay("B090A00001_06_000");
MsgDisp("Himuro","Maybe she got the week wrong?");
VoicePlay("B090A00001_02_010");
MsgDisp("Sassa","We hope you're safe, but we'll wait a bit
longer, give us a call okay?");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","As I thought, I got the meeting place
wrong...");
MsgClose();
ScrFadeOut(0);
