BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,2,1,0,#1,0,0);
ScrFadeIn(0);
VoicePlay("F110110002_01_000");
MsgDisp("Kazama","Hah...");
MsgDisp("主人公","｛風真＊＊｝, are you okay?
You look tired.");
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("F110110002_01_010");
MsgDisp("Kazama","Yeah, I dealt with everyone.
I walked around with the Simon customers,
the juniors, and the elderly association.");
MsgDisp("主人公","Haha. Well, isn't someone popular this
year?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F110110002_01_020");
MsgDisp("Kazama","Shut up.
Come on, let's go.");
MsgDisp("主人公","But, ｛風真＊＊｝, haven't you seen
everything already?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F110110002_01_030");
MsgDisp("Kazama","Yeah, but this time, I can see it with
you.");
MsgDisp("主人公","...right, let's go!");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F110110002_01_040");
MsgDisp("Kazama","Well then, let's start at the school gate!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(Alright, I'll enjoy my last festival!)");
MsgClose();
ScrFadeOut(0,0);
