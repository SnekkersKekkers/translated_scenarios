EnvAutoSet(1);
MsgDisp("主人公","Ehm......
What's wrong everyone?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("Q240300000_03_000");
MsgDisp("Honda","Quick, come over here, it's dangerous,
kay?");
MsgDisp("主人公","Dangerous?");
SEPlay("EV_SE_054",0,0.7);
ScrQuake(0);
MsgDisp("主人公","Kya!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("Q240300000_03_010");
MsgDisp("Honda","Aah, you did it huh!
I'm never forgiving it, here, you fight
back with me!");
MsgDisp("主人公","(Seems that ｛本多＊＊｝ quite
likes these kinda stuff......
Okay, me too!)");
EnvStop(1);
EnvAutoSet(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
