BGOpen("ho100",2);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,255,0,0,0,#1,#1,0,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("K020300000_03_000");
MsgDisp("Honda","Good evening!");
MsgDisp("主人公","｛本多＊＊｝!?
What are you doing here all of a sudden?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("K020300000_03_010");
MsgDisp("Honda","Today's your birthday, right?
And so-");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
SEPlay("EV_SE_665");
SEWait();
VoicePlay("K020300000_03_020");
MsgDisp("Honda","Here's your present.
Happy birthday!");
MsgDisp("主人公","You remembered?
Thank you!");
ChMotion(3,3);
VoicePlay("K020300000_03_030");
MsgDisp("Honda","You're welcome!
I hope you like it.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("K020300000_03_040");
MsgDisp("Honda","Well then, see you.
Sorry for intruding!!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
MsgClose();
ChClose(3);
Wait(30);
MsgDisp("主人公","(I got a present from ｛本多＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
