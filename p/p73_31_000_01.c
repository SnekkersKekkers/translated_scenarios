BGMStop();
ChLayout(1);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(This is my first time making a dress...
I like it but...))");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,3,0,0,-1,-1,0,0);
VoicePlay("P733100001_31_000");
MsgDisp("Goro","Huhu, it's lovely.");
MsgDisp("主人公","Goro-sensei!
You came to watch∋");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,4);
VoicePlay("P733100001_31_010");
MsgDisp("Goro","Yes.
I love party dresses.");
SEPlay("EV_SE_038");
SEWait();
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,1);
VoicePlay("P733100001_31_020");
MsgDisp("Goro","Hold your head high and look forwards.
With that, have fun!");
MsgDisp("主人公","Yes!");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
