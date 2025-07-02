BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... a huge failure...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(31,254,2,2,0,-1,-1,0,0);
VoicePlay("P543100001_31_000");
MsgDisp("Goro","...I wonder what that was");
MsgDisp("主人公","Ah, ＧＯＲＯ-sensei.
I apologise, you came all this way too...");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("P543100001_31_010");
MsgDisp("Goro","Hm～...
I felt like I saw a new world.
But it appears it might've
just been my imagination.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Ughn, 
I want ＧＯＲＯ-sensei to hear 
a perfect performance...)");
MsgClose();
ScrFadeOut(0);
