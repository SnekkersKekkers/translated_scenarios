MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChOpen(7,253,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B080700003_07_000");
MsgDisp("Mikage","Oh, it's gotten dark.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,3);
VoicePlay("B080700003_07_010");
MsgDisp("Mikage","...Hm? That's——");
Wait(30,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
ChPosition(7,1);
Wait(60,0);
