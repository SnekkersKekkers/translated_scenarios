BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yes, I was able to give
a good performance!)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,254,3,0,3,#1,#1,0,0);
VoicePlay("P540200002_02_000");
MsgDisp("Sassa","That was amazing.
The audience was so hyped upー!");
MsgDisp("主人公","Yes, 
I'm happy that they liked it.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("P540200002_02_010");
MsgDisp("Sassa","You guys seemed to be having
so much fun performing, I think
the audience could sense it too.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P540200002_02_020");
MsgDisp("Sassa","I also want to try playing that game.");
MsgDisp("主人公","(Yay! Seems like I could 
give a good performance!
I had fun performing!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
