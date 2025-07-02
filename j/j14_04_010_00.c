BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Huh?
It's from ｛七ツ森＊｝.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes, hello.");
VoicePlay("J140401000_04_000");
MsgDisp("Nanatsumori","I'm Nanatsumori.
Is this a good time?");
MsgDisp("主人公","Yeah, what's up?");
VoicePlay("J140401000_04_010");
MsgDisp("Nanatsumori","Are you free this Sunday?");
