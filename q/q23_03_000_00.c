BGOpen("sc813",2);
MsgClose();
ChOpen(3,30,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公"," ｛本多＊＊｝.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("Q230300000_03_000");
MsgDisp("Honda","Yay! Are you joining too?
It looks like you should just throw
the pillows, come!");
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
