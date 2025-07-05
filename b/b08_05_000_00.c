BGOpen("ho000",2);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(5,253,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
MsgDispSksp(1,4);
ChMouth(5,4);
VoicePlay("B080500000_05_000");
MsgDisp("Hiiragi","Don't mention it.
Good night.");
MsgDispSksp(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝ walked me home.)");
MsgClose();
ScrFadeOut(0,0);
