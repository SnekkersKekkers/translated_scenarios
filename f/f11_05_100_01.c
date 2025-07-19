BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("F110510001_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDisp("主人公","Oh, ｛柊＊＊＊｝.
Information desk again this year?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F110510001_05_010");
MsgDisp("Hiiragi","Yes. In-between student council duties, I
manage registration, booth validation, and
sampling, too.");
MsgDisp("主人公","What is ｛柊＊＊＊｝'s yakisoba
recommendation, then?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510001_05_020");
MsgDisp("Hiiragi","I was wondering why last year, everyone
asked for sweets recommendations, but this
year, everyone is asking for yakisoba.");
MsgDisp("主人公","Is that how it was?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("F110510001_05_030");
MsgDisp("Hiiragi","Yes. There really are many types...
Taiyaki, on its own, has red bean paste,
cream, cheese...");
ChEye(5,2);
ChMouth(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("F110510001_05_040");
MsgDisp("Hiiragi","Still, I have not been able to eat it.");
ChEye(5,3);
ChMouth(5,2);
VoicePlay("F110510001_45_000");
MsgDisp("Woman Customer","Clerk-san, the taiyaki you recommended was
super delicious!
Now I want to eat something salty.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510001_05_050");
MsgDisp("Hiiragi","Excuse me.
I will see you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
VoicePlay("F110510001_05_060");
MsgDisp("Hiiragi","If that is the case, try yakisoba.
I will take you there.");
MsgDisp("主人公","(Haha.
｛柊＊＊＊｝ seems like he could go for
yakisoba.)");
MsgClose();
ScrFadeOut(0,0);
