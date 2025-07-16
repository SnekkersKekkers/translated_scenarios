BGOpen("ex000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
Why did I say that...)");
SEPlay("EV_SE_579");
MsgDisp("主人公","Ah, it's from
｛御影＊＊｝...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","...Yes, hello.");
VoicePlay("B100700000_07_000");
MsgDisp("Mikage","Oh, hey, it's me.");
MsgDisp("主人公","｛御影＊＊｝, I'm sorry
for today.");
VoicePlay("B100700000_07_010");
MsgDisp("Mikage","Hey hey, what are you saying?
... I'm glad I called.");
MsgDisp("主人公","Eh...?");
VoicePlay("B100700000_07_020");
MsgDisp("Mikage","It was my fault for dragging you about as
I pleased. I also acted weird. I'm really
sorry.");
VoicePlay("B100700000_07_030");
MsgDisp("Mikage","Your unexpected reactions aren't anything
new right?");
MsgDisp("主人公","Hehe, hey now.");
VoicePlay("B100700000_07_040");
MsgDisp("Mikage","Oh, you laughed at that huh.
If you're not too put off, let's hang out
again.");
MsgDisp("主人公","Yes...!");
VoicePlay("B100700000_07_050");
MsgDisp("Mikage","See you.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛御影＊＊｝... called me out of concern.)");
MsgClose();
ScrFadeOut(0,0);
