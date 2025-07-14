ChPosition(5,0);
Wait(60,0);
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("B080500002_05_010");
MsgDisp("Hiiragi","Did you agree to 
something?");
MsgDisp("主人公","N-No.");
ChEye(5,4);
ChMouth(5,0);
VoicePlay("B080500002_05_020");
MsgDisp("Hiiragi","I see... Well, that's it for me.
Goodnight.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
