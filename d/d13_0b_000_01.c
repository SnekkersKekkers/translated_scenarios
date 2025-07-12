BGOpen("sc530",0);
ChLayout(2);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,254,0,3,3,#1,#1,0,0,0,30);
ChOpen(1,254,0,0,0,#1,#1,0,1,0,30);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
VoicePlay("D130B00001_04_000");
MsgDisp("Nanatsumori","Ah... they're holding 
quite a lot of things.
Maybe... it's there.");
MsgDisp("主人公","Ah, you guys.
Good morning!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D130B00001_03_000");
MsgDisp("Honda","Good morning!
Hey hey, today is——");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("D130B00001_01_000");
MsgDisp("Kazama","Calm down.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("D130B00001_03_010");
MsgDisp("Honda","Eh?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D130B00001_04_010");
MsgDisp("Nanatsumori","Were you going to 
ask for it yourself?");
MsgDisp("主人公","Hey, what is everyone
talking about?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D130B00001_01_010");
MsgDisp("Kazama","You don't have to worry about it.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D130B00001_04_020");
MsgDisp("Nanatsumori","Right.
It's our problem.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D130B00001_03_020");
MsgDisp("Honda","Why?
Is even asking a no-go?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D130B00001_01_020");
MsgDisp("Kazama","How troublesome...
I'm going back to class.");
ChMotion(4,1,1);
VoicePlay("D130B00001_04_030");
MsgDisp("Nanatsumori","Me too.
Then, good luck.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("D130B00001_03_030");
VoiceEVSPlay(3);
MsgDisp("Honda","Eh-... then, I'm going back too.
See you later, ｛主人公｝.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
BGMStop();
ChClose(1,0,30);
ChClose(4,0,30);
ChClose(3,0,30);
MsgDisp("主人公","(Ah... today is Valentine's day,
so could that be what
they're worrying over?)");
MsgClose();
ScrFadeOut(0,0);
