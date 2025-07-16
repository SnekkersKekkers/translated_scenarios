BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
This might've been worse than last
year...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("P540600003_06_000");
MsgDisp("Himuro","Good work.");
MsgDisp("主人公","｛氷室＊＊｝...");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("P540600003_06_010");
MsgDisp("Himuro","Shouldn't you apologize?");
MsgDisp("主人公","Eh.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P540600003_06_020");
MsgDisp("Himuro","He had a terrifying face, Reiichi-san,
that is.");
MsgDisp("主人公","Ugh...
I'm sorry.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("P540600003_06_030");
MsgDisp("Himuro","There's no point in apologizing to me.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("P540600003_06_040");
MsgDisp("Himuro","Well, on the point that I had my
expectations betrayed, I want an apology.");
MsgDisp("主人公","(I should have given it my all on a
regular basis...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
