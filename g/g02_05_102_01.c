MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("G020510201_05_000");
MsgDisp("Hiiragi","......Ever since I entered Haba High,
I've been able to make so many memories
with you.");
VoiceEVSPlay(5);
VoicePlay("G020510201_05_010");
MsgDisp("Hiiragi","｛主人公｝, thank you.");
MsgDisp("主人公","Hehe, I should be the one saying that.
But, you're saying that as if you're 
about to already graduate?");
ChEye(5,4);
VoicePlay("G020510201_05_020");
MsgDisp("Hiiragi","Heheh, you really are perceptive.
Yes, I am graduating.");
MsgDisp("主人公","Ehhhh∋");
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("G020510201_05_030");
MsgDisp("Hiiragi","I want memories of you as someone
special, not just as a classmate");
MsgDisp("主人公","Someone special...");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("G020510201_05_040");
MsgDisp("Hiiragi","Yes, it might be more than just fun, but
that's something I'm looking forward to.");
ChEye(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("G020510201_05_050");
MsgDisp("Hiiragi","｛主人公｝, please take care of me?");
MsgDisp("主人公","(A special relationship with
｛柊＊＊＊｝...... I wonder how that might
look like?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
