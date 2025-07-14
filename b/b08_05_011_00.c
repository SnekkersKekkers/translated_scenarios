MsgClose();
ChOpen(5,255,0,2,2,8,0,0,2);
VoicePlay("B080501100_05_000");
MsgDisp("Hiiragi","............");
SEPlay("EV_SE_529");
SEWait();
MsgDisp("主人公","｛柊＊＊＊｝∋");
ChMotion(5,2);
ChMouthOpenLevel(5,#1);
VoicePlay("B080501100_05_010");
MsgDisp("Hiiragi","It seems the timing was bad.
I'll fix that.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
ChEyeOpenLevel(5,#1);
Wait(60,0);
