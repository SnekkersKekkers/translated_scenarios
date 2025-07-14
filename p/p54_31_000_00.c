BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
My first performance seems to be a huge
success!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(31,254,4,0,0,#1,#1,0,0);
VoicePlay("P543100000_31_000");
MsgDisp("Goro","A throbbing feeling...
It's your soul.");
MsgDisp("主人公","Thank you very much.");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,2);
VoicePlay("P543100000_31_010");
MsgDisp("Goro","It was the best.
I'm familiar with this song, but it's like
I've seen a new world!");
MsgDisp("主人公","(Yay! This is the result of practicing
regularly!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(31,0,0);
