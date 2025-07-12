BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... that was a fail...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("P540300001_03_000");
MsgDisp("Honda","｛主人公｝, good work.");
MsgDisp("主人公","｛本多＊＊｝, I failed.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("P540300001_03_010");
MsgDisp("Honda","Ehh? Is that right?
I thought your arrangement was good.");
MsgDisp("主人公","(Ughh...
I meant to arrange it...
I wish I practiced more...");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
