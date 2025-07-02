BGOpen("sc721",0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("P140300001_03_000");
MsgDisp("Honda","Huh......");
MsgDisp("主人公","Ah,｛本多＊＊｝, welcome back.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("P140300001_03_010");
MsgDisp("Honda","That's weird.
The maze is taking a while to start......");
MsgDisp("主人公","Eh? this is the finish line?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,5,1);
VoicePlay("P140300001_03_020");
MsgDisp("Honda","Ehh∋ I was just walking normally? Then,
did I pass by the trick you came up with?");
MsgDisp("主人公","I-I see......");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("P140300001_03_030");
MsgDisp("Honda","Ahー, sorry!
I'll do it again, 
next time, I'll get lost properly.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
MsgDisp("主人公","(()Ugh......\"get lost properly\"......
I made ｛本多＊＊｝ uncomfortable......
What a huge failure......)");
MsgClose();
ScrFadeOut(0,0);
