BGMPlay("BGM_FESTIVAL",0.01);
BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,2,2,0,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, thank you for your
hard work...");
ChMouth(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("P850500001_05_000");
MsgDisp("Hiiragi","Thank you for your hard work.");
VoicePlay("P850500001_05_010");
MsgDisp("Hiiragi","Please don't droop your shoulders like
that.");
MsgDisp("主人公","But...
I failed...");
ChMouth(5,0);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P850500001_05_020");
MsgDisp("Hiiragi","It wasn't just you, it was me too. If only
we were more cautious in preparation...
It's frustrating.");
MsgDisp("主人公","(Uugh, a huge failure.
I should have prepared more carefully.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
