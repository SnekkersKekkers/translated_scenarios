ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ScrFadeIn(0);
ChMotion(1,2);
VoicePlay("P040100001_01_000");
MsgDisp("Kazama","Hm?");
MsgDisp("主人公","Y, yes.
How is it?");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P040100001_01_010");
MsgDisp("Kazama","......Have you tried it?");
MsgDisp("主人公","Huh?　No.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P040100001_01_020");
MsgDisp("Kazama","There's a bit of powder left inside......");
MsgDisp("主人公","S, sorry......");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("P040100001_01_030");
MsgDisp("Kazama","You might have to change what your
signboard says.");
MsgDisp("主人公","(Haa......
I should've prepared a little more......)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
