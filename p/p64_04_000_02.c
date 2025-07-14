MsgClose();
ChLayout(1);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("P640400002_04_000");
MsgDisp("Nanatsumori","The herbs are pretty and the vegetables
are colorful.
This atmosphere is also nice.");
MsgDisp("主人公","The colors of the vegetables are really
pretty, huh?");
ChMotion(4,1,1);
VoicePlay("P640400002_04_010");
MsgDisp("Nanatsumori","Yeah. How do I put it... When they're
fresh, it genuinely looks delicious.");
MsgDisp("主人公","Hehe.
Then, how about this vegetable set?");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P640400002_04_020");
MsgDisp("Nanatsumori","You're a good salesman huh.");
MsgDisp("主人公","(Yay! The shop was a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGMStop();
