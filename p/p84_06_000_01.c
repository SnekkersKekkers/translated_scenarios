ScrFadeIn(0);
MsgDisp("主人公","Ummm...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,2,1,0,0,-1,0,0);
VoicePlay("P840600001_06_000");
MsgDisp("Himuro","Your execution is bad.");
MsgDisp("主人公","I-i'm doing my best though.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P840600001_48_000");
MsgDisp("Woman Customer","Hey, I'm still waiting for my tea.");
MsgDisp("主人公","P-please wait a momentー!");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","Is this fine I wonder...?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("P840600001_06_010");
MsgDisp("Himuro","Isn't this clearly too strong?");
MsgDisp("主人公","Is that so——Ah.");
SEPlay("EV_SE_686");
SEWait();
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("P840600001_06_020");
MsgDisp("Himuro","...Why don't you buy it from the store?");
MsgDisp("主人公","(Uhーoh.
It was a huge fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
