BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
Seems like my first performance was a
success!)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,254,3,0,3,#1,#1,0,0);
VoicePlay("P540200000_02_000");
MsgDisp("Sassa","Yay!
The audience even stood up.");
MsgDisp("主人公","Thank you, ｛颯砂＊＊｝!");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("P540200000_02_010");
MsgDisp("Sassa","Classical is nice, huh.
Maybe I quite like it.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P540200000_02_020");
MsgDisp("Sassa","Thanks to you, maybe my interest in music
has increased?");
MsgDisp("主人公","(Seems like ｛颯砂＊＊｝ enjoyed
it.
Yay!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
