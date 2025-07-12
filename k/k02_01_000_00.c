BGOpen("ho100",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A");
ChOpen(1,255,0,0,3,#1,#1,0,0);
VoiceEVSPlay(1);
VoicePlay("K020100000_01_000");
MsgDisp("Kazama","｛主人公｝.
Sorry for the short notice.");
MsgDisp("主人公","Ah, ｛風真＊＊｝!
What's up?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020100000_01_010");
MsgDisp("Kazama","Why are you surprised?
What's today?");
MsgDisp("主人公","......Ah, my birthday?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020100000_01_020");
MsgDisp("Kazama","Geez, it's hard to tell
if you're just joking with me
or being serious.");
SEPlay("EV_SE_665");
SEWait();
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("K020100000_01_030");
MsgDisp("Kazama","Happy birthday.
Here's your present.");
MsgDisp("主人公","Wah, thank you
｛風真＊＊｝!");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020100000_01_040");
MsgDisp("Kazama","You pass.");
MsgDisp("主人公","Pass?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020100000_01_050");
MsgDisp("Kazama","That's right.
Your expression is enough thanks for me.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("K020100000_01_060");
MsgDisp("Kazama","Later, look at what's inside slowly.");
ChMotion(1,0);
MsgDisp("主人公","Hehe, okay.
I'm really looking forward to it!");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("K020100000_01_070");
MsgDisp("Kazama","See you.
Next time we meet, I'm expecting
a good reaction.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
ChClose(1);
MsgDisp("主人公","(I got a present from ｛風真＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
