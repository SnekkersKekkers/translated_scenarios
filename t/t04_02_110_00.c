MsgType(0);
BGOpen("ex980",0);
ScrFadeIn(0,30);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_02_20");
ScrFadeIn(0);
MsgDispHide();
VoicePlay("T040211000_02_000");
MsgDisp("Sassa","The very center of my heart belongs to you.
It's a place no one else can enter—a place that's only yours.");
MsgClose();
ScrFadeOut(0,0,300);
StlClose();
Wait(300,0);
