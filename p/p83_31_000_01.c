BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Phew...Being in charge
of the supplies is kind of hard...)");
VoicePlay("P833100001_31_000");
MsgDisp("Goro?","Ah, you're here, you're here.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,0,0,0,-1,-1,0,0);
MsgDisp("主人公","Ah, ＧＯＲＯ-sensei!
Umm, the people in charge of 
showing around the guests are——");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,3);
VoicePlay("P833100001_31_010");
MsgDisp("Goro","I want you to show me around.
Is that no good?");
MsgDisp("主人公","Ah...yes!
If you're fine with me, 
then absolutely!");
MsgClose();
ScrFadeOut(0);
