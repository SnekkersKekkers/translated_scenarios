BGOpen("ho000",2);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
MsgDispSksp(1,4);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B080400000_04_000");
MsgDisp("Nanatsumori","No problem.
Goodnight.");
MsgClose();
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
MsgDisp("主人公","(｛七ツ森＊｝ walked me home.)");
MsgClose();
ScrFadeOut(0,0);
