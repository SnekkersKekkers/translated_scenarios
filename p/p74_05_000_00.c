MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, 
seems like it was somewhat of a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,4,4,-1,-1,0,0);
VoicePlay("P740500000_05_000");
MsgDisp("Hiiragi","Thank you for your hard work.
You were so dignified and wonderful.");
MsgDisp("主人公","Thank you.
It's thanks to ｛柊＊＊＊｝ cheering me on!");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("P740500000_05_010");
MsgDisp("Hiiragi","No, it was your own strength.
You understood your own charm.");
MsgDisp("主人公","(Hehe, I'm happy.
The show was a huge success!))");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
