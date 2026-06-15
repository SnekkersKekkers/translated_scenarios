BGOpen("wf700",2);
ChLayout(1);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2,1);
ScrFadeIn(0);
VoicePlay("B040306401_03_000");
MsgDisp("Honda","Hmm...that target just now, if you hit it at
that angle, there's no way it won't fall.");
MsgDisp("主人公","Maybe it was stuck to the board?");
ChEye(3,5);
ChMouth(3,3);
ChMotion(3,5);
VoicePlay("B040306401_03_010");
MsgDisp("Honda","Eh? Oh, so that's it—.
Well, figuring that out is part of the
game too—.");
ChEye(3,3);
ChEyeOpenLevel(3,0);
MsgDisp("主人公","(Hehe, ｛Honda＊＊｝ seems to be having fun!)");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
