BGOpen("ne200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,2);
ChMotion(5,2);
VoicePlay("B030514000_05_000");
MsgDisp("Hiiragi","It's good that the audience and performers
are so close to each other. Is there
really sound coming from those speakers?");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("ne210",0);
ChEye(5,2);
ChMouth(5,2);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("B030514000_05_010");
MsgDisp("Hiiragi","I don't know the first thing about the
etiquette here.
What is the correct way to spend my
time......");
MsgDispSksp(1,0);
MsgDisp("主人公","Ah, it's starting!");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
BGOpen("ne220",0);
SEPlay("EV_SE_GAYA_003");
ScrFadeIn(0);
Wait(300,1);
SEStop("EV_SE_GAYA_003",1);
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChOpen(5,255,0,0,0,#1,#1,0,0,0,0);
