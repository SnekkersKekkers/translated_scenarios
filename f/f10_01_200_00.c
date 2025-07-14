BGOpen("sc520",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100120000_01_000");
MsgDisp("Kazama?","That's convenient.");
MsgDisp("主人公","(Huh? That voice just now...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,254,0,0,0,#1,#1,0,1);
ChOpen(7,254,0,0,0,#1,#1,0,2);
MsgDisp("主人公","It's ｛風真＊＊｝ and ｛御影＊＊｝.
What have you two been discussing?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100120000_07_000");
MsgDisp("Mikage","It's course for men who live alone.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F100120000_01_010");
MsgDisp("Kazama","Mikage-sensei's lived alone for a long
time, so he's been teaching me some life
hacks.");
MsgDisp("主人公","Life hacks?
Like what?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("F100120000_01_020");
MsgDisp("Kazama","Freeze bread as soon as you buy it.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("F100120000_07_010");
MsgDisp("Mikage","That's elementary.
If you buy a whole loaf, it'll spoil
before you can eat it.");
MsgDisp("主人公","I see...
You can only do that when you live alone.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100120000_07_020");
MsgDisp("Mikage","We'll start from the basics, so be sure to
take proper notes, okay?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F100120000_01_030");
MsgDisp("Kazama","Yes, thank you very much.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(1,0,30);
ChClose(7,0,30);
MsgDisp("主人公","(Haha. ｛風真＊＊｝ sounds so earnest.
Living alone sounds like tough work...)");
VoicePlay("F100120000_07_030");
MsgDisp("Mikage","First of all, wash your clothes as
infrequently as possible.");
MsgDisp("主人公","(Huh∋)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
