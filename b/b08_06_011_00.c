MsgClose();
ChOpen(6,255,0,1,0,#1,#1,0,2);
VoicePlay("B080601100_06_000");
MsgDisp("Himuro","......");
SEPlay("EV_SE_529");
SEWait();
MsgDisp("主人公","｛氷室＊＊｝...");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B080601100_06_010");
MsgDisp("Himuro","Hmmph, so that's how it is.");
MsgDisp("主人公","T-This is....");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("B080601100_06_020");
MsgDisp("Himuro","I don't want to hear it.
It looks like I'm interrupting something,
so I'm going home.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ChEyeOpenLevel(6,#1);
Wait(60,0);
