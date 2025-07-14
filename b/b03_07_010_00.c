BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030701000_07_000");
MsgDisp("Mikage","There's a lot of different shops here.
Want to take a look around?");
MsgDisp("主人公","Sure.");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDispSksp(1,0);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("B030701000_07_010");
MsgDisp("Mikage","Ooh, look, that store has a reward
program.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
