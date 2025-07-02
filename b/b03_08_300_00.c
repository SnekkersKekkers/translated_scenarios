BGOpen("bh800",0);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,3,1);
VoicePlay("B030830000_08_000");
MsgDisp("Shirahane","Welcome, 'n come on in!");
ChMotion(8,0,1);
VoicePlay("B030830000_08_010");
MsgDisp("Shirahane","Well, actually it's my older sis's place,
but we're visitin' my room.");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,2,1);
VoicePlay("B030830000_08_020");
MsgDisp("Shirahane","... Oh.
Well, mine AND my brother's room...
If that's alright?");
MsgDispSksp(1,0);
MsgDisp("主人公","Hehe!");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
