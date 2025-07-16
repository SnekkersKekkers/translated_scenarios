MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",2);
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("B080300002_03_000")MsgDisp("Honda","Hm?
There's someone in front of your house.");
Wait(30,0);
ChPosition(3,1);
Wait(60,0);
