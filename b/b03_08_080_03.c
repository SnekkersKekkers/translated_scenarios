BGOpen("fp000",0);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B030808003_08_000");
MsgDisp("Shirahane","It's real great here.
Like an oasis in the city.");
MsgDisp("主人公","Yeah, you're right.");
MsgDispSksp(1,0);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,2,1);
ChCheek(8,5);
VoicePlay("B030808003_08_010");
MsgDisp("Shirahane","Well then, we can spend a relaxin' day
together.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
