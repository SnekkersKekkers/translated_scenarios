ChClose(1,0,0);
BGOpen("ex000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Sigh...today didn't go well...)");
SEPlay("EV_SE_579");
MsgDisp("主人公","Huh, it's my phone.
Eh, it's from ｛Kazama＊＊｝?");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","Yes, hello.");
VoicePlay("B100100000_01_000");
MsgDisp("Kazama","Yo.");
MsgDisp("主人公","Is something the matter?");
VoicePlay("B100100000_01_010");
MsgDisp("Kazama","No, I just thought you were pretty funny
today.
Were you trying to get a laugh?");
MsgDisp("主人公","That's not what I wanted though...");
VoicePlay("B100100000_01_020");
MsgDisp("Kazama","Got it.
You gave it your all, didn't you?");
VoicePlay("B100100000_01_030");
MsgDisp("Kazama","I got too worked up trying to make it special
too.
...My bad.");
MsgDisp("主人公","｛Kazama＊＊｝...");
VoicePlay("B100100000_01_040");
MsgDisp("Kazama","Even if things don't go smoothly sometimes,
that's just like us, right?
So don't worry about it.");
MsgDisp("主人公","...Yeah.");
VoicePlay("B100100000_01_050");
MsgDisp("Kazama","That being said, we don't need any more days
like today for a while, okay?");
MsgDisp("主人公","Hehe, yeah.
For a while!");
VoicePlay("B100100000_01_060");
MsgDisp("Kazama","Oh, you're feeling better now.
Well, I'll see you then.");
MsgDisp("主人公","Yeah, see you.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛Kazama＊＊｝...called to check up on me.)");
MsgClose();
ScrFadeOut(0,0);
