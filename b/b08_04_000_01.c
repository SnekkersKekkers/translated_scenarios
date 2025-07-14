MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",2);
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B080400001_04_000");
MsgDisp("Nanatsumori","You're welcome.
Make sure you brush your teeth prope——");
SEPlay("EV_SE_579");
Wait(60,1);
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B080400001_04_010");
MsgDisp("Nanatsumori","Hm, huh?
That's not my ringtone...");
MsgDisp("主人公","Ah, it's mine.
Wait a second.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
Wait(60,0);
ChClose(4);
