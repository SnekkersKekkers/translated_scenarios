BGOpen("sc721",0);
MsgClose();
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("P140400000_04_000");
MsgDisp("Nanatsumori","Goal.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Good work!");
ChMotion(4,1,1);
VoicePlay("P140400000_04_010");
MsgDisp("Nanatsumori","That was surprising and interesting.
The cow-print shirt was also stylish.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("P140400000_04_020");
MsgDisp("Nanatsumori","Ah, the freshly-squeezed milk.
Did you get it?");
MsgDisp("主人公","Yes, congratulations!
The freshly squeezed milk is laid out over
there.");
MsgClose();
ChClose(4,0,30);
VoicePlay("P140400000_04_030");
MsgDisp("Nanatsumori","Yummmeeeh～");
MsgDisp("主人公","(That's a sheep.
Yay, the maze was a great success!)");
MsgClose();
ScrFadeOut(0,0);
