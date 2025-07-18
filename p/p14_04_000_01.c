BGOpen("sc721",0);
MsgClose();
ChLayout(1);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,0);
ScrFadeIn(0);
ChMouthOpenLevel(4,0);
VoicePlay("P140400001_04_000");
MsgDisp("Nanatsumori","......");
MsgDisp("主人公","Ah, ｛七ツ森＊｝, welcome
back!
How was it?");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("P140400001_04_010");
MsgDisp("Nanatsumori","Is it a maze or a cardboard walk?");
MsgDisp("主人公","Eh?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("P140400001_04_020");
MsgDisp("Nanatsumori","Even though it's a maze, there's no way to
get lost. You should be moderate with the
user-friendly design.");
MsgDisp("主人公","(Ugh...I should have been more diligent to
make it more enjoyable...What a massive
failure...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
