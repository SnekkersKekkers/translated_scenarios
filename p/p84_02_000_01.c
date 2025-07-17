ScrFadeIn(0);
SEPlay("EV_SE_683");
MsgDisp("","(Splat!)");
MsgDisp("主人公","Ahh, I'm so sorry!");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,254,4,0,0,#1,#1,0,0);
VoicePlay("P840200001_02_000");
MsgDisp("Sassa","Are you okay?
Come on, let's clean this up.");
MsgDisp("主人公","Oh.
Right!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgDisp("主人公","｛颯砂＊＊｝, sorry for the
trouble.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,0,0,0,#1,#1,0,0);
VoicePlay("P840200001_02_010");
MsgDisp("Sassa","It's okay.
You shouldn't try to carry it all by
yourself.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P840200001_02_020");
MsgDisp("Sassa","You should have told me from the beginning
so I could help you, okay?");
MsgDisp("主人公","(I made a huge mistake...
I should have just asked him properly
instead of forcing it...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
