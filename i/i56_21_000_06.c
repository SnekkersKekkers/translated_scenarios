BGOpen("ar500",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("I562100006_21_000");
MsgDisp("Michiru","Hey, Mari.
Could you please put these extra straw
rice cakes in the showcase?");
MsgDisp("主人公","Ah, sure.
There- ah∈");
ChEye(21,5);
ChMouth(21,4);
SEPlay("EV_SE_814");
MsgDisp("","(Crash!)");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("I562100006_21_010");
MsgDisp("Michiru","Wait... are you okay?");
MsgDisp("主人公","I'm fine.
But all the warabi mochi fell on the
floor...");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("I562100006_21_020");
MsgDisp("Michiru","Geez.
This is because you tried to do everything
with one hand.");
MsgDisp("主人公","Uh, sorry...");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("I562100006_21_030");
MsgDisp("Michiru","Our products are the lifeblood of the
store. We have to take care of them.
Right?");
MsgDisp("主人公","(Maybe I've been too relaxed...
I have to be more careful.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
