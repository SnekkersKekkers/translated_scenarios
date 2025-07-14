MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",2);
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B080300001_03_000");
MsgDisp("Honda","You don't need to thank me.");
SEPlay("EV_SE_579");
Wait(60,1);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("B080300001_03_010");
MsgDisp("Honda","Oh? Isn't your phone ringing?");
MsgDisp("主人公","Ah, it is.
I wonder who it's from.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
Wait(60,0);
