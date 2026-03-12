Wait(20,0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Ah, a phone call from ｛Sassa＊＊｝.)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello, ｛Sassa＊＊｝?");
VoicePlay("J030201002_02_000");
MsgDisp("Sassa","Hey, it's me.
Did you leave something on my voicemail?");
MsgDisp("主人公","Ahh, yes!
Do you think you can go?");
VoicePlay("J030201002_02_010");
MsgDisp("Sassa","It's nice to invite me, but I have club
activities every 3rd Sunday of the month.");
MsgDisp("主人公","Oh, I see.");
VoicePlay("J030201002_02_020");
MsgDisp("Sassa","Yeah, try to remember it.
Bye.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(I'll be careful next time I ask him out.)");
MsgClose();
