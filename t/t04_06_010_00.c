MsgType(0);
BGOpen("ex980",0);
ScrFadeIn(0,30);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_06_18");
ScrFadeIn(0);
MsgDispHide();
VoicePlay("T040601000_06_000");
MsgDisp("Himuro","I'm such a simple person...
I can't even wait for tomorrow.
... And it's completely thanks to you.");
MsgClose();
ScrFadeOut(0,0,300);
StlClose();
Wait(300,0);
