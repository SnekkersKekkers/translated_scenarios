BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(6,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("B080600001_06_000");
MsgDisp("Himuro","It's nothing.
I can't make you walk home
alone at this time.");
SEPlay("EV_SE_579");
Wait(60,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("B080600001_06_010");
MsgDisp("Himuro","Your phone is ringing.");
MsgDisp("主人公","Ah, it's mine huh.
What is it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
Wait(60,0);
