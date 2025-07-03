BGMStop();
ChLayout(1);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(THis year's program is classical.
I'm a little nervous.
Can I really do it properly...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,2,0,0,-1,-1,0,0);
VoicePlay("P533100000_31_000");
MsgDisp("Goro","Non, non.
Yes, please give me a smile.");
MsgDisp("主人公","Ah, Goro-sensei!");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,3);
VoicePlay("P533100000_31_010");
MsgDisp("Goro","It's wonderful isn't it, classical.
I look forwards to it.");
SEPlay("EV_SE_038");
SEWait();
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("P533100000_31_020");
MsgDisp("Goro","Well, the curtain is rising～
Have a nice time!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Ah...after talking toGoro-sensei, 
my nerves have somewhow gone away.
Alright, let's do our best!)");
MsgClose();
ScrFadeOut(0);
BGOpen("sc725",0);
ScrFadeIn(0);
