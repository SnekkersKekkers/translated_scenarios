BGOpen("wf700",2);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606401_06_000");
MsgDisp("Himuro","...Ah, they have goldfish scooping.");
MsgDisp("主人公","Do you want to try it?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B040606401_06_010");
MsgDisp("Himuro","I'm good.
You'll only lose doing that.");
MsgDisp("主人公","Really?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B040606401_06_020");
MsgDisp("Himuro","Yeah. So that the shop keeper can make a
proper profit. That's why it breaks so
easily.");
MsgDisp("主人公","...Isn't that just 'cause you're bad at
it, ｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B040606401_06_030");
MsgDisp("Himuro","...Understood.
Alright.
Let's have a contest.");
SEPlay("EV_SE_626");
MsgClose();
ChClose(6);
MsgDisp("主人公","(Did I accidentally fire something up in
him...?)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","...I caught one more than you right?");
ChOpen(6,33,2,1,1,0,#1,0,0);
VoicePlay("B040606401_06_040");
MsgDisp("Himuro","You still only caught three.
It's nothing to be proud of.");
MsgDisp("主人公","But ｛氷室＊＊｝ ——");
SEPlay("EV_SE_022",0.3,0.5);
Wait(30,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("B040606401_06_050");
MsgDisp("Himuro","Ah, the fireworks are starting.");
MsgClose();
SEStop("EV_SE_022",2);
SEPlay("EV_SE_626");
MsgClose();
ChClose(6);
MsgDisp("主人公","Hey!
Wait up!");
SEPlay("EV_SE_672");
Wait(30,1);
MsgClose();
ScrFadeOut(0,0);
SEWait();
