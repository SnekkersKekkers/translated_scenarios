BGOpen("ne200",0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B030414000_04_000");
MsgDisp("Nanatsumori","Hey.
Go ahead and walk in front of me.");
MsgDisp("主人公","Huh?");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
Wait(40,0);
SEWait();
BGOpen("ne210",0);
ScrFadeIn(0);
VoicePlay("B030414000_04_010");
MsgDisp("Nanatsumori","It's narrow and dark in here.
You could get hurt in all kinds of ways.
OK?");
MsgDispSksp(1,0);
MsgDisp("主人公","Oh, OK.
Thank you, ｛七ツ森＊｝.");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGOpen("ne220",0);
SEPlay("EV_SE_GAYA_003");
ScrFadeIn(0);
Wait(300,1);
SEStop("EV_SE_GAYA_003",1);
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0,0,0);
