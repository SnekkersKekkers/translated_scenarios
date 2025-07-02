BGOpen("ho000",2);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking 
me home today.");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("B080200001_02_000");
MsgDisp("Sassa","No need to thank me.");
SEPlay("EV_SE_579");
Wait(60,1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B080200001_02_010");
MsgDisp("Sassa","Isn't your phone ringing?");
MsgDisp("主人公","Seems like it.
Please wait a second.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,2);
Wait(60,0);
