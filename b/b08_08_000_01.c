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
VoicePlay("B080800001_08_000");
MsgDisp("Shirahane","It's fine.
It's because I wanted to.");
SEPlay("EV_SE_579");
Wait(60,1);
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,2);
VoicePlay("B080800001_08_010");
MsgDisp("Shirahane","Hm?
Isn't that your phone?");
MsgDisp("主人公","Ah, it really is.
Wait a second okay?");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,4);
ChEyeOpenLevel(8,0);
Wait(60,0);
