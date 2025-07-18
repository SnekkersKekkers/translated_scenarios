MsgDisp("主人公","Hello?");
VoicePlay("B080101000_01_000");
MsgDisp("Kazama","Ah, it's me.
Do you have a minute?");
MsgDisp("主人公","Ah...um...");
VoicePlay("B080101000_01_010");
MsgDisp("Kazama","This doesn't seem like a good time.
I'll call again.
See you.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
Wait(60,0);
