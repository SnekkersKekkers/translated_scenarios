MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChOpen(7,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
VoicePlay("B080700001_07_000");
MsgDisp("Mikage","Yeah.
Sorry, it's gotten dark.");
SEPlay("EV_SE_579");
Wait(60,1);
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,3);
VoicePlay("B080700001_07_010");
MsgDisp("Mikage","...Hm?
It's your phone.");
MsgDisp("主人公","Ah, yes.
Please wait a moment.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
Wait(60,0);
