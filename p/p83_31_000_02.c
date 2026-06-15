BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year I'm in charge of patrolling each
exhibit.
I have to check carefully...!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,0,0,0,#1,#1,0,0);
VoicePlay("P833100002_31_000");
MsgDisp("Goro","Hello—.
The cultural festival is getting
exciting, huh?");
MsgDisp("主人公","Goro-sensei!
You came to see, it huh?");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,4);
VoicePlay("P833100002_31_010");
MsgDisp("Goro","Right. Hey, you're a third year, so you must
know all the best spots.
Could you show me the highlights?");
MsgDisp("主人公","Yes, I'll do it while patrolling the
exhibits, but I can show you around!");
MsgClose();
ScrFadeOut(0);
