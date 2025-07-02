BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030501000_05_000");
MsgDisp("Hiiragi","Where to?");
MsgDisp("主人公","Uhm......");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDispSksp(1,0);
ChMouth(5,4);
VoicePlay("B030501000_05_010");
MsgDisp("Hiiragi","That's good.
Let's get going, then.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
