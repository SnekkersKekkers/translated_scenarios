MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex300",2);
BGMPlay("BGM_XMAS_TRHEE",0.01);
ChLayout(1);
ChClose(3,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Wow...it's beautiful!");
VoicePlay("B360350400_03_000");
MsgDisp("Honda?","You look just as beautiful!");
MsgDisp("主人公","...Huh?
｛本多＊＊｝, what's going on?");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,255,4,4,4,#1,#1,0,0);
VoicePlay("B360350400_03_010");
MsgDisp("Honda","Hm?
Did it sound odd?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("B360350400_03_020");
MsgDisp("Honda","Ah, I prepared in advance...
I wanted to say something cool while
looking at the illuminations.");
MsgDisp("主人公","Um...
I think I prefer the usual ｛本多＊＊｝.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B360350400_03_030");
MsgDisp("Honda","...I see.
Okay, let me try again.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(3);
MsgDisp("主人公","Huh!");
VoicePlay("B360350400_03_040");
MsgDisp("Honda","You might be even more beautiful!");
SEPlay("EV_SE_544",0,0.6);
MsgClose();
ChOpen(3,255,4,0,0,#1,#1,0,0);
VoicePlay("B360350400_03_050");
MsgDisp("Honda","...I thought about it, and it didn't turn
out that different from the cool line, did
it?");
MsgDisp("主人公","(It's sweet, but also a bit
embarrassing...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChCheek(3,0);
