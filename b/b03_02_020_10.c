BGOpen("wf200",0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Want to walk the brick road?");
MsgDispSksp(1,0);
VoicePlay("B030202000_02_000");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
MsgDisp("Sassa","Sounds good.
Alright, let's go.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
