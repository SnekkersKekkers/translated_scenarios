BGOpen("sc813",2);
ChLayout(1);
MsgClose();
ChOpen(1,30,0,0,1,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛風真＊＊｝.");
ChMotion(1,3);
Wait(10,0);
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
VoicePlay("Q230100000_01_000");
MsgDisp("Kazama","Why did you come?
... It can't be helped, hide behind me!");
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
