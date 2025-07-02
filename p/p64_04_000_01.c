MsgClose();
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("P640400001_04_000");
MsgDisp("Nanatsumori","Uugh...");
MsgDisp("主人公","Eh, how is it?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("P640400001_04_010");
MsgDisp("Nanatsumori","No...
I'm just a bit surprised.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P640400001_04_020");
MsgDisp("Nanatsumori","Hey.
What's this deeply astringent herb?");
MsgDisp("主人公","(Darn it!
Seems like I failed mixing the herbs...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGMStop();
