BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Huh?
It's from ｛氷室＊＊｝)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes, hello.");
VoicePlay("J140601000_06_000");
MsgDisp("Himuro","Hey, it's me.
Are you free this Sunday?");
