BGMStop();
ChLayout(1);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I feel calmer than last year.
But, as expected I'm still nervous.)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,0,0,0,#1,#1,0,0);
VoicePlay("P533100001_31_000");
MsgDisp("Goro","Game music?");
MsgDisp("主人公","Ah, Goro-sensei!");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,2);
VoicePlay("P533100001_31_010");
MsgDisp("Goro","Buuut.
Game music, huh...");
SEPlay("EV_SE_038");
SEWait();
MsgDisp("主人公","Then, I'm off!");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,1);
VoicePlay("P533100001_31_020");
MsgDisp("Goro","Yes, have a good time.
I'm looking forwards to seeing how it's
like.");
MsgDisp("主人公","(Alright, let's do our best!)");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
