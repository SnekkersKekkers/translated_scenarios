BGOpen("ex000",1);
ChClose(4,0,0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
Why did I say such a thing...)");
SEPlay("EV_SE_579");
MsgDisp("主人公","(Huh?
It's from ｛七ツ森＊｝...)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","Yes, hello.");
VoicePlay("B100400000_04_000");
MsgDisp("Nanatsumori","Hey.");
MsgDisp("主人公","｛七ツ森＊｝, what's
wrong?");
VoicePlay("B100400000_04_010");
MsgDisp("Nanatsumori","Don't talk like that.");
MsgDisp("主人公","Eh...?");
VoicePlay("B100400000_04_020");
MsgDisp("Nanatsumori","Sorry for just now.
I started getting irritated on my own, and
I said some nasty things to you.");
VoicePlay("B100400000_04_030");
MsgDisp("Nanatsumori","I really was an idiot.");
MsgDisp("主人公","No.
I'm the one who said weird things, I'm
sorry.");
VoicePlay("B100400000_04_040");
MsgDisp("Nanatsumori","Yeah, it was definitely weird.
Haha.");
MsgDisp("主人公","Hey...
Hehe!");
VoicePlay("B100400000_04_050");
MsgDisp("Nanatsumori","That's good.
Now we can finish this with a smile.
Then, goodnight.");
MsgDisp("主人公","Yeah, goodnight.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛七ツ森＊｝...called me out of concern.)");
MsgClose();
ScrFadeOut(0,0);
