SEPlay("EV_SE_700");
BGOpen("sc815",2);
MsgClose();
ChOpen(21,30,7,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛みちる＊｝∋");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("Q262100000_21_000");
MsgDisp("Michiru","I knew it.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("Q262100000_21_010");
MsgDisp("Michiru","...Hehe.
Would you have preferred someone else?
Sorry it's me?");
MsgDisp("主人公","(So that was ｛みちる＊｝...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
