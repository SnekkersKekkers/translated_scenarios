BGOpen("wf500",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
ScrFadeIn(0);
VoicePlay("B030305000_03_000");
MsgDisp("Honda","I just can't resist the draw of the stars.
Let's go already!");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgDispSksp(1,0);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
ChCheek(3,3);
Wait(40);
BGOpen("wf510",0);
BGMPlay("BGM_PLACE_PLANETA_RIUM",0.01);
ScrFadeIn(0);
VoicePlay("B030305000_03_010");
MsgDisp("Honda","Right now, at this very moment, there are
countless starts being born and dying
out... Oh, it's starting!");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGOpen("wf520",0);
ScrFadeIn(0);
Wait(300,1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0,0,0);
