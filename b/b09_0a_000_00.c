BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Huh? Huh? There's a new voicemail. Who is
it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090A00000_02_000");
MsgDisp("Sassa","Huh... it went to voicemail. What should
we do?");
VoicePlay("B090A00000_01_000");
MsgDisp("Kazama","Maybe she's running here 
in a panic.");
VoicePlay("B090A00000_06_000");
MsgDisp("Himuro","Maybe she got the week wrong?");
VoicePlay("B090A00000_02_010");
MsgDisp("Sassa","We hope you're safe, but we'll wait a bit
longer, give us a call okay?");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Oh no!
I was supposed to go out with everyone
today!");
MsgClose();
ScrFadeOut(0);
