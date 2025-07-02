BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad! That was a huge success!)");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(21,254,4,4,0,-1,-1,0,1);
SEPlay("EV_SE_544",0,0.5);
ChOpen(22,254,0,0,3,-1,-1,0,2);
VoicePlay("P540D00004_21_000");
MsgDisp("Michiru","Haa... what should I do.
I feel like I'm going to cry. ");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
ChEyeOpenLevel(22,0);
VoicePlay("P540D00004_22_000");
MsgDisp("Hikaru","That was so gooood...
Mari is a genius!");
MsgDisp("主人公","Hehe, thank you!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P540D00004_22_010");
MsgDisp("Hikaru","Hikaru says thanks too!
It's been so long since I was so moved!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P540D00004_21_010");
MsgDisp("Michiru","Truly, good work these last three years.
That was a magnificent performance.");
MsgDisp("主人公","(I'm glad my last high school 
performance went well...!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
