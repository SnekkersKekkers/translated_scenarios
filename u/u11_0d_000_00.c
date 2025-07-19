MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc501",1);
MsgClose();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ScrFadeIn(0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("U110D00000_22_000");
MsgDisp("Hikaru","She's here!");
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝.
Thanks for waiting.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("U110D00000_21_000");
MsgDisp("Michiru","No problem.
Well then, to the Hanatsubaki Estate we
go.");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeOut(0,0);
