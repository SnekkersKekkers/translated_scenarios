ChClose(6,0,0);
BGOpen("ex000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
Today was a fail...)");
SEPlay("EV_SE_579");
MsgDisp("主人公","Huh? My phone...
It's ｛氷室＊＊｝.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","Hello.");
VoicePlay("B100600000_06_000");
MsgDisp("Himuro","It's me.
Today was a bit, you know.");
MsgDisp("主人公","Um... I——");
VoicePlay("B100600000_06_010");
MsgDisp("Himuro","Stop.
I don't want to hear it.");
VoicePlay("B100600000_06_020");
MsgDisp("Himuro","I also went a bit too far.
Let's sweep today under the carpet.");
MsgDisp("主人公","Y-yeah.");
VoicePlay("B100600000_06_030");
MsgDisp("Himuro","Then, let's not say things like 
that to each other anymore.
That's all I had to say.
...Goodnight.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛氷室＊＊｝......
went to the trouble of calling me.
I'm so happy.)");
MsgClose();
ScrFadeOut(0,0);
