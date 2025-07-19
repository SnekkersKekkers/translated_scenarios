BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Umm, next lesson is...)");
VoicePlay("F100220000_02_000");
MsgDisp("Sassa?","The Tohoku hot springs sound nice.");
VoicePlay("F100220000_05_000");
MsgDisp("Hiiragi?","Yes, it is great in the winter.");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(2,254,3,0,4,#1,#1,0,1);
ChOpen(5,254,0,0,4,#1,#1,0,2);
MsgDisp("主人公","｛颯砂＊＊｝ and ｛柊＊＊＊｝.
Do you both like hot springs?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100220000_02_010");
MsgDisp("Sassa","Would you also like to join the hot spring
club?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100220000_05_010");
MsgDisp("Hiiragi","You are welcome to.");
MsgDisp("主人公","Is there a hot spring club at Haba High?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("F100220000_02_020");
MsgDisp("Sassa","We just made it.
Right, vice prez?");
ChEye(2,0);
ChEyeOpenLevel(2,10);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100220000_05_020");
MsgDisp("Hiiragi","Yes. There are two people who love hot
springs here. What about you?");
MsgDisp("主人公","Umm...
I like baths but...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100220000_02_030");
MsgDisp("Sassa","Well then, there's no need to hesitate.
It's decided.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("F100220000_05_030");
MsgDisp("Hiiragi","It would be nice if we could all go on a
hot spring tour together someday.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("F100220000_02_040");
MsgDisp("Sassa","Sounds awesome.
Using the club budget too.");
MsgDisp("主人公","(That sounds difficult...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
