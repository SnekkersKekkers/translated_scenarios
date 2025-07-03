BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I was able to give my best 
performance of the last three years.
I'm glad...!)");
VoicePlay("P543100004_31_000");
MsgDisp("Goro?","Haa...");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(31,254,2,4,4,-1,-1,0,0);
MsgDisp("主人公","Ah,Goro-sensei!
Were you pleased and 
was it satisfactory?");
ChEye(31,3);
ChMouth(31,2);
ChMotion(31,4);
VoicePlay("P543100004_31_010");
MsgDisp("Goro","Look at this face.
I'm in Shangri-la now.
It's thanks to you♪");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Yay!
I'm truly glad I gave it my best
these last three years!)");
MsgClose();
ScrFadeOut(0);
