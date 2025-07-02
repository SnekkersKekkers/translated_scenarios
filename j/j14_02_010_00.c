BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(｛颯砂＊＊｝ is calling.)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes.");
VoicePlay("J140201000_02_000");
MsgDisp("Sassa","Hey, I'm here.
Do you mind if I call you right now?");
MsgDisp("主人公","Okay, so what is it?");
VoicePlay("J140201000_02_010");
MsgDisp("Sassa","It's this coming Sunday, are you free?");
