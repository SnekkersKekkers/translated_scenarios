BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Huh?
This number is ...)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes, hello.");
VoicePlay("J140701000_07_000");
MsgDisp("Mikage","Hi.");
MsgDisp("主人公","Oh, ｛御影＊＊｝!
What's wrong?");
VoicePlay("J140701000_07_010");
MsgDisp("Mikage","I just wanted to know what your schedule
is.
Are you free this Sunday?");
