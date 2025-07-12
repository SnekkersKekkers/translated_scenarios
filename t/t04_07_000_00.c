MsgType(0);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",0);
NSSOpen(7,254,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("T040700000_07_000");
MsgDisp("Mikage","We got to graduate together.");
MsgDisp("主人公","Yes.
That means we're alumni right?");
NSSEye(7,2);
NSSMouth(7,3);
VoicePlay("T040700000_07_010");
MsgDisp("Mikage","Isn't that right?");
NSSEye(7,6);
NSSMouth(7,2);
VoicePlay("T040700000_07_020");
MsgDisp("Mikage","Hm? But wait? It'll be difficult to attend
the reunion......");
MsgDisp("主人公","Hehe!
Why is that?
I'm looking forward to it.");
NSSEye(7,3);
NSSMouth(7,3);
VoicePlay("T040700000_07_030");
MsgDisp("Mikage","You're laughing huh?");
NSSEye(7,4);
NSSMouth(7,0);
VoicePlay("T040700000_07_040");
MsgDisp("Mikage","At this rate, I'll have to take you back
with me to Mikage farm.");
SEStop("EV_SE_754",5.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0,300);
NSSClose();
Wait(300,0);
