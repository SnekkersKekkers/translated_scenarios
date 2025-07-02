MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,255,2,0,2,7,-1,0,2);
VoicePlay("B080201100_02_000");
MsgDisp("Sassa","Ugh, seriously...");
SEPlay("EV_SE_529");
SEWait();
MsgDisp("主人公","｛颯砂＊＊｝∋");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B080201100_02_010");
MsgDisp("Sassa","Sorry, the timing was bad.
...see you then.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
Wait(60,0);
