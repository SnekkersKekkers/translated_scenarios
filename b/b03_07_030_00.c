BGOpen("wf300",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ChLayout(1);
SEPlay("EV_SE_566",0.3);
ScrFadeIn(0);
MsgDispSksp(1,0);
VoicePlay("B030703000_07_000");
MsgDisp("Mikage","Alright, today's extracurricular activity is 
at the aquarium.
Don't get too wild, you guys.");
VoicePlay("B030703000_42_000");
MsgDisp("Male Student","Okaay.");
VoicePlay("B030703000_44_000");
MsgDisp("School Girl","Let's go, let's go!");
SEStop("EV_SE_566",1);
MsgDispSksp(0);
