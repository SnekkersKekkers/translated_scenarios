SEPlay("EV_SE_668");
SEWait();
ChEye(7,1);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("K010700103_07_000");
MsgDisp("Mikage","Hm, this seems interesting.
How do you use it?");
MsgDisp("主人公","Um, use it...?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("K010700103_07_010");
MsgDisp("Mikage","Do you not use this? Well, it's fine.
After all, it's something you gave me.
I'll use it carefully.");
MsgDisp("主人公","(Maybe I should've chosen something
else...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
