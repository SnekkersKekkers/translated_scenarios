BGOpen("ho000",2);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(8,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
MsgDispSksp(1,4);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B080800000_08_000");
MsgDisp("Shirahane","Yeah.
Rest well today.
Well then... goodnight.");
MsgClose();
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(8);
MsgDisp("主人公","(｛大地＊＊｝ walked me home.)");
MsgClose();
ScrFadeOut(0,0);
