BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(Well, it's time to head home.)");
MsgDisp("主人公","(......Huh?
｛風真＊＊｝ is over there, huh.
Let's have a chat then head home.)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,2,#1,#1,0,0);
ScrFadeIn(0);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100500_01_000");
MsgDisp("Kazama","Speaking of, 
What will you do with the wedding dresses
from the cultural festival?");
MsgDisp("主人公","It'll be on display on the mannequin 
in the clubroom for a while.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100500_01_010");
MsgDisp("Kazama","And then after that?");
MsgDisp("主人公","Nothing in particular.
Some of my seniors took them home, 
......or recycled them.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,2);
VoicePlay("G110100500_01_020");
MsgDisp("Kazama","Recycled them∋");
MsgDisp("主人公","Yeah. It can also be used as a reference
for the junior members.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100500_01_030");
MsgDisp("Kazama","As for yours, you should take it home.");
MsgDisp("主人公","Eh......Y-Yeah.
I'll look after it until I graduate, 
until then, I'll think about it.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100500_01_040");
MsgDisp("Kazama","After you graduate, why not have my
grandpa take care of it at his shop until
the real thing?");
MsgDisp("主人公","Ehh∋ The real thing, you mean my actual
wedding?");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100500_01_050");
MsgDisp("Kazama","Ah, yeah, that's right.
Is there a problem?");
MsgDisp("主人公","(｛風真＊＊｝...... I feel like you're
saying something really huge......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
