BGOpen("ho100",2);
ChLayout(1);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming.");
MsgClose();
ChOpen(21,255,0,0,0,#1,#1,0,1);
ChOpen(22,255,0,0,3,#1,#1,0,2);
SEPlay("EV_SE_DOOR_022");
Wait(20,1);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","......Oh?
｛みちる＊｝, ｛ひかる＊｝!
What is it?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("K020D01000_21_000");
MsgDisp("Michiru","Today's Mari's birthday, right?
It's a day we must celebrate.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("K020D01000_22_000");
MsgDisp("Hikaru","Right, right!
It's on New Year's Day, so we'll never
forget. Happy birthday, Mari♪");
MsgDisp("主人公","Thank you!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
SEPlay("EV_SE_665");
SEWait();
VoicePlay("K020D01000_22_010");
MsgDisp("Hikaru","Ehehe▼
Here's the present we chose for you.
Take your time and open it later♪");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("K020D01000_21_010");
MsgDisp("Michiru","Hehe.
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
