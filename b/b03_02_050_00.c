BGOpen("wf500",0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030205000_02_000");
MsgDisp("Sassa","Umm...
Is here alright?");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChEye(2,0);
ChMouth(2,0);
ChEyeOpenLevel(2,6);
BGOpen("wf510",0);
ChLayout(1);
Wait(40);
BGMPlay("BGM_PLACE_PLANETA_RIUM",0.01);
ScrFadeIn(0);
MsgDispSksp(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,6);
VoicePlay("B030205000_02_010");
MsgDisp("Sassa","Dimly lit space and reclining seats.
Relaxing background music...
This could be bad.");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
BGOpen("wf520",0);
ScrFadeIn(0);
Wait(300,1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChOpen(2,255,0,0,0,#1,#1,0,0,0,0);
