BGOpen("ho210",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
VoicePlay("C010400000_04_000");
MsgDisp("Nanatsumori","...Hello.");
MsgDisp("主人公","Ah, ｛Nanatsumori＊｝?
This is ｛主人公｝...");
VoicePlay("C010400000_04_010");
MsgDisp("Nanatsumori","I know who this is.
And?
What now?");
MsgDisp("主人公","(Ugh, this is so awkward...
But if I don't have a proper talk with him
now...)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("C010400000_04_020");
MsgDisp("Nanatsumori","That's enough, I get it.");
VoicePlay("C010400000_04_030");
MsgDisp("Nanatsumori","I mean, I'm the one who should be sorry.
I should've just talked to you directly.
My bad.");
MsgDisp("主人公","Yeah, I should have contacted you
sooner...");
VoicePlay("C010400000_04_040");
MsgDisp("Nanatsumori","You're fine.
I'm glad we could make up.
I think I'll sleep well tonight.");
MsgDisp("主人公","Ah...
Were you not sleeping well?
Good night then, ｛Nanatsumori＊｝.");
VoicePlay("C010400000_04_050");
MsgDisp("Nanatsumori","Yeah, night.
See you later.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Thank goodness...
Looks like we were able to make up.)");
MsgClose();
