EnvAutoSet(1);
MsgDisp("主人公","Ehm...
What's wrong everyone?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("Q240100000_01_000");
MsgDisp("Kazama","Come this way.
You're a sitting duck where you are.");
MsgDisp("主人公","Sitting duck?");
SEPlay("EV_SE_054",0,0.7);
ScrQuake(1);
MsgDisp("主人公","Kya!");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
VoicePlay("Q240100000_01_010");
MsgDisp("Kazama","It's the tradition of the school trip.
I'll protect you!");
MsgDisp("主人公","(Tradition...
Did the guys teach ｛風真＊＊｝ something
weird?)");
EnvStop(1);
EnvAutoSet(0);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
