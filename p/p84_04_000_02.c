ScrFadeIn(0);
MsgDisp("主人公","Yes, your flowers.
Is this enough?");
VoicePlay("P840400002_46_000");
MsgDisp("School Girl","Yes!
Thank you very much～!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
VoicePlay("P840400002_04_000");
MsgDisp("Nanatsumori","Ehhh, you're thoroughly prepared.");
MsgDisp("主人公","No.
I had lent them to the drama club, so I
asked them to return them.");
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P840400002_04_010");
MsgDisp("Nanatsumori","I see. This is because it's been carefully
managed. As expected.");
MsgDisp("主人公","Hehe.
Nothing will come of if even if you praise
me you know?");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P840400002_04_020");
MsgDisp("Nanatsumori","No, no.
Let me at least get some tea——");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("P840400002_04_030");
MsgDisp("Nanatsumori","...Is the student council's green tea
okay?");
MsgDisp("主人公","Hehe!
Never mind that, leave it to me.
｛七ツ森＊｝, just sit there, okay?");
ChEye(4,5);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("P840400002_04_040");
MsgDisp("Nanatsumori","Ohh...
Capable girls hit different.");
MsgDisp("主人公","(Hehe!
I want ｛七ツ森＊｝ and everyone to
enjoy the festival to the fullest!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
