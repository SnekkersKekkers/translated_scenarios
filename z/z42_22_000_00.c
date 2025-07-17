BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah, my phone...
It's ｛ひかる＊｝.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello.");
VoicePlay("Z422200000_22_000");
MsgDisp("Hikaru","Mari...
I didn't make it in time.");
MsgClose();
