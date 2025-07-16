BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah, my phone......
It's ｛ひかる＊｝.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello, ｛ひかる＊｝?");
VoicePlay("Z412200000_22_000");
MsgDisp("Hikaru","Listen to me seriously.
Someone close to Mari has a wounded heart.
Because of Mari.");
MsgDisp("主人公","What?");
VoicePlay("Z412200000_22_010");
MsgDisp("Hikaru","You should check on them before they're
hurt even more.
Do you know who it could be?");
VoicePlay("Z412200000_22_020");
MsgDisp("Hikaru","If you really don't know, ask Hikaru.
Okay?");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(I wonder if I've hurt someone......)");
MsgClose();
ScrFadeOut(0,0);
