BGOpen("sc722",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year the Gardening Club's program is
a cafe. I have to prepare herb tea and
cookies though...)");
MsgClose();
ChOpen(31,254,2,2,2,#1,#1,0,0);
VoicePlay("P633100000_31_000");
MsgDisp("Goro","Hnn～, fragrant...");
MsgDisp("主人公","Ah, Goro-sensei∋");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,1);
VoicePlay("P633100000_31_010");
MsgDisp("Goro","I've decided!
I'll have tea time here.
Is that okay?");
MsgDisp("主人公","Yes!
One customer, this way pleaseー!");
MsgClose();
ScrFadeOut(0);
