MsgType(0);
BGOpen("ex980",0);
ScrFadeIn(0,30);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_01_24");
ScrFadeIn(0);
MsgDispHide();
VoicePlay("T040101000_01_000");
MsgDisp("Kazama","Shall we go on honeymoon...like this?");
MsgClose();
ScrFadeOut(0,0,300);
StlClose();
Wait(300,0);
