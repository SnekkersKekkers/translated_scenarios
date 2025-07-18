MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...
Even though it was my last show...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
VoicePlay("P740400005_04_000");
MsgDisp("Nanatsumori","Good work.");
MsgDisp("主人公","｛七ツ森＊｝...
EVen though it was my last show, I failed.");
VoicePlay("P740400005_04_010");
MsgDisp("Nanatsumori","That's true.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P740400005_04_020");
MsgDisp("Nanatsumori","But you'll still have the real thing one
day?");
MsgDisp("主人公","Real thing?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P740400005_04_030");
MsgDisp("Nanatsumori","Right.
You just need to look perfect when you
become a bride.");
MsgDisp("主人公","Hehe...yes!");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("P740400005_04_040");
MsgDisp("Nanatsumori","Hm, alright then.");
MsgDisp("主人公","(Even though I failed in the end...
I'm glad I gave it my best these last
three years in the handicrafts club.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
