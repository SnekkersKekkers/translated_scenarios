BGOpen("ho300",2);
ChLayout(1);
MsgClose();
ChOpen(21,255,0,0,4,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,2,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChEye(22,2);
ChMouth(22,1);
ChMotion(22,2,1);
VoicePlay("L010D00107_22_000");
MsgDisp("Hikaru","Um!?
It's certainly amazing...?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("L010D00107_21_000");
MsgDisp("Michiru","This is...something you might not want to
give.");
MsgDisp("主人公","Ugh...
I messed up a bit...");
MsgClose();
ScrFadeOut(0,0);
