MsgClose();
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
MsgDisp("主人公","The fireflies are really beautiful.");
VoicePlay("G020410101_04_000");
MsgDisp("Nanatsumori","Yeah.");
MsgDisp("主人公","I don't even know how many are here.
Thousands, tens of thousands?
Maybe even more?");
ChEye(4,4);
ChMouth(4,4);
VoicePlay("G020410101_04_010");
MsgDisp("Nanatsumori","Yeah...");
MsgDisp("主人公","｛Nanatsumori＊｝...are you listening?");
ChEye(4,0);
ChMotion(4,1,1);
VoicePlay("G020410101_04_020");
MsgDisp("Nanatsumori","I am listening.
Your words are always everything to me.");
VoicePlay("G020410101_04_030");
MsgDisp("Nanatsumori","Even when I'm with those guys, your words
always reach me.");
MsgDisp("主人公","I-I see.");
ChEye(4,0);
ChMotion(4,0,1);
VoicePlay("G020410101_04_040");
MsgDisp("Nanatsumori","What about you?
Are you listening to me?
Even when you're with everyone else.");
MsgDisp("主人公","That's...");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("G020410101_04_050");
MsgDisp("Nanatsumori","Sorry, I didn't mean to accuse you.
When you're having fun, it's easy to get
carried away.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("G020410101_04_060");
MsgDisp("Nanatsumori","But it hurts when you look the other way.");
MsgDisp("主人公","｛Nanatsumori＊｝...");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("G020410101_04_070");
MsgDisp("Nanatsumori","...Maybe I'm just jealous.
That would be a pain.");
MsgDisp("主人公","(Jealous?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
