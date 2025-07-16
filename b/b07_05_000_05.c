MsgDisp("主人公","｛柊＊＊＊｝, what are your
hobbies?");
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B070500000_05_200");
MsgDisp("Hiiragi","Would you laugh if I said cleaning?");
MsgDisp("主人公","No.
I want to follow your example of having
cleaning as a hobby!");
ChEye(5,2);
ChMotion(5,2);
ChEyeOpenLevel(5,8);
VoicePlay("B070500000_05_210");
MsgDisp("Hiiragi","No, it's not something to be praised for.
To be specific, I collect cleaning
supplies. I can't help but buy them.");
MsgDisp("主人公","I see, but that seems fun.");
ChEye(5,3);
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("B070500000_05_220");
MsgDisp("Hiiragi","Yes it's fun, and it's a nice feeling.
The dirt falls off instantly and cleans up
nicely.");
MsgDisp("主人公","｛柊＊＊＊｝, you're quite
family-oriented aren't you?");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,2);
VoicePlay("B070500000_05_230");
MsgDisp("Hiiragi","Ah, recently I've been interested in
cleaning robots.
They're rather unorthodox.");
MsgDisp("主人公","(A cleaning showdown between
｛柊＊＊＊｝ and a cleaning
robot... I'm kind of curious.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
