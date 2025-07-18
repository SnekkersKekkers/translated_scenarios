BGMPlay("BGM_FESTIVAL",0.01);
BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,2,2,0,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, good work...");
ChMouth(5,4);
ChEyeOpenLevel(5,9);
VoiceEVSPlay(5);
VoicePlay("P850500005_05_000");
MsgDisp("Hiiragi","｛主人公｝, are you alright?");
MsgDisp("主人公","I'm very sorry...
I only made mistakes...");
ChMouth(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P850500005_05_010");
MsgDisp("Hiiragi","I'm the one who should be saying that.
Haa...but I feel like I want to do it
over from the start of the preparation
period.");
MsgDisp("主人公","(Uuugh, it was a huge fail.
I should have prepared more carefully.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
