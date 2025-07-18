BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Huh? Huh? There's a new voicemail. Who is
it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090B00000_04_000");
MsgDisp("Nanatsumori","...It went into voicemail though.
What should we do?");
VoicePlay("B090B00000_03_000");
MsgDisp("Honda","She's definitely running here now.
Hey, hey, we'll be waiting!");
VoicePlay("B090B00000_01_000");
MsgDisp("Kazama","What happened...
If you're going to be late, at least let
us know...");
VoicePlay("B090B00000_01_010");
MsgDisp("Kazama","...We'll be waiting.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Oh no!
I was supposed to go out with everyone
today!");
MsgClose();
ScrFadeOut(0,0);
