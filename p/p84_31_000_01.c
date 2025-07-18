ChEye(31,1);
ChMouth(31,1);
ChMotion(31,0);
ScrFadeIn(0);
VoicePlay("P843100001_31_000");
MsgDisp("Goro","Haa, haa...
My legs are stiff...");
MsgDisp("主人公","I'm sorry, I've been so busy I've just
been dragging you along with me...");
ChEye(31,4);
ChMouth(31,1);
ChMotion(31,4);
VoicePlay("P843100001_31_010");
MsgDisp("Goro","It was reckless to go around all the
exhibits...At least I got some good
exercise out of it...Well then...adieu.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Haa, I should have properly thought of a
tour route.
A huge fail...)");
MsgClose();
ScrFadeOut(0);
