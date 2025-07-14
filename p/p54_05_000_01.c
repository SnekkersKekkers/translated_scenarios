BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... what a huge fail...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(5,254,0,0,4,#1,#1,0,0);
VoicePlay("P540500001_05_000");
MsgDisp("Hiiragi","Good work.");
MsgDisp("主人公","｛柊＊＊＊｝... I only made mistakes...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P540500001_05_010");
MsgDisp("Hiiragi","That might be the case.
But you carried it out properly until the
end.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P540500001_05_020");
MsgDisp("Hiiragi","If you don't carefully give yourself an
evaluation, it would be a shame.");
MsgDisp("主人公","Ugh...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P540500001_05_030");
MsgDisp("Hiiragi","Come on, look ahead.");
MsgDisp("主人公","(Ugh... I should have practiced more
during the preparation period...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
