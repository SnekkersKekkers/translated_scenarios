ChClose(1,0,0);
BGOpen("ex000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
today didn't go so well...)");
SEPlay("EV_SE_579");
MsgDisp("主人公","Huh, it's my phone.
Eh, it's from ｛風真＊＊｝?");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","Yes, hello.");
VoicePlay("B100100000_01_000");
MsgDisp("Kazama","Yo.");
MsgDisp("主人公","Is something the matter?");
VoicePlay("B100100000_01_010");
MsgDisp("Kazama","No, 
I just thought you were funny today.
But was that what you intended?");
MsgDisp("主人公","That's not what I wanted though...");
VoicePlay("B100100000_01_020");
MsgDisp("Kazama","Got it.
You gave it your all didn't you?");
VoicePlay("B100100000_01_030");
MsgDisp("Kazama","I was also all worked up, 
trying to make it special.
...sorry.");
MsgDisp("主人公","｛風真＊＊｝……");
VoicePlay("B100100000_01_040");
MsgDisp("Kazama","Even if we run around aimlessly
at times, that's just like us,
so don't worry.");
MsgDisp("主人公","...Yeah.");
VoicePlay("B100100000_01_050");
MsgDisp("Kazama","That being said, 
we don't need anymore days like
today for a while, okay?");
MsgDisp("主人公","Hehe, yeah.
For a while!");
VoicePlay("B100100000_01_060");
MsgDisp("Kazama","Oh, you're feeling better now.
Well, I'll see you then.");
MsgDisp("主人公","Yeah, see you.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛風真＊＊｝...
called me out of concern)");
MsgClose();
ScrFadeOut(0,0);
