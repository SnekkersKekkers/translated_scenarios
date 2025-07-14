BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yes, I think I was able to perform better
than last year...!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(31,254,4,0,0,#1,#1,0,0);
VoicePlay("P543100002_31_000");
MsgDisp("Goro","It's nice isn't it, game music?
I like it～♪");
MsgDisp("主人公","Hehe, 
thank you very much.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,3);
VoicePlay("P543100002_31_010");
MsgDisp("Goro","Yes, yes, I feel like I got a high score.
I enjoyed myself▼");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Yay!
Goro-sensei praised me.)");
MsgClose();
ScrFadeOut(0);
