BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for waiting.
Here's your hot coffee.");
SEPlay("EV_SE_001",0,0.5);
SEWait();
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110400601_04_000");
MsgDisp("Nanatsumori","Thanks.");
MsgDisp("主人公","......");
VoicePlay("G110400601_04_010");
MsgDisp("Nanatsumori","...What?");
MsgDisp("主人公","Um, maybe it's none of my business, but...");
ChMotion(4,0);
VoicePlay("G110400601_04_020");
MsgDisp("Nanatsumori","Then don't worry about it.");
MsgDisp("主人公","Uh...");
ChMouth(4,2);
ChMotion(4,1);
VoicePlay("G110400601_04_030");
MsgDisp("Nanatsumori","... But, what is it.");
MsgDisp("主人公","I was just wondering if you talked to your
sister.");
ChEye(4,1);
ChMouth(4,2);
VoicePlay("G110400601_04_040");
MsgDisp("Nanatsumori","Oh, that.");
ChMotion(4,2);
VoicePlay("G110400601_04_050");
MsgDisp("Nanatsumori","I made things right.
I stayed on the phone with her for a long
time.");
MsgDisp("主人公","I see.
Hehe, I'm glad!");
ChEye(4,0);
ChMouth(4,1);
ChMotion(4,0);
VoicePlay("G110400601_04_060");
MsgDisp("Nanatsumori","Geez... sometimes women treat men like
they are children...");
MsgDisp("主人公","(I understand how your sister feels, maybe
she wasn't trying to treat you like a
child?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
