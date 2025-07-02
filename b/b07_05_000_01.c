MsgDisp("主人公","What sort of TV shows
do you normally watch?");
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("B070500000_05_010");
MsgDisp("Hiiragi","Since I was a child,
I haven't watched much television.");
MsgDisp("主人公","A-ah, 
so that's how it is.");
ChMouth(5,0);
ChMotion(5,0);
VoicePlay("B070500000_05_020");
MsgDisp("Hiiragi","I suppose that sort of thing is
normally discussed at school, 
but I wasn't at school very much.");
MsgDisp("主人公","...I see.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("B070500000_05_030");
MsgDisp("Hiiragi","I'm sorry.
I didn't mean to make
you look like that.");
MsgDisp("主人公","That must've 
been tough, huh...");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("B070500000_05_040");
MsgDisp("Hiiragi","...Then, won't you tell me your TV
show recommendations next time?");
VoicePlay("B070500000_05_050");
MsgDisp("Hiiragi","I'll make make that my liked show.");
MsgDisp("主人公","(This is a huge responsibility!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
