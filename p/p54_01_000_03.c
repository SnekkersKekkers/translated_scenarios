BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
Maybe I didn't practice enough...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(1,254,0,4,2,#1,#1,0,0);
VoicePlay("P540100003_01_000");
MsgDisp("Kazama","It's not a problem of nerves or anything,
is it?");
MsgDisp("主人公","Ah, ｛風真＊＊｝...
Y-Yeah.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P540100003_01_010");
MsgDisp("Kazama","Well, it looks like you're reflecting.
Then after that, go talk to everyone.");
MsgDisp("主人公","Yes, I've inconvenienced everyone, haven't
I....");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P540100003_01_020");
MsgDisp("Kazama","Next time you meet them, smile as you
usually do.");
ChClose(1);
MsgDisp("主人公","(Uugh...
I should have worked harder practicing...)");
MsgClose();
ScrFadeOut(0,0);
