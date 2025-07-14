ChLayout(1);
BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(2,253,4,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝, Thank you for walking me
home.");
MsgDispSksp(1,4);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B080200000_02_000");
MsgDisp("Sassa","No problem.
See ya.");
MsgDispSksp(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(2);
MsgDisp("主人公","(｛颯砂＊＊｝ walked me home.)");
MsgClose();
ScrFadeOut(0,0);
