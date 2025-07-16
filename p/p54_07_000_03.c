BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
I didn't practice enough.
I wasn't able to perform well...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P540700003_07_000");
MsgDisp("Mikage","Good work.");
MsgDisp("主人公","｛御影＊＊｝...
I failed...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P540700003_07_010");
MsgDisp("Mikage","I see.
It seems you weren't satisfied with your
performance.");
MsgDisp("主人公","I didn't practice enough.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P540700003_07_020");
MsgDisp("Mikage","I don't know anything about wind
instruments, but you can't practice alone
you know?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P540700003_07_030");
MsgDisp("Mikage","To properly understand the cause, you need
to try talking to everyone.");
MsgDisp("主人公","... Yes.
That's right, huh!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("P540700003_07_040");
MsgDisp("Mikage","That's a nice expression.
You should quickly show everyone that
expression.");
MsgDisp("主人公","(｛御影＊＊｝,you're kind huh...
But I should have practiced more with
everyone.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
