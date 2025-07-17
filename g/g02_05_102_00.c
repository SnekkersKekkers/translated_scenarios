MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
VoicePlay("G020510200_05_000");
MsgDisp("Hiiragi","... This place feels really
comfortable.
Makes me want to stay here forever.");
MsgDisp("主人公","Yeah.
But this is the fireflies home, you know?");
ChEye(5,3);
ChMotion(5,4);
VoicePlay("G020510200_05_010");
MsgDisp("Hiiragi","Certainly.
I'm intruding.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("G020510200_05_020");
MsgDisp("Hiiragi","But you know, just feeling comfortable
isn't enough for me.");
ChMotion(5,4);
VoicePlay("G020510200_05_030");
MsgDisp("Hiiragi","I don't like this situation, it's like
soaking in lukewarm water for too long.");
MsgDisp("主人公","｛柊＊＊＊｝...?");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020510200_05_040");
MsgDisp("Hiiragi","Do you understand?
I'm talking about you.");
MsgDisp("主人公","Me?");
VoicePlay("G020510200_05_050");
MsgDisp("Hiiragi","Yes.");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("G020510200_05_060");
MsgDisp("Hiiragi","That's why, although it might make things
a bit uncomfortable, I want to move our
relationship forward.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020510200_05_070");
MsgDisp("Hiiragi","Are you prepared");
MsgDisp("主人公","(Moving our relationship forwards...
what could he mean...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
