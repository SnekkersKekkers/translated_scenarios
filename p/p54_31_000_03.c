BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
I didn't practice enough.
I couldn't do it well...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(31,254,2,0,0,#1,#1,0,0);
VoicePlay("P543100003_31_000");
MsgDisp("Goro","That was game over, huh?");
MsgDisp("主人公","Uugh, even though you came all this way...
I'm sorry...");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,3);
VoicePlay("P543100003_31_010");
MsgDisp("Goro","That's right.
After this, you'll have to get a severe
scolding from Himuro-sensei.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Uugh...
I should have practiced more...)");
MsgClose();
ScrFadeOut(0);
