BGOpen("wf700",2);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040206400_02_000");
MsgDisp("Sassa","Ah, goldfish.");
MsgDisp("主人公","Want to give it a try?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B040206400_02_010");
MsgDisp("Sassa","No, it's okay.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B040206400_02_020");
MsgDisp("Sassa","I thought about it and I don't think I
could seriously commit to taking care of
one.");
MsgDisp("主人公","That's true, you would have to...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_022",1);
Wait(30,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B040206400_02_030");
MsgDisp("Sassa","Oh, it looks like it's about to start.
Let's go!");
MsgDisp("主人公","Okay!");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(2,0,0);
