BGMStop();
BGOpen("sc810",0);
ChLayout(1);
ChOpen(5,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(7,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","Hah, that was fun......
Thank you for today!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("Q080C00100_05_000");
MsgDisp("Hiiragi","Yeah, me too. It's such fun, school trips.
It's a shame couldn't go in primary and
junior high school.");
MsgDisp("主人公","Oh yeah......
It's ｛柊＊＊＊｝'s first school
trip.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoiceEVSPlay(7);
VoicePlay("Q080C00100_07_000");
MsgDisp("Mikage","｛主人公｝, our role is
important.");
MsgDisp("主人公","Eh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("Q080C00100_05_010");
MsgDisp("Hiiragi","Yes, it's important.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("Q080C00100_05_020");
MsgDisp("Hiiragi","So also the free day after tomorrow, let's
go around together too.");
MsgDisp("主人公","Hehe, yes.
I'm looking forward!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("Q080C00100_05_030");
MsgDisp("Hiiragi","See you then again.
I'll report back to Inori as soon as
possible.");
MsgDisp("主人公","(The next free day is going to be fun too!
I can't wait.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(7,0,0);
