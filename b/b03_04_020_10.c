BGOpen("wf200",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
MsgDisp("主人公","Want to walk on the brick road?");
ChMotion(4,0);
ChEyeOpenLevel(4,-1);
VoicePlay("B030402000_04_000");
MsgDispSksp(1,0);
MsgDisp("Nanatsumori","A stroll.
Taking a stroll, huh...");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
