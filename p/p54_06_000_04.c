BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I was able to give my best performance in
three years.
I'm glad...!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(6);
VoicePlay("P540600004_06_000");
MsgDisp("Himuro","｛主人公｝, good work.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("P540600004_06_010");
MsgDisp("Himuro","That was amazing...
Like to the point words won't come out.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("P540600004_06_020");
MsgDisp("Himuro","There were also people who were so moved
they cried.
Reiichi san was also proud.");
MsgDisp("主人公","I'm glad...");
ChEye(6,0);
ChMouth(6,5);
ChMotion(6,5);
VoicePlay("P540600004_06_030");
MsgDisp("Himuro","Wait, please don't cry too.");
MsgDisp("主人公","Sorry, I'm just so filled with emotion...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P540600004_06_040");
MsgDisp("Himuro","...Then, come here.");
MsgClose();
ChClose(6,0,30);
SEPlay("EV_SE_FOOT_039");
ChLayout(0);
MsgClose();
ChOpen(6,254,0,0,0,#1,#1,10,0);
SEWait();
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,0);
VoicePlay("P540600004_06_050");
MsgDisp("Himuro","Even if you're crying tears of joy, I
don't want anyone to see that face.");
MsgDisp("主人公","｛氷室＊＊｝...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P540600004_06_060");
MsgDisp("Himuro","...Truly, thank you for your hard work
these last three years.");
MsgDisp("主人公","Yeah, thank you.");
MsgDisp("主人公","(I'm truly glad I gave it my best these
last three years....)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
ChLayout(1);
