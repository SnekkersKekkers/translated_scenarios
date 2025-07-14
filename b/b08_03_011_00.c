MsgClose();
ChOpen(3,255,4,4,0,8,#1,0,2);
VoicePlay("B080301100_03_000");
MsgDisp("Honda","I see.
I've never been good at reading the mood.");
SEPlay("EV_SE_529");
SEWait();
MsgDisp("主人公","｛本多＊＊｝∋");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,5);
VoicePlay("B080301100_03_010");
MsgDisp("Honda","Oh, it's fine it's fine.
I'm leaving now!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
Wait(60,0);
