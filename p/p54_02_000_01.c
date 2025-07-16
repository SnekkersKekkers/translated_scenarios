BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... a huge fail...)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,254,4,0,4,#1,#1,0,0);
VoicePlay("P540200001_02_000");
MsgDisp("Sassa","Hmm, that was unfortunate.");
MsgDisp("主人公","Uugh, maybe I didn't practice enough.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P540200001_02_010");
MsgDisp("Sassa","I see, it's good if you think that.
It means you still have room to grow.");
MsgDisp("主人公","(Haa...
If only I practiced more properly....)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
