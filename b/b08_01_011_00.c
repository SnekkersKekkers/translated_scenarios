MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,255,0,2,2,8,#1,0,2);
VoicePlay("B080101100_01_000");
MsgDisp("Kazama","Uh.
Seriously...");
SEPlay("EV_SE_529");
SEWait();
MsgDisp("主人公","Ah, ｛風真＊＊｝...!");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B080101100_01_010");
MsgDisp("Kazama","Looks like I interrupted you.
... Why?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
Wait(60,0);
