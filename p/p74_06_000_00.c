MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, 
looks like it was somewhat of a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("P740600000_06_000");
MsgDisp("Himuro","Good work.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Did you see it?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("P740600000_06_010");
MsgDisp("Himuro","I saw it.
It looked good.");
MsgDisp("主人公","(Yay, a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
