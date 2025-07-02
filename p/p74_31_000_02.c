MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, it was a huge success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,2,2,2,-1,-1,0,0);
VoicePlay("P743100002_31_000");
MsgDisp("Goro","Welcome back.
It was like I was transported
away on that runway!");
MsgDisp("主人公","ＧＯＲＯ-sensei, 
thank you very much!");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("P743100002_31_010");
MsgDisp("Goro","Hey you. Why don't you try walking down a
real runway wearing a dress I designed
someday?");
MsgDisp("主人公","(Yay, a huge success!
I was praised by ＧＯＲＯ-sensei♪)");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
