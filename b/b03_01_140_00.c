BGOpen("ne200",0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B030114000_01_000");
MsgDisp("Kazama","Alright, how soon does it start?");
MsgDisp("主人公","Let's head in first.");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("ne210",0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ScrFadeIn(0);
ChMotion(1,3);
VoicePlay("B030114000_01_010");
MsgDisp("Kazama","Listen, don't stray far from my side.");
MsgDispSksp(1,0);
ChMotion(1,0);
MsgDisp("主人公","Yeah, let's have fun together.");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
BGOpen("ne220",0);
SEPlay("EV_SE_GAYA_003");
ScrFadeIn(0);
Wait(300,1);
SEStop("EV_SE_GAYA_003",1);
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0,0,0);
