BGOpen("wf500",0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,#1);
VoicePlay("B030405000_04_000");
MsgDisp("Nanatsumori","Alright, here's the ticket.
Our seat number is—");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
Wait(40,0);
BGOpen("wf510",0);
BGMPlay("BGM_PLACE_PLANETA_RIUM",0.01);
ScrFadeIn(0);
MsgDispSksp(1,0);
VoicePlay("B030405000_04_010");
MsgDisp("Nanatsumori","Right here.
We won't know if it's a good spot until
it's started, huh.");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGOpen("wf520",0);
ScrFadeIn(0);
Wait(300,1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0,0,0);
