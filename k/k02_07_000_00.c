BGOpen("ho100",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Who could it be?
Coming!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.5);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,255,0,0,0,-1,-1,0,0);
VoicePlay("K020700000_07_000");
MsgDisp("Mikage","Good evening, this is Mikage Delivery.
I have a package for you.");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Huh!?　Mikage Delivery?
Um...... ｛御影＊＊｝,
what is it?");
ChEye(7,1);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("K020700000_07_010");
MsgDisp("Mikage","What else but your birthday?");
MsgDisp("主人公","Ah......
It is, you remembered?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("K020700000_07_020");
MsgDisp("Mikage","Even if I look like this, I still
know the birthdays of everyone in class.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("K020700000_07_030");
MsgDisp("Mikage","But what's inside is my own taste.");
MsgDisp("主人公","Hehe, thank you very much!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,5);
VoicePlay("K020700000_07_040");
MsgDisp("Mikage","Alright,
I've confirmed that you received it with
that smile. See you.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
MsgClose();
ChClose(7);
Wait(30);
MsgDisp("主人公","(I got a present from ｛御影＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
