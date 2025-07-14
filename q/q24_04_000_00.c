EnvAutoSet(1);
MsgDisp("主人公","Hey, what are you all doing?");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0);
VoicePlay("Q240400000_04_000");
MsgDisp("Nanatsumori","
Don't you feel the fighting spirit∋");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,5,1);
VoicePlay("Q240400000_04_010");
MsgDisp("Nanatsumori","Oh no!
Watch out∈");
SEPlay("EV_SE_054",0,0.8);
ScrQuake(2);
MsgDisp("主人公","Kya!");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("Q240400000_04_020");
MsgDisp("Nanatsumori","Come on......
Get behind me.");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("Q240400000_04_030");
MsgDisp("Nanatsumori","The pillow fight......
is starting!");
EnvStop(1);
EnvAutoSet(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
