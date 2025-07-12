BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(It's time to head home now, huh.)");
MsgDisp("主人公","(......Huh? Isn't that ｛風真＊＊｝ over
there. I might as well have a chat before
going home.)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("G110101101_01_000");
MsgDisp("Kazama","Right, right.
The results of recruiting employees
for Simon came out. ");
MsgDisp("主人公","Eh, really?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110101101_01_010");
MsgDisp("Kazama","Yeah.
You can also finally have a junior.");
MsgDisp("主人公","I see.
Until now, I was the newest member......");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110101101_01_020");
MsgDisp("Kazama","What, why are you saying that in such a
lonely manner? Just go into it knowing
you're going to be their instructor.");
MsgDisp("主人公","Y-Yeah.
I'll do my best, .");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110101101_01_030");
MsgDisp("Kazama","And also, 
maybe the hourly pay will go up. ");
MsgDisp("主人公","Eh, really?
I'll do my best.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110101101_01_040");
MsgDisp("Kazama","How opportunistic.");
ChEye(1,0);
MsgDisp("主人公","I can buy cute clothes?
and accessories too......");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110101101_01_050");
MsgDisp("Kazama","Wait a second. I'm not the one who decides
your wages, sop there's no need to be so
serious about it.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
