BGOpen("ne200",0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B030314000_03_000");
MsgDisp("Honda","From here on, you'll hear loud sounds in
an enclosed space.");
MsgClose();
ScrFadeOut(0);
ChMotion(3,0);
Wait(40);
BGOpen("ne210",0);
MsgDispSksp(1,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,2,1);
ScrFadeIn(0);
VoicePlay("B030314000_03_010");
MsgDisp("Honda","The ticket price includes drinks?
That's an intriguing system.");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGOpen("ne220",0);
SEPlay("EV_SE_GAYA_003");
ScrFadeIn(0);
Wait(300,1);
SEStop("EV_SE_GAYA_003",1);
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0,0,0);
