MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex060",0);
ChLayout(1);
MsgClose();
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ScrFadeIn(0);
SEPlay("EV_SE_001");
SEWait();
VoicePlay("B360550301_34_000");
MsgDisp("Clerk","Here it is.
Please enjoy.");
ChEye(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("B360550301_05_000");
MsgDisp("Hiiragi","I've been demoted to 'water boy'......
Now there's no way I can relax.");
MsgDisp("主人公","Uh, yeah.
Shall we go now?");
ChEye(5,0);
ChMotion(5,0);
Wait(20,1);
VoicePlay("B360550301_05_010");
MsgDisp("Hiiragi","No.
I'm finally able to be alone with you.
We can decide when to return.");
MsgDisp("主人公","Y-Yeah.");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B360550301_05_020");
MsgDisp("Hiiragi","So what were we talking about?");
MsgDisp("主人公","Hmm......?
What was it again......?");
ChEye(5,0);
ChMouth(5,2);
VoicePlay("B360550301_05_030");
MsgDisp("Hiiragi","The store staff came.......");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B360550301_05_040");
MsgDisp("Hiiragi","Ah, right.
They said this is the seat you're often
in.");
MsgDisp("主人公","That's right.
I sit here a lot.");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B360550301_05_050");
MsgDisp("Hiiragi","Maybe high school students have designated
seats?");
MsgDisp("主人公","I wonder......");
ChEyeOpenLevel(5,0);
VoicePlay("B360550301_05_060");
MsgDisp("Hiiragi","Hmm......");
Wait(20,1);
ChEye(5,2);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("B360550301_05_070");
MsgDisp("Hiiragi","I guess it wasn't such an important topic.
Shall we head back?
My eyes are starting to hurt.");
MsgDisp("主人公","Hehe, that's true.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,0);
