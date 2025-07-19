BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Umm...
I'll clean up around here, after that,
I'll serve tea?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
VoicePlay("P830D00000_21_000");
MsgDisp("Michiru","You're working hard, huh?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P830D00000_22_000");
MsgDisp("Hikaru","We came to visit♪");
MsgDisp("主人公","Ah, ｛みちる＊｝, ｛ひかる＊｝.
Welcome!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P830D00000_21_010");
MsgDisp("Michiru","Hehe, good work on the management.");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("P830D00000_22_010");
MsgDisp("Hikaru","Mari, what are you doing?");
MsgDisp("主人公","Various things?
As even odd jobs are important.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P830D00000_22_020");
MsgDisp("Hikaru","I see～...There are people working hard
behind the scenes so that Hikaru and
everyone else can enjoy it, right?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P830D00000_21_020");
MsgDisp("Michiru","Right.
We should be grateful, huh?");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
