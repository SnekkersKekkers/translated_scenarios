MsgClose();
ChOpen(5,255,0,4,4,0,-1,0,0);
VoicePlay("G020510306_05_000");
MsgDisp("Hiiragi","I wonder why that is? That suddenly, I'm
remembering that cafe in Kamakura.");
MsgDisp("主人公","Kamakura Café? Is that the one at the
ski resort?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("G020510306_05_010");
MsgDisp("Hiiragi","Yes. 
You and I had sweet sake there.
Why am I remembering it now......");
ChEyeOpenLevel(5,0);
VoicePlay("G020510306_05_020");
MsgDisp("Hiiragi","This place is also mysterious.
Maybe there's a water deity here.");
MsgDisp("主人公","It is a spot with mystical energy after
all.");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,3);
ChMouth(5,4);
VoicePlay("G020510306_05_030");
MsgDisp("Hiiragi","Yes, 
and this time too, I'm with a goddess.");
MsgDisp("主人公","Eh?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020510306_05_040");
MsgDisp("Hiiragi","Hehe, though I wonder about having sweet
sake now, considering the season?");
MsgDisp("主人公","(｛柊＊＊＊｝ seems to be having fun.
But a goddess......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
