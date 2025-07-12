BGOpen("tr100",0);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3,1);
ChLayout(1);
ScrFadeIn(0);
MsgDispSksp(1,0);
VoicePlay("B030220000_02_000");
MsgDisp("Sassa","The slopes are in perfect condition
with this kind of weather.
Let's hurry and go!");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(2,0,0);
ChOpen(2,32,0,0,0,#1,#1,0,0,0,0);
