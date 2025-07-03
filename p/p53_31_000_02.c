BGMStop();
ChLayout(1);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,2,0,0,-1,-1,0,0);
VoicePlay("P533100002_31_000");
MsgDisp("Goro","'Fourth・Heart'......");
MsgDisp("主人公","Ah, Goro-sensei!
You cam all this way, huh?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("P533100002_31_010");
MsgDisp("Goro","Yes, I was charmed by the song title.
It's a fascinating title, correct?");
MsgDisp("主人公","Yes, it's a wonderful song.
Certainly, please give it a listen.");
SEPlay("EV_SE_038");
SEWait();
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,3);
VoicePlay("P533100002_31_020");
MsgDisp("Goro","It's starting, huh?
'Fourth・Heart', my heart is throbbing!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Okay.
I'll show you the results of my practice 
so that you'll be satisfied!)");
MsgClose();
ScrFadeOut(0);
BGOpen("sc725",0);
ScrFadeIn(0);
