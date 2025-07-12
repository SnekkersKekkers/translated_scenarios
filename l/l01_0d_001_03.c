BGOpen("ho300",2);
ChLayout(1);
MsgClose();
ChOpen(21,255,3,0,3,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
VoicePlay("L010D00103_21_000");
MsgDisp("Michiru","So cool.
Cool chocolate looks so delicious.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("L010D00103_22_000");
MsgDisp("Hikaru","Yeah yeah!
There are lots of guys who like this
kind of thing!");
MsgDisp("主人公","Yeah, they came out great!");
MsgClose();
ScrFadeOut(0,0);
