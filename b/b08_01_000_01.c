BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B080100001_01_000");
MsgDisp("Kazama","It got late.
Hey, we're here.");
SEPlay("EV_SE_577");
Wait(60,1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B080100001_01_010");
MsgDisp("Kazama","Your phone is ringing.");
MsgDisp("主人公","Yeah, what is it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
Wait(60,0);
