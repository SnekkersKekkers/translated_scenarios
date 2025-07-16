BGMStop();
BGDateAfterOpen();
ChLayout(2);
ChCheek(1,0);
ChCheek(3,0);
ChCheek(4,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Haa, that was fun!
Thanks for inviting me today.");
VoicePlay("B340B00000_01_000");
MsgDisp("Kazama","Yeah.
When I feel like it, I'll invite you all
again so come join me.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B340B00000_03_000");
MsgDisp("Honda","Yeppers.
Let's all hang out together again!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B340B00000_04_000");
MsgDisp("Nanatsumori","Yeah.
It wasn't bad.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B340B00000_01_010");
MsgDisp("Kazama","That's right.
Then, let's split up for today.
See you.");
MsgClose();
SEPlay("EV_SE_856",0,0.6);
