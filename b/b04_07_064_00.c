BGOpen("wf700",2);
MsgClose();
ChEye(7,0);
ChMouth(7,3);
ChLayout(1);
ScrFadeIn(0);
ChMotion(7,3);
VoicePlay("B040706400_07_000");
MsgDisp("Mikage","Just this atmosphere is enjoyable enough.");
MsgDisp("主人公","Do you like festivals,
｛御影＊＊｝?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B040706400_07_010");
MsgDisp("Mikage","Yeah.
I like them more than when I was a kid.");
MsgDisp("主人公","Is that so?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("B040706400_07_020");
MsgDisp("Mikage","I'm one of the select few.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("B040706400_07_030");
MsgDisp("Mikage","Only those who have the financial power of
an adult but retained their childlike mind
can enjoy this.");
MsgDisp("主人公","Hhe, you're gonna do a haul aren't you?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,4);
VoicePlay("B040706400_07_040");
MsgDisp("Mikage","That's exactly itー.
Let's go through everything from a to z.");
SEPlay("EV_SE_626");
ChClose(7);
Wait(50,0);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_628");
Wait(35,0);
ChOpen(7,255,3,1,3,0,#1,0,0,0,60);
VoicePlay("B040706400_07_050");
MsgDisp("Mikage","Yeah, yeah...
It'll be about now.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("B040706400_07_060");
MsgDisp("Mikage","Three...two...one...");
SEPlay("EV_SE_022",0.2);
Wait(30,0);
MsgDisp("主人公","You were right!
That's amazing timing.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("B040706400_07_070");
MsgDisp("Mikage","We got a good spot.
Let's go.");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
