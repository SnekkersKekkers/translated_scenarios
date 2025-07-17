MsgDisp("主人公","......");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B070500001_05_610");
MsgDisp("Hiiragi","Is something the matter?");
MsgDisp("主人公","I wanted to take a proper look at
｛柊＊＊＊｝'s face.'");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B070500001_05_620");
MsgDisp("Hiiragi","By all means, it's no problem.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("B070500001_05_630");
MsgDisp("Hiiragi","Does the 'you' reflected in my eyes look
like she's enjoying herself?");
MsgDisp("主人公","Eh?");
ChEye(5,4);
VoicePlay("B070500001_05_640");
MsgDisp("Hiiragi","The you I see is always having fun and is
so lovely. And that's why I wanted to show
it to you too.");
ChEye(5,3);
VoicePlay("B070500001_05_650");
MsgDisp("Hiiragi","Come on, take a closer look.");
MsgDisp("主人公","Ummm...
I'm starting to feel somewhat embarrassed.");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
VoicePlay("B070500001_05_660");
MsgDisp("Hiiragi","Alright, it's my victory.");
MsgDisp("主人公","(I.. lost...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
