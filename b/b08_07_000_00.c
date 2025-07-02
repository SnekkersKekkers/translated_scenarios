BGOpen("ho000",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(7,253,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
MsgDispSksp(1,4);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
VoicePlay("B080700000_07_000");
MsgDisp("Mikage","Oh, it's gotten dark.
Well then, goodnight.");
MsgClose();
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(｛御影＊＊｝ walked me home.)");
MsgClose();
ScrFadeOut(0,0);
