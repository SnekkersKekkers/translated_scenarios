BGOpen("wf200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Do you want to walk together along the
brick road?");
MsgDispSksp(1,0);
ChEye(5,0);
ChMouth(5,3);
VoicePlay("B030502000_05_000");
MsgDisp("Hiiragi","I like walking.
Let's go.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
