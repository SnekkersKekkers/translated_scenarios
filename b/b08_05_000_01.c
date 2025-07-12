BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChMouth(5,4);
VoicePlay("B080500001_05_000");
MsgDisp("Hiiragi","I should be the one thanking you.
It was an enjoyable walk.");
SEPlay("EV_SE_577");
Wait(60,1);
ChMotion(5,4);
VoicePlay("B080500001_05_010");
MsgDisp("Hiiragi","It's your phone.
Go ahead.");
MsgDisp("主人公","Yeah, sorry.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,2);
Wait(60,0);
