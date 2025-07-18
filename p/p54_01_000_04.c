BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I was able to give my best performance of
three years.
I'm glad...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(1,254,0,0,3,#1,#1,0,0);
VoiceEVSPlay(1);
VoicePlay("P540100004_01_000");
MsgDisp("Kazama","｛主人公｝.");
MsgDisp("主人公","Ah, ｛風真＊＊｝...");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P540100004_01_010");
MsgDisp("Kazama","That was a good performance.
The world's best.");
MsgDisp("主人公","That...you're exaggerating.
But, thank you.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P540100004_01_020");
MsgDisp("Kazama","Well, that's based off my criteria.
Is there a problem?");
MsgDisp("主人公","Hehe, no there isn't.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P540100004_01_030");
MsgDisp("Kazama","Although that was a good performance, when
I think about how you gave it your all
these last three years, I could somewhat
cry.");
MsgDisp("主人公","Hey...
Aren't you talking like a parent?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P540100004_01_040");
MsgDisp("Kazama","Yes, that's exactly it.
You really gave it your best.");
MsgDisp("主人公","｛風真＊＊｝...");
MsgDisp("主人公","(Seems like he was super satisfied!
I'm truly happy I gave my best at the wind
music club for these last three years.");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
