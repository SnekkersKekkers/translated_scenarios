SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","Welcome!");
MsgDisp("主人公","...Alright, coming right up.
Okay, come this way to your seat.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C04_NANA_A");
ChLayout(1);
ChNanaType(1);
ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
VoicePlay("G110400700_04_000");
MsgDisp("Nanatsumori","Hey.");
MsgDisp("主人公","Welcome!");
VoicePlay("G110400700_04_010");
MsgDisp("Nanatsumori","Can I take any empty table in the back?");
MsgDisp("主人公","Yeah!
This way, please.");
MsgClose();
ScrFadeOut(0);
ChClose(4);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110400700_04_020");
MsgDisp("Nanatsumori","Two pancakes and a cup of joe, please.");
MsgDisp("主人公","Coming right up.");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChMotion(4,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for waiting, here's two pancakes
and your hot coffee.");
SEPlay("EV_SE_001",0,0.5);
SEWait();
SEPlay("EV_SE_827",0,0.6);
SEWait();
ChMouth(4,2);
VoicePlay("G110400700_04_030");
MsgDisp("Nanatsumori","...PEW!");
ChMotion(4,1);
MsgDisp("主人公","Huh, was something wrong with it?");
ChEye(4,2);
VoicePlay("G110400700_04_040");
MsgDisp("Nanatsumori","No...
The hot coffee just burned my tongue.");
MsgDisp("主人公","Oh, really?
Hehe!");
ChMotion(4,2);
VoicePlay("G110400700_04_050");
MsgDisp("Nanatsumori","Haha!
Really?
You think I'm funny?");
MsgDisp("主人公","(｛七ツ森＊｝ makes me laugh more here than
when we're at school, huh?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
