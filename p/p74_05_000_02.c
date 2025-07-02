MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yay, 
seems like it was somewhat of a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,0,4,-1,-1,0,0);
VoicePlay("P740500002_05_000");
MsgDisp("Hiiragi","Thank you for your hard work.");
MsgDisp("主人公","Thank you, ｛柊＊＊＊｝!
It somehow went well!");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("P740500002_05_010");
MsgDisp("Hiiragi","Your efforts from day to day bore fruit.
Congratulations.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("P740500002_05_020");
MsgDisp("Hiiragi","It was just like watching a play.");
MsgDisp("主人公","(To hear ｛柊＊＊＊｝
say something like that...
I'm happy.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
