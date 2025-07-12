BGOpen("sc310",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("D100700000_07_000");
MsgDisp("Mikage","Oh.
You're awake?");
MsgDisp("主人公","Eh, ｛御影＊＊｝?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D100700000_07_010");
MsgDisp("Mikage","You looked kind of sleepy in
class.");
MsgDisp("主人公","Did I really......?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("D100700000_07_020");
MsgDisp("Mikage","Well, that sincerity and
absentmindedness is part of your charm,
huh?");
MsgDisp("主人公","Eh, that......");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
ChEyeOpenLevel(7,8);
VoicePlay("D100700000_07_030");
MsgDisp("Mikage","I know you pretty well, don't I?");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
