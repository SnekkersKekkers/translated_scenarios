BGOpen("fp500",0);
MsgDispSksp(1,0);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B030311000_03_000");
MsgDisp("Honda","I think it's amazing to be able to
completely control your body underwater.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgClose();
ChOpen(3,31,0,0,0,#1,#1,0,0,0,0);
