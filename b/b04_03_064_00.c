BGOpen("wf700",2);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
ScrFadeIn(0);
VoicePlay("B040306400_03_000");
MsgDisp("Honda","The lights, sounds and smells of 
the food stalls are great, huh! 
Let's go!");
ChSet(3,3);
VoicePlay("B040306400_03_010");
MsgDisp("Honda","Hey, come here.
It's a battle to see them all before
the fireworks start!");
MsgDisp("主人公","(Eh, all of them?)");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
