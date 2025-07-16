BGOpen("ho000",2);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(1,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
MsgDispSksp(1,4);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B080100000_01_000");
MsgDisp("Kazama","Don't worry about it now.
See you later.
Goodnight.");
MsgDispSksp(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(｛風真＊＊｝ walked me home.)");
MsgClose();
ScrFadeOut(0,0);
