BGOpen("sc721",0);
ChLayout(1);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0);
ScrFadeIn(0);
VoicePlay("P140D00000_21_000");
MsgDisp("Michiru","Ah, looks like an exit.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("P140D00000_22_000");
MsgDisp("Hikaru","We passed～!
How was it?");
MsgDisp("主人公","You two are back!
It's... not a new record though.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("P140D00000_21_010");
MsgDisp("Michiru","That's because Hikaru was only taking
pictures of the decorations and
illustrations in the maze...");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P140D00000_22_010");
MsgDisp("Hikaru","Even so～ , it really was so cute.
Wasn't it?");
ChSet(21,0);
MsgDisp("主人公","Hehe, I'm so happy to hear that!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P140D00000_22_020");
MsgDisp("Hikaru","Yeah, yeah, it was so fun♪
I'm super pleased!");
MsgDisp("主人公","(Yay, the maze was a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21);
ChClose(22);
