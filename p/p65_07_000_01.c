MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P650700001_07_000");
MsgDisp("Mikage","This time was dissapointing?
Bitter medicine tastes bad, 
so the customers won't be happy.
You learned a good lesson, right?");
MsgDisp("主人公","Yes...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P650700001_07_010");
MsgDisp("Mikage","You still have a fair amount you 
need to study about herb tea blends.");
MsgDisp("主人公","(Uuugh, a huge fail.
I should have tried harder...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
