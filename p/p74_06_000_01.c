MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("P740600001_06_000");
MsgDisp("Himuro","Good work.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P740600001_06_010");
MsgDisp("Himuro","Well, isn't it fine?
You're not in the modelling club, but the
handicrafts club.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
VoicePlay("P740600001_06_020");
MsgDisp("Himuro","In a way it made me laugh.");
MsgDisp("主人公","Uuugh...");
MsgDisp("主人公","(｛氷室＊＊｝, I guess you're trying to
comfort me, but Haa, a huge fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
