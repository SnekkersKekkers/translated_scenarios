BGOpen("ho000",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_039");
SEWait();
ChOpen(2,255,3,0,3,-1,-1,0,0);
VoiceEVSPlay(2);
VoicePlay("H8G0200000_02_000");
MsgDisp("Sassa","｛主人公｝,
I heard you got an award from the
student council.");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Yes, that's right.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("H8G0200000_02_010");
MsgDisp("Sassa","Congrats!
Somehow, I'm happy too.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("H8G0200000_02_020");
MsgDisp("Sassa","I'm happy that people like you, always
working behind the scenes, can get
recognized like this, too.");
MsgDisp("主人公","｛颯砂＊＊｝......
Thank you.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("H8G0200000_02_030");
MsgDisp("Sassa","I should thank you too, for everything.");
MsgDisp("主人公","(I did it!
I'm glad I worked so hard
in the student council!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
