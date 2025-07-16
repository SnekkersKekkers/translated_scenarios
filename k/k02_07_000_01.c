ScrFadeIn(0);
BGOpen("ho100",2);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.5);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,255,0,0,0,#1,#1,0,0);
VoicePlay("K020700001_07_000");
MsgDisp("Mikage","It's Mikage Delivery.");
MsgDisp("主人公","Huh!? Mikage Delivery? Um......
｛御影＊＊｝, what is it?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("K020700001_07_010");
MsgDisp("Mikage","It was your birthday, right?
Sorry the delivery was delayed.");
MsgDisp("主人公","You remembered?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("K020700001_07_020");
MsgDisp("Mikage","Ah, even if I look like this, I still know
the birthdays of everyone in class.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("K020700001_07_030");
MsgDisp("Mikage","It's just, the delivery was held up, so
it's a little late.
Happy birthday, here's your gift.");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Thank you very much!
I'm so happy!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,5);
VoicePlay("K020700001_07_040");
MsgDisp("Mikage","Alright, I've confirmed that you received
it with that smile.
See you.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
MsgClose();
ChClose(7);
Wait(30);
MsgDisp("主人公","(I got a present from
｛御影＊＊｝! )");
MsgClose();
ScrFadeOut(0,0);
