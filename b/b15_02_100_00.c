BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(2,255,0,2,2,#1,#1,10,0);
ScrFadeIn(0);
VoicePlay("B150210000_02_000");
MsgDisp("Sassa","Hey... you're not listening 
to anything I'm saying, 
are you?");
MsgDisp("主人公","Ah... it was an accident.
I'm sorry?");
ChEye(2,2);
ChMouth(2,2);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("B150210000_02_010");
MsgDisp("Sassa","That's enough.
No matter how many times I say it,
you'll just do it again, won't you?
I know that already.");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
