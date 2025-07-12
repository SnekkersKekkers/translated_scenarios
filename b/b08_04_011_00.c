MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,1,1,2,#1,#1,0,2);
VoicePlay("B080401100_04_000");
MsgDisp("Nanatsumori","Ahー...
So that's it, huh.");
SEPlay("EV_SE_529");
SEWait();
MsgDisp("主人公","｛七ツ森＊｝∋");
ChEye(4,1);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B080401100_04_010");
MsgDisp("Nanatsumori","I'm intruding.
There's no need to worry.
See you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
Wait(60,0);
