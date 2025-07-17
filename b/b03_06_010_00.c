BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030601000_06_000");
MsgDisp("Himuro","Where are we going?");
MsgDisp("主人公","Uhm...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDispSksp(1,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B030601000_06_010");
MsgDisp("Himuro","What are you doing?
Let's go.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
