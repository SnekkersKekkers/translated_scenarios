BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B030101000_01_000");
MsgDisp("Kazama","So where do you want to go?");
MsgDisp("主人公","Umm, let's see...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDispSksp(1,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,3);
VoicePlay("B030101000_01_010");
MsgDisp("Kazama","You got it.
Well, let's go.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
