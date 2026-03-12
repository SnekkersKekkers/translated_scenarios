BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
MsgDispSksp(1,4);
VoicePlay("B080300000_03_000");
MsgDisp("Honda","Thanks to you too!
It was fun getting to talk at our own
pace!♪ Well, see you later!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgDispSksp(0);
ChClose(3);
MsgDisp("主人公","(｛Honda＊＊｝ walked me home...)");
MsgClose();
ScrFadeOut(0);
