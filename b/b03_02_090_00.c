BGOpen("fp300",0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030209000_02_000");
MsgDisp("Sassa","Going on a date at the botanical garden...");
MsgDisp("主人公","What's wrong?");
MsgDispSksp(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("B030209000_02_010");
MsgDisp("Sassa","It kinda has an old person vibe, y'know?
I mean, it's fine though.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
