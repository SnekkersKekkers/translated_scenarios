MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChOpen(7,255,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B150710000_07_000");
MsgDisp("Mikage","Ahh... I've raised the white flag, but you
show no mercy.");
MsgDisp("主人公","Ah... it was an accident.
I'm sorry.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B150710000_07_010");
MsgDisp("Mikage","Well, it's fine.
I've admitted defeat.
Do as you like.");
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
