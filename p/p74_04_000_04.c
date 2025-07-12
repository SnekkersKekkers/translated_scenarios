MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yayー!　A huge success∈)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,3,3,#1,#1,0,0,0,60);
VoicePlay("P740400004_04_000");
MsgDisp("Nanatsumori","Welcome back.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
The show went well!");
ChMotion(4,1,1);
VoicePlay("P740400004_04_010");
MsgDisp("Nanatsumori","Yeah.
You put real models to 
shame with that show.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("P740400004_04_020");
MsgDisp("Nanatsumori","Up next... 
is the real thing huh?");
MsgDisp("主人公","Hm?");
ChEye(4,3);
ChMouth(4,3);
VoicePlay("P740400004_04_030");
MsgDisp("Nanatsumori","Hm?
Ahー...I hope you can 
become a good bride?");
MsgDisp("主人公","(Yay, I'm truly glad I devoted myself to
the handicrafts club these last three
years!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
