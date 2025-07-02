BGMStop();
BGDateAfterOpen();
ChLayout(2);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
MsgDisp("主人公","Haa, that was fun!
Thanks for inviting me today.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B340A00001_06_000");
MsgDisp("Himuro","Thank you for your hard work.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B340A00001_01_000");
MsgDisp("Kazama","\"Thank you for your hard work,\" 
are you at work?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,0);
ChEyeOpenLevel(2,0);
VoicePlay("B340A00001_02_000");
MsgDisp("Sassa","Ryota, that's Inori's set phrase
for when he's at the peak
of his happiness.");
ChMouth(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B340A00001_02_010");
MsgDisp("Sassa","Then, I'll see you at school!");
MsgClose();
SEPlay("EV_SE_856",0,0.6);
