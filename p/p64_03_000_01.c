ChLayout(1);
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5,1);
ScrFadeIn(0);
VoicePlay("P640300001_03_000");
MsgDisp("Honda","Ahー, amazing.");
MsgDisp("主人公","How was it?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("P640300001_03_010");
MsgDisp("Honda","These are the effects of rare herbs, huh.
My tongue is sizzling.");
MsgDisp("主人公","Eh?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("P640300001_03_020");
MsgDisp("Honda","The bitter and distinctly 
strong taste must mean it's good 
for the body, right...");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P640300001_03_030");
MsgDisp("Honda","Phew... It's alright, 
I'll drink it all!");
MsgDisp("主人公","(Maybe I blended the herbs wrong...
Sorry ｛本多＊＊｝, it was a fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGMStop();
