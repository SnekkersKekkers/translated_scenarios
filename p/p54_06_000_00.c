BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
It seems like my first peformance 
was a huge success!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,254,0,0,4,-1,-1,0,0);
VoicePlay("P540600000_06_000");
MsgDisp("Himuro","Good work.");
MsgDisp("主人公","Ah,｛氷室＊＊｝!
You were listening?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("P540600000_06_010");
MsgDisp("Himuro","I was listening.
You could pass for a pro,
just now.");
MsgDisp("主人公","Is that right?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("P540600000_06_020");
MsgDisp("Himuro","That's how amazing it was.
Nice performance, thanks. ");
MsgDisp("主人公","(Yay!
This is the result of regular practice!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
