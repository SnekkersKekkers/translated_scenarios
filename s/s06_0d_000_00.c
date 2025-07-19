BGOpen("ho100",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
SEPlay("EV_SE_DOOR_022");
SEWait();
ChOpen(21,255,3,0,0,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
VoicePlay("S060D00000_21_000");
MsgDisp("Michiru","Welcome to the New Year.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("S060D00000_22_000");
MsgDisp("Hikaru","Happy New Year, Mari!");
MsgDisp("主人公","Happy New Year!
｛みちる＊｝, ｛ひかる＊｝!");
