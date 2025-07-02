BGOpen("wf200",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Want to walk on the brick road?");
MsgDispSksp(1,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("B030302000_03_000");
MsgDisp("Honda","Yeah, sure thing.
I wonder what color the ocean is today?");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
