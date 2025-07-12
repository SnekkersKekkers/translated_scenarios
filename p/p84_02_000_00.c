ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,4,0,0,0,#1,0,0);
VoicePlay("P840200000_02_000");
MsgDisp("Sassa","Phew......");
MsgDisp("主人公","｛颯砂＊＊｝, are you okay?
Sorry I always come to you for help.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P840200000_02_010");
MsgDisp("Sassa","No, it's fine.
You're the one whose good at this stuff.
This body is so pathetic.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P840200000_02_020");
MsgDisp("Sassa","Now I know how hard the student council
works. Thank you for your service.");
MsgDisp("主人公","｛颯砂＊＊｝……");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("P840200000_02_030");
MsgDisp("Sassa","I'm exhausted but I still feel like
wandering around the stalls with you.");
MsgDisp("主人公","Sure!");
MsgDisp("主人公","(Yay! The student council work was a
success! ｛颯砂＊＊｝ praised me!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
