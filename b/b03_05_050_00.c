BGOpen("wf500",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030505000_05_000");
MsgDisp("Hiiragi","It's just about time for the show to
start. Watch your step.");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("wf510",0);
BGMPlay("BGM_PLACE_PLANETA_RIUM",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDispSksp(1,0);
ChMouth(5,4);
VoicePlay("B030505000_05_010");
MsgDisp("Hiiragi","Well then, I wonder what kind
of production is awaiting us.
I look forward to it.");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
BGOpen("wf520",0);
ScrFadeIn(0);
Wait(300,1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChOpen(5,255,0,0,0,#1,#1,0,0,0,0);
