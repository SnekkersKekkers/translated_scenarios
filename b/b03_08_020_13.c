BGOpen("wf200",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
MsgDisp("主人公","Hey, want to go on the tour boat?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B030802013_08_000");
MsgDisp("Shirahane","Sounds nice.
We can relax together on the boat today.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(8,0,0);
BGOpen("wf220",0);
MsgClose();
ChOpen(8,255,0,3,3,-1,-1,0,0);
ScrFadeIn(0);
MsgDispSksp(1,0);
ChMotion(8,1,1);
VoicePlay("B030802013_08_010");
MsgDisp("Shirahane","What a huge ship!
It's like goin' on a big voyage!
I'm real excited!");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
