ChEyeOpenLevel(6,#1);
ChCheek(6,0);
ChEye(6,3);
ChMouth(6,1);
ChMotion(6,5);
ChCheek(6,10);
VoicePlay("T020601000_06_250");
MsgDisp("Himuro","Ha∋
Wait...!");
MsgDisp("主人公","Do you get it now?
I also like ｛氷室＊＊｝!");
VoicePlay("T020601000_06_260");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
MsgDisp("Himuro","...!");
VoicePlay("T020601000_06_270");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","You really are an unreadable person...");
VoicePlay("T020601000_06_280");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
MsgDisp("Himuro","You know...
I told you, I've always liked you.");
MsgDisp("主人公","Y-Yes.");
VoicePlay("T020601000_06_290");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
MsgDisp("Himuro","That's because I've been putting up with
things like this for a long time.");
MsgDisp("主人公","...Eh!");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(6,0,0);
Wait(120,0);
StlOpen("ev_06_16");
ScrFadeIn(0);
VoicePlay("T020601000_06_300");
MsgDisp("Himuro","I won't let you go again.
And you too...don't let me go.");
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
