EnvAutoSet(1);
MsgDisp("主人公","Eh?
What are you all doing?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("Q240500000_05_000");
MsgDisp("Hiiragi","
We are doing the\"Pillow Fight\".
So it really does take place.");
MsgDisp("主人公","Eh?");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
Wait(20,1);
VoicePlay("Q240500000_05_010");
MsgDisp("Hiiragi","I heard it's a classic by school trips.
It's my first time.");
ChMotion(5,0);
VoicePlay("Q240500000_05_020");
MsgDisp("Hiiragi","Look, here it comes!");
SEPlay("EV_SE_054",0,0.7);
ScrQuake(1);
MsgDisp("主人公","Wa!");
ChEye(5,0);
ChMouth(5,3);
ChMotion(5,4);
VoicePlay("Q240500000_05_030");
MsgDisp("Hiiragi","How dare you......
I declare a fight for the honor!");
MsgDisp("主人公","
(Is ｛柊＊＊＊｝  acting like in a 
historical drama......?
Alright, me too!)");
EnvStop(1);
EnvAutoSet(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
