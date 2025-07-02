MsgType(0);
BGOpen("ex980",0);
ScrFadeIn(0,30);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_01_25");
ScrFadeIn(0);
MsgDispHide();
VoicePlay("T040111000_01_000");
MsgDisp("Kazama","We'll never be apart again. You're mine.");
MsgClose();
ScrFadeOut(0,0,300);
StlClose();
Wait(300,0);
