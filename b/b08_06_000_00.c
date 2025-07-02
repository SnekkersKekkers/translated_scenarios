BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(6,253,0,0,0,-1,-1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking home.");
MsgDispSksp(1,4);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B080600000_06_000");
MsgDisp("Himuro","Yeah.
Then, see you.");
MsgDispSksp(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
MsgDisp("主人公","(｛氷室＊＊｝ walked me home.)");
MsgClose();
ScrFadeOut(0,0);
