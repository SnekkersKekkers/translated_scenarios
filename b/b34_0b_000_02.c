BGMStop();
BGDateAfterOpen();
ChLayout(2);
ChCheek(1,0);
ChCheek(3,0);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Haa, that was fun!
Thanks for inviting me today.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B340B00002_04_000");
MsgDisp("Nanatsumori","Yeah.
It's nice to have something like
this once in a while.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B340B00002_01_000");
MsgDisp("Kazama","Right.");
ChEyeOpenLevel(1,#1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B340B00002_03_000");
MsgDisp("Honda","It must be because it's us four.
That it was so fun.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B340B00002_04_010");
MsgDisp("Nanatsumori","Maybe.
I'll try planning the next one.
Then, that's it for today.");
MsgClose();
SEPlay("EV_SE_856",0,0.6);
