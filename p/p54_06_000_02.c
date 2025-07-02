BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yeah, maybe I was able to 
perform better than last year!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,254,0,0,0,-1,-1,0,0);
VoicePlay("P540600002_06_000");
MsgDisp("Himuro","Good work.");
MsgDisp("主人公","Ah,｛氷室＊＊｝!
How was it?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("P540600002_06_010");
MsgDisp("Himuro","Even if I don't give my opinion,
you know it right?");
MsgDisp("主人公","That's certainly feedback, though...");
ChEye(6,3);
ChMouth(6,3);
ChMotion(6,3);
ChEyeOpenLevel(6,0);
VoicePlay("P540600002_06_020");
MsgDisp("Himuro","Yeah, it was amazing.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("P540600002_06_030");
MsgDisp("Himuro","The performance was good, 
but the arrangement was 
also super exciting.");
MsgDisp("主人公","I'm glad!
Thank you!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("P540600002_06_040");
MsgDisp("Himuro","I should be saying thanks, 
thank you.
For a good time.");
MsgDisp("主人公","(Yay!
I was praised by ｛氷室＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
