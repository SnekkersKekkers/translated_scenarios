BGOpen("ho100",2);
ChLayout(1);
SEPlay("EV_SE_DOOR_001");
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","Coming.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,255,0,0,0,#1,#1,0,1);
ChOpen(22,255,0,0,3,#1,#1,0,2);
MsgDisp("主人公","Oh, ｛みちる＊｝, ｛ひかる＊｝!
What's up?");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("K020D00001_21_000");
MsgDisp("Michiru","Sorry for the short notice.
It's a little late,
but we wanted to celebrate your birthday.");
VoicePlay("K020D00001_22_010");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
MsgDisp("Hikaru","Happy birthday, Mari♪
I chose a present with my sister.
Here you go▼");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Wah...... Thank you!");
VoicePlay("K020D00001_21_020");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,3);
MsgDisp("Michiru","We hope you like it.
Well, see you at school.");
MsgClose();
SEPlay("EV_SE_DOOR_022",0,0.5);
SEWait();
SEPlay("EV_SE_856",0,0.4);
ChClose(21,0,30);
ChClose(22,0,30);
Wait(10,1);
SEStop("EV_SE_856",0.5);
BGMStop();
MsgClose();
SEPlay("EV_SE_DOOR_023",0,0.3);
ScrFadeOut(0,0);
