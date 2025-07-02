SEPlay("EV_SE_579");
MsgDisp("主人公","(Ah, a phone call.)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
VoicePlay("S050D00001_22_000");
MsgDisp("Hikaru","Happyー・NewーYearー!
It's Hikaru▼");
MsgDisp("主人公","Ah, ｛ひかる＊｝.
Happy New Year!");
VoicePlay("S050D00001_22_010");
MsgDisp("Hikaru","Yepyep!
Do you want to visit the shrine with
Hikaru?");
MsgDisp("主人公","Yep, shall we go?");
VoicePlay("S050D00001_22_020");
MsgDisp("Hikaru","Yay▼
Sit tight. Hikaru and sis will come pick
you up, okay?～!");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgClose();
ScrFadeOut(0,0);
