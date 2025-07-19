BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,2,2,0,#1,10,0);
ScrFadeIn(0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("B150110000_01_000");
MsgDisp("Kazama","Oi.
That's enough already!");
MsgDisp("主人公","Have you had enough already?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChCheek(1,7);
VoicePlay("B150110000_01_010");
MsgDisp("Kazama","...Eh?");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("B150110000_01_020");
MsgDisp("Kazama","Maybe I've gone mad.
I can still feel your hands...");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B150110000_01_030");
MsgDisp("Kazama","What are you going to do about this?
...Geez.");
MsgDisp("主人公","(Is ｛風真＊＊｝ okay, I wonder...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
