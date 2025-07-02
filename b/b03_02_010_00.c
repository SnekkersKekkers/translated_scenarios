BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030201000_02_000");
MsgDisp("Sassa","Where do you wanna look around at?");
MsgDisp("主人公","Hmm...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDispSksp(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B030201000_02_010");
MsgDisp("Sassa","Alright, let's go.
Leave carrying the goods to me.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
