MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(5,0,0);
BGOpen("ex300",2);
BGMPlay("BGM_XMAS_TRHEE",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Wow, so beautiful......!");
VoicePlay("B360550400_05_000");
MsgDisp("Hiiragi","They really are......");
VoicePlay("B360550400_05_010");
MsgDisp("Hiiragi","......I'm glad I took the plunge.");
MsgDisp("主人公","Huh?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
Wait(20,0);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B360550400_05_020");
MsgDisp("Hiiragi","Yes, I've been thinking about it since
yesterday. Though, I felt bad for
Inori-kun and Mikage-sensei.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("B360550400_05_030");
MsgDisp("Hiiragi","This is my moment.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChEye(5,4);
VoicePlay("B360550400_05_040");
MsgDisp("Hiiragi","So let's enjoy our time together.");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,4);
VoicePlay("B360550400_05_050");
MsgDisp("Hiiragi","Ah, the light show is about to begin.
This way!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","Yeah!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChOpen(5,255,7,0,0,#1,#1,0,0,0,0);
