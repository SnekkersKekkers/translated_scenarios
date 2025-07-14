MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...
even though it was my last stage...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("P740600005_06_000");
MsgDisp("Himuro","Good work.");
MsgDisp("主人公","｛氷室＊＊｝... Thank you.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P740600005_06_010");
MsgDisp("Himuro","...Even if you fell today, isn't it still
a good thing?");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("P740600005_06_020");
MsgDisp("Himuro","If you fell during the real thing, that's
when it would be really be too terrible to
look at.");
MsgDisp("主人公","...Yeah, that's right huh.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("P740600005_06_030");
MsgDisp("Himuro","You did well.
Truly, thank you for your hard work these
last three years.");
MsgDisp("主人公","(｛氷室＊＊｝... I failed in the end, but
these were a good three years, huh?)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
