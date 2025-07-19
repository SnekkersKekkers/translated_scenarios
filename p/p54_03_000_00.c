BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
Seems like my last performance went well!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,254,1,0,3,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("P540300000_03_000");
MsgDisp("Honda","｛主人公｝.
You did it huh, it was a great success.");
MsgDisp("主人公","Thank you!
I was relieved to be able to play
properly.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("P540300000_03_010");
MsgDisp("Honda","Yep, yep.
You look good just now!");
MsgDisp("主人公","(Yay!
I'm happy that ｛本多＊＊｝ is pleased!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
