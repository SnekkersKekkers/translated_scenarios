MsgDisp("主人公","What sort of TV shows do you normally
watch?");
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("B070500000_05_010");
MsgDisp("Hiiragi","I didn't watch much television as a kid.");
MsgDisp("主人公","Ah, so that's how it is.");
ChMouth(5,0);
ChMotion(5,0);
VoicePlay("B070500000_05_020");
MsgDisp("Hiiragi","I suppose that sort of thing is normally
discussed at school, but I wasn't at
school very often.");
MsgDisp("主人公","...I see.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("B070500000_05_030");
MsgDisp("Hiiragi","I'm sorry.
It wasn't my intention to put such a sad
look on your face.");
MsgDisp("主人公","That must've been tough...");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("B070500000_05_040");
MsgDisp("Hiiragi","...Then, maybe you tell me your TV show
recommendations next time?");
VoicePlay("B070500000_05_050");
MsgDisp("Hiiragi","That one will become my favorite show.");
MsgDisp("主人公","(That's a lot of pressure!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
