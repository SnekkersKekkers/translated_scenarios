BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I failed...
Even though it was the last cultural 
festival of my student life...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,254,0,4,0,-1,-1,0,0);
VoiceEVSPlay(3);
VoicePlay("P540300005_03_000");
MsgDisp("Honda","｛主人公｝.
Good work.");
MsgDisp("主人公","Ah,｛本多＊＊｝.
Even though it was my last,
I still failed...");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("P540300005_03_010");
MsgDisp("Honda","I didn't think it was a failure at all.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("P540300005_03_020");
MsgDisp("Honda","You were able to make a recovery, 
just as I'd expect.");
MsgDisp("主人公","｛本多＊＊｝...");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("P540300005_03_030");
MsgDisp("Honda","Thank you for your hard work
these last three years.");
MsgDisp("主人公","(Even if it was a fail in the end, 
I'm glad I continued with 
the wind instrument club.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
