BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(8,253,7,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
VoicePlay("B080800003_08_000");
MsgDisp("Shirahane","Hehe, you're welcome.
... Hm?");
Wait(30,0);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,4);
ChPosition(8,1);
Wait(60,0);
