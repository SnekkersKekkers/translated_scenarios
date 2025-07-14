MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ahh... Even though it was my last
stage...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,5,1,1,#1,#1,0,0);
VoicePlay("P743100005_31_000");
MsgDisp("Goro","That \"Bang!\" was brilliant.
But that's not it, geez.");
MsgDisp("主人公","Ah, Goro-sensei...");
ChEye(31,1);
ChMouth(31,1);
ChMotion(31,2);
ChEyeOpenLevel(31,0);
VoicePlay("P743100005_31_010");
MsgDisp("Goro","You're on a model runway show.");
MsgDisp("主人公","Uuugh....");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,3);
VoicePlay("P743100005_31_020");
MsgDisp("Goro","But you know, the wedding dress you made
was on the level of global fashion shows.
I was also inspired.");
MsgDisp("主人公","(Haa... I was super happy with my dress
but... I wish I had been more prepared...)");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
