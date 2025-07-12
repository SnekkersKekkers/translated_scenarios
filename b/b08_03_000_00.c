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
MsgDisp("Honda","I should be the one thanking you! I
enjoyed talking with you and had a great
time! ♪ Well, see you later!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgDispSksp(0);
ChClose(3);
MsgDisp("主人公","(｛本多＊＊｝ walked me home...)");
MsgClose();
ScrFadeOut(0);
