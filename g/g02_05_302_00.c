MsgClose();
ChOpen(5,255,0,0,4,-1,-1,0,0);
VoicePlay("G020530200_05_000");
MsgDisp("Hiiragi","Since entering Haba High, 
I've been trying various things I 
haven't experienced before.");
ChMotion(5,4);
VoicePlay("G020530200_05_010");
MsgDisp("Hiiragi","Even just going to school every day is a
new experience for me, and on top of that,
I'm involved in student council
activities.");
MsgDisp("主人公","Furthermore, you have the ｛柊＊＊＊｝
theatre troupe. It really must be tough.");
ChEye(5,4);
VoicePlay("G020530200_05_020");
MsgDisp("Hiiragi","I've been working in a theater company for
as long as I can remember. It's not a
hardship.");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("G020530200_05_030");
MsgDisp("Hiiragi","Ah, and there's also a time at school 
that feels very familiar to me.");
MsgDisp("主人公","What time is that?");
ChEye(5,4);
VoicePlay("G020530200_05_040");
MsgDisp("Hiiragi","Lunchtime. During the performance period,
we eat meals together with all the other
members of the troupe. The atmosphere is
very similar to that of a school
cafeteria.");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("G020530200_05_050");
MsgDisp("Hiiragi","It's my favorite time when we discuss
various things related to what we've
chosen.");
MsgDisp("主人公","I also like the school cafeteria.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020530200_05_060");
MsgDisp("Hiiragi","That's good to hear. Well, I'm looking
forward to the next time we can go
together. Let's eat the same thing at that
time.");
MsgDisp("主人公","(｛柊＊＊＊｝ seems to be enjoying his
student life at Haba High for the first
time.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
