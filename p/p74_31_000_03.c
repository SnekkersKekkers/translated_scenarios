MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Uuugh, I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,2,4,4,-1,-1,0,0);
VoicePlay("P743100003_31_000");
MsgDisp("Goro","Oh dear.
Even when you fall, do it gracefully 
and beautifully.");
MsgDisp("主人公","Ah, Goro-sensei...");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("P743100003_31_010");
MsgDisp("Goro","The dress was perfect, it's a shame.
Next time, why don't I give you a lesson
on how to do a proper model walk?");
MsgDisp("主人公","(Haa... a huge fail.
Even in front of Goro-sensei, 
I'm disappointed...)");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
