MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Uuugh, I fell over.)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,2,0,0,-1,-1,0,0);
VoicePlay("P743100001_31_000");
MsgDisp("Goro","Non, non.
You have to fall lightly.");
MsgDisp("主人公","Uuugh, ＧＯＲＯ-sensei...
I didn't practice enough...");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,0);
VoicePlay("P743100001_31_010");
MsgDisp("Goro","The clothes design is １００ points.
But your model sense is off.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Haa... I failed... I should have
practiced more in preparation.)");
MsgClose();
ScrFadeOut(0);
