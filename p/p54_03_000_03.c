BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
Maybe I didn't practice enough...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,254,0,5,4,#1,#1,0,0);
VoicePlay("P540300003_03_000");
MsgDisp("Honda","That was an amazing sound coming
out of your instrument.");
MsgDisp("主人公","Uuughh..");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("P540300003_03_010");
MsgDisp("Honda","It was an interesting sound.
Maybe it would have been better 
if you had controlled the volume more?");
MsgDisp("主人公","(An amazing sound huh...
I should have practiced more.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
