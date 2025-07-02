BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B030301000_03_000");
MsgDisp("Honda","Is there a shop you're interested in?");
MsgDisp("主人公","Let's see...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDispSksp(1,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B030301000_03_010");
MsgDisp("Honda","Alright, let's go!");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
