BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year's program is classical.
I'm getting nervous...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,0,#1,#1,0,2);
VoicePlay("P530D00000_21_000");
MsgDisp("Michiru","Mari.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("P530D00000_22_000");
MsgDisp("Hikaru","Huh?
Are you nervous?");
MsgDisp("主人公","Ah, ｛みちる＊｝, ｛ひかる＊｝.
Yeah...");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P530D00000_22_010");
MsgDisp("Hikaru","Relax, relax!
Don't worry about failure.
Okay?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P530D00000_21_010");
MsgDisp("Michiru","Yes.
Art has to be fun.
Right?");
MsgDisp("主人公","...Yeah!");
SEPlay("EV_SE_038");
SEWait();
VoicePlay("P530D00000_21_020");
MsgDisp("Michiru","Take care.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P530D00000_22_020");
MsgDisp("Hikaru","Goodluck, Mari♪");
MsgDisp("主人公","(Okay, Let's do our best!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
