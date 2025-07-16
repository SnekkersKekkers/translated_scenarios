BGOpen("sc710",0);
ChLayout(1);
ScrFadeIn(0);
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
VoicePlay("X210400000_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝!");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("X210400000_04_010");
MsgDisp("Nanatsumori","You really became Rose Queen huh?");
MsgDisp("主人公","Yeah.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("X210400000_04_020");
MsgDisp("Nanatsumori","Congrats.");
MsgDisp("主人公","Thanks.");
ChMotion(4,1,1);
VoicePlay("X210400000_04_030");
MsgDisp("Nanatsumori","You looked very beautiful with your tiara
and crimson gown on.");
MsgDisp("主人公","T-Thank you.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChEyeOpenLevel(4,9);
VoicePlay("X210400000_04_040");
MsgDisp("Nanatsumori","I felt myself thinking \"I would so
anything for his person.\"");
MsgDisp("主人公","That's...");
ChEyeOpenLevel(4,#1);
VoiceEVSPlay(4);
VoicePlay("X210400000_04_050");
MsgDisp("Nanatsumori","｛主人公｝.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("X210400000_04_060");
MsgDisp("Nanatsumori","As expected of Haba Academy's \"Queen\" huh?");
MsgDisp("主人公","Eh?
Heeey, ｛七ツ森＊｝!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("X210400000_04_070");
MsgDisp("Nanatsumori","Haha!
The queen is cute even when she's angry
huh?");
MsgDisp("主人公","(Hey...
But, I'm happy to have become Rose Queen.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
