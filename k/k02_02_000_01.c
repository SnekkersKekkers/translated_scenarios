BGOpen("ho100",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.5);
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,255,0,0,4,#1,#1,0,0);
VoicePlay("K020200001_02_000");
MsgDisp("Sassa","Good evening.");
MsgDisp("主人公","Good evening.
What's up?");
SEPlay("EV_SE_665");
SEWait();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("K020200001_02_010");
MsgDisp("Sassa","It's a little late,
but here's your birthday present.");
MsgDisp("主人公","Oh.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("K020200001_02_020");
MsgDisp("Sassa","I didn't have the time to hand it over.
Again, happy birthday.");
MsgDisp("主人公","Thank you, ｛颯砂＊＊｝!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("K020200001_02_030");
MsgDisp("Sassa","Yeah, I'm happy I gave it to you.
Well, see you.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
MsgClose();
ChClose(2);
Wait(30);
MsgDisp("主人公","(I got a present from ｛颯砂＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
