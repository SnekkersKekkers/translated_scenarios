BGMStop();
BGOpen("ho000",2);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChEye(5,3);
ChMouth(5,3);
VoicePlay("K020501100_05_000");
MsgDisp("Hiiragi","We cannot let it end here.
...Happy birthday.");
MsgDisp("主人公","You remembered.
｛柊＊＊＊｝, thank you!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("K020501100_05_010");
MsgDisp("Hiiragi","I would never forget your special day.");
MsgDisp("主人公","Hehe, thank you.");
SEPlay("EV_SE_665");
SEWait();
ChEye(5,0);
ChMotion(5,0);
VoicePlay("K020501100_05_020");
MsgDisp("Hiiragi","I'm not sure if this suits your tastes,
but please accept this.");
MsgDisp("主人公","Oh...?
A present?");
ChEye(5,2);
VoicePlay("K020501100_05_030");
MsgDisp("Hiiragi","It's quite embarrassing.
I'm quite used to receiving gifts, but the
reverse is quite difficult.");
MsgDisp("主人公","Hehe, it's something that you chose for
me, ｛柊＊＊＊｝.");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("K020501100_05_040");
MsgDisp("Hiiragi","...If it's to your liking, then that's how
it is.
However, if not...");
MsgDisp("主人公","I'd be happy with anything you got me!");
ChEye(5,3);
ChMotion(5,3);
VoicePlay("K020501100_05_050");
MsgDisp("Hiiragi","Yes, please don't set your expectations
too high when you open it.
Well then, good night.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(5);
MsgDisp("主人公","(Hehe, today was a wonderful birthday...)");
MsgClose();
ScrFadeOut(0,0);
