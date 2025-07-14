BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yes, That was a good performance from
everyone!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P540700002_07_000");
MsgDisp("Mikage","Oh, that's a nice expression.
Congratulations.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P540700002_07_010");
MsgDisp("Mikage","Game music was enjoyable.
It also relieved my tension.");
MsgDisp("主人公","Thank you very much!
｛御影＊＊｝ is pleased, so I'm happy.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P540700002_07_020");
MsgDisp("Mikage","It's not just me.
Isn't it nice to play something that makes
everyone smile?");
MsgDisp("主人公","｛御影＊＊｝...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P540700002_07_030");
MsgDisp("Mikage","Alright, rather than talking to me, Go see
your friends instead.
Everyone is probably lonely without you.");
MsgDisp("主人公","Yes!");
MsgDisp("主人公","(Thanks to ｛御影＊＊｝, I was able to
perform well.
I', glad I gave it my all!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
