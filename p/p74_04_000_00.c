MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, 
Seems like it was somehow a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0,0,60);
ChMotion(4,1,1);
VoicePlay("P740400000_04_000");
MsgDisp("Nanatsumori","Good work.
It was a good show?");
MsgDisp("主人公","Thank you!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P740400000_04_010");
MsgDisp("Nanatsumori","I also wanted to walk alongside youー.");
MsgDisp("主人公","HEhe!");
MsgDisp("主人公","(Yay, a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
