BGMStop();
BGDateAfterOpen();
ChLayout(2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ScrFadeIn(0);
MsgDisp("主人公","Haa, that was fun!
Thanks for inviting me today.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B340A00002_06_000");
MsgDisp("Himuro","I'm glad.
You don't seem to be lying.");
ChMouth(1,2);
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,5);
VoicePlay("B340A00002_02_000");
MsgDisp("Sassa","What's up with that!
Inori, you're really funny.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B340A00002_01_000");
MsgDisp("Kazama","I see.
That's Inori's schtick huh, being the cute
one.");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,4);
ChCheek(6,10);
VoicePlay("B340A00002_06_010");
MsgDisp("Himuro","Huh?
... Alright, I'll see you guys later!");
MsgClose();
SEPlay("EV_SE_856",0,0.6);
