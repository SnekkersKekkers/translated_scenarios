BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Things seem to be settling down this
year. Maybe because I've continued playing
in the brass band?)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,0,#1,#1,0,2);
VoicePlay("P530D00002_21_000");
MsgDisp("Michiru","Hehe, you look good.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("P530D00002_22_000");
MsgDisp("Hikaru","It's true.
So you don't need Hikaru's and other's
support?");
MsgDisp("主人公","｛みちる＊｝,
｛ひかる＊｝!
Did you come to see the performance?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P530D00002_21_010");
MsgDisp("Michiru","Of course.
Because it's Mari's culmination of her
stage performance.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P530D00002_22_010");
MsgDisp("Hikaru","That's amazing～!
Mari has dedicated herself to music......
So cool▼");
MsgDisp("主人公","Hehe!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
SEPlay("EV_SE_038");
SEWait();
VoicePlay("P530D00002_21_020");
MsgDisp("Michiru","I'm looking forward to it.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P530D00002_22_020");
MsgDisp("Hikaru","Hikaru too!
Goodluck, Mari♪");
MsgDisp("主人公","(Alright.
Let's give it our best performance!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
