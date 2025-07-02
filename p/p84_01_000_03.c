MsgClose();
ChClose(1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Good, so...waa∋");
SEPlay("EV_SE_683");
MsgDisp("","(*SPLAT*)");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChOpen(1,254,3,3,2,-1,-1,0,0,0,30);
ChMouth(1,1);
VoicePlay("P840100003_01_000");
MsgDisp("Kazama","Oi, are you alright?");
MsgDisp("主人公","Y-yeah.
But, the bed is flooded...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P840100003_01_010");
MsgDisp("Kazama","Hey, your shoes got wet.
Come here.");
MsgDisp("主人公","Y-yeah...");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P840100003_01_020");
MsgDisp("Kazama","You're shaking aren't you?
You're pushing yourself too hard.
Think ofyour own stamina,
and move accordingly.");
MsgDisp("主人公","That's right huh...");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P840100003_01_030");
MsgDisp("Kazama","It's good that you give it your all, 
But don't worry me so much.");
MsgDisp("主人公","Yeah. Got it.");
MsgDisp("主人公","(Uuugh...
I worried ｛風真＊＊｝ even at the end...
A huge failure...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
