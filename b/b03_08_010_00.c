BGOpen("wf100",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,2);
VoicePlay("B030801000_08_000");
MsgDisp("Shirahane","Alrighty then, where to?");
MsgDisp("主人公","Let's see...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDispSksp(1,0);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B030801000_08_010");
MsgDisp("Shirahane","Sounds good.
Then let's get goin'.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
