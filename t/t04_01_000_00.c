MsgType(0);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",0);
NSSOpen(1,254,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
NSSEye(1,0);
NSSMouth(1,0);
VoicePlay("T040100000_01_000");
MsgDisp("Kazama","Hey, from now on......
No matter how grand the ceremony,
the real anniversary is today.");
MsgDisp("主人公","Hehe, yes.");
NSSEye(1,3);
NSSMouth(1,3);
VoicePlay("T040100000_01_010");
MsgDisp("Kazama","The day of our graduation and our wedding
ceremony.");
MsgDisp("主人公","You'll never forget it, right?");
NSSEye(1,0);
NSSMouth(1,0);
NSSEyeOpenLevel(1,5);
VoicePlay("T040100000_01_020");
MsgDisp("Kazama","Hey......
when you say it, it's a little scary.");
MsgDisp("主人公","Then, I won't forget it.");
NSSEye(1,6);
NSSMouth(1,0);
NSSCheek(1,7);
VoicePlay("T040100000_01_030");
MsgDisp("Kazama","Yes, then I'm counting on you——");
NSSEye(1,0);
NSSMouth(1,3);
VoicePlay("T040100000_01_040");
MsgDisp("Kazama","My bride.");
SEStop("EV_SE_754",5.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0,300);
NSSClose();
Wait(300,0);
