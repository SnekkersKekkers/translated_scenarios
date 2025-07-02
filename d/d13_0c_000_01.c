BGOpen("sc510",0);
ChLayout(2);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,254,0,0,0,-1,-1,0,0,0,30);
ChOpen(5,254,0,0,4,-1,-1,0,1,0,30);
ChOpen(7,254,0,0,0,-1,-1,0,2,0,30);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("D130C00001_05_000");
MsgDisp("Hiiragi","｛主人公｝, over here.");
MsgDisp("主人公","Ah,｛柊＊＊＊｝.
｛氷室＊＊｝ and ｛御影＊＊｝ too.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D130C00001_07_000");
MsgDisp("Mikage","Hey, Inori.
I told you not to worry.");
MsgDisp("主人公","Umm, what's up?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("D130C00001_06_000");
MsgDisp("Himuro","Nothing... with me at least. ");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("D130C00001_05_010");
MsgDisp("Hiiragi","Inori-kun couldn't see you, 
so he became restless.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("D130C00001_07_010");
MsgDisp("Mikage","He came to check 
if you were absent.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
ChCheek(6,0);
MsgDisp("主人公","Is that so?
｛氷室＊＊｝, did you have something you
wanted to see me for?");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("D130C00001_05_020");
MsgDisp("Hiiragi","Eh...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D130C00001_07_020");
MsgDisp("Mikage","You...");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("D130C00001_06_010");
MsgDisp("Himuro","See, I can't relax at all.
I won't know unless I try with you.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D130C00001_06_020");
MsgDisp("Himuro","Haa... I'm going
back to my classroom.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
MsgClose();
ChClose(5,0,30);
ChClose(7,0,30);
ChLayout(1);
MsgClose();
ChOpen(5,254,4,2,4,0,-1,0,1,0,30);
ChOpen(7,254,0,0,0,-1,-1,0,2,0,30);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoiceEVSPlay(7);
VoicePlay("D130C00001_07_030");
MsgDisp("Mikage","｛主人公｝,
don't make Inori so 
worked up, okay?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D130C00001_05_030");
MsgDisp("Hiiragi","But there was some reasoning 
as to why he said that.
I was looking forward to it a little.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
ChClose(5,0,30);
ChClose(7,0,30);
MsgDisp("主人公","(Umm...Ah!
was everyone fretting over
Valentine's chocolates?)");
MsgClose();
ScrFadeOut(0,0);
