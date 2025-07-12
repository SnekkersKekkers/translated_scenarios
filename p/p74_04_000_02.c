MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, 
Seems like it was somewhat of a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0,0,60);
ChMotion(4,1,1);
VoicePlay("P740400002_04_000");
MsgDisp("Nanatsumori","Good work.
You really looked your best.");
MsgDisp("主人公","｛七ツ森＊｝.
Thank you!");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P740400002_04_010");
MsgDisp("Nanatsumori","Haha!
You were cool on stage, 
but now you're charming.");
MsgDisp("主人公","Hehe!");
ChEye(4,1);
ChMouth(4,3);
VoicePlay("P740400002_04_020");
MsgDisp("Nanatsumori","Don't try to tempt me any more.");
MsgDisp("主人公","(Yay, a huge success!
It was worth giving it my best.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
