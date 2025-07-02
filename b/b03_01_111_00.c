BGOpen("fp600",0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B030111100_01_000");
MsgDisp("Kazama","You can't go wrong here.");
MsgDisp("主人公","｛風真＊＊｝?");
MsgDispSksp(1,0);
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B030111100_01_010");
MsgDisp("Kazama","There's no time to dawdle around.
Let's go!");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
