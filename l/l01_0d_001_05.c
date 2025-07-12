BGOpen("ho300",2);
ChLayout(1);
MsgClose();
ChOpen(21,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("L010D00105_22_000");
MsgDisp("Hikaru","Mari, you went and did it!
The passion is overflowing～♪");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("L010D00105_21_000");
MsgDisp("Michiru","A wild chocolate.
Hehe, Mari is so bold.");
MsgDisp("主人公","Yeah, they came out great!");
MsgClose();
ScrFadeOut(0,0);
