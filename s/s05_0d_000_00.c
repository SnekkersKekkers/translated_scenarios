SEPlay("EV_SE_579");
MsgDisp("主人公","(Ah, a phone call.)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
VoicePlay("S050D00000_22_000");
MsgDisp("Hikaru","Hi～ i, Mari!
It's Hikaru▼
Hapー・py New Yeーarー!");
MsgDisp("主人公","Oh, it's ｛ひかる＊｝.
Happy New Year!");
VoicePlay("S050D00000_22_010");
MsgDisp("Hikaru","Hey, do you want to visit the shrine with
me?
Sis will come also♪");
MsgDisp("主人公","Sure, got it.");
VoicePlay("S050D00000_22_020");
MsgDisp("Hikaru","We'll come to pick you up now.
Get ready and wait for us～!");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgClose();
ScrFadeOut(0,0);
