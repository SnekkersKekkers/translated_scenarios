MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc710",0);
ScrFadeIn(0);
VoicePlay("P840600005_45_000");
MsgDisp("Girl","Moooーm...!");
SEPlay("EV_SE_688");
SEWait();
MsgDisp("主人公","Ah, wait.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,4,1,0,#1,#1,0,0);
VoicePlay("P840600005_06_000");
MsgDisp("Himuro","You can't let go of her hand.");
MsgDisp("主人公","I'm sorry.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("P840600005_06_010");
MsgDisp("Himuro","Instead of apologising, run after her.
You'll lose sight of her like that.");
MsgDisp("主人公","Ah, yes!");
MsgClose();
ChClose(6);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("P840600005_06_020");
MsgDisp("Himuro","I wondered how it'll turn out...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P840600005_06_030");
MsgDisp("Himuro","We can't see the girl, And we passed by
her mother.");
MsgDisp("主人公","But, I'm glad it's somehow worked out.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("P840600005_06_040");
MsgDisp("Himuro","I guess we were lucky.
that she was still running around.
...You're too clumsy.");
MsgDisp("主人公","(Uuugh....
It was a huge fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
