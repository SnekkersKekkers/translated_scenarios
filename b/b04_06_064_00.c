BGOpen("wf700",2);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606400_06_000");
MsgDisp("Himuro","Amazing... Even if this is a staple of
summer, it feels like we're punishing
ourselves.");
MsgDisp("主人公","You'll enjoy it once you get into it!");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B040606400_06_010");
MsgDisp("Himuro","It's not that simple.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B040606400_06_020");
MsgDisp("Himuro","The biggest difference between you and 
me is that I'm not a glutton.
Things like foods stalls won't——");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("B040606400_06_030");
MsgDisp("Himuro","............");
MsgDisp("主人公","｛氷室＊＊｝?");
ChEye(6,4);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,10);
VoicePlay("B040606400_06_040");
MsgDisp("Himuro","There's donut holes...");
MsgDisp("主人公","Ah, there's a food stall for it.
....Do you like those?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B040606400_06_050");
MsgDisp("Himuro","I see.
To serve that at a food stall...
Good taste. Let's go.");
MsgClose();
SEPlay("EV_SE_626");
MsgClose();
ChClose(6);
Wait(30,0);
MsgDisp("主人公","Ehh, wait up!");
SEPlay("EV_SE_672");
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_628");
Wait(35,0);
ChOpen(6,33,0,0,0,#1,#1,0,0);
ChMotion(6,0);
VoicePlay("B040606400_06_060");
MsgDisp("Himuro","Ah... it's time already.");
MsgDisp("主人公","Time went by so fast.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,10);
VoicePlay("B040606400_06_070");
MsgDisp("Himuro","...Yeah.");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(6,0,0);
