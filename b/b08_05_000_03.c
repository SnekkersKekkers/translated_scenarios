BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChMotion(5,2);
VoicePlay("B080500002_05_000");
MsgDisp("Hiiragi","No, then... huh?");
Wait(30,0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,4);
ChPosition(5,1);
Wait(60,0);
