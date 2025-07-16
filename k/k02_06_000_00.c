BGOpen("ho100",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.5);
MsgClose();
BGMPlay("BGM_C06_INORI_A");
ChOpen(6,255,0,0,0,#1,#1,0,0);
VoicePlay("K020600000_06_000");
MsgDisp("Himuro","Good day.");
MsgDisp("主人公","Oh, ｛氷室＊＊｝!
What is it?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("K020600000_06_010");
MsgDisp("Himuro","It's your birthday today, isn't it?
So here, take this.");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Oh, is this a present?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("K020600000_06_020");
MsgDisp("Himuro","What else could it be?");
MsgDisp("主人公","Thanks.
I'm so happy!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("K020600000_06_030");
MsgDisp("Himuro","You're welcome.
I'm glad you're happy.
...... Happy birthday.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("K020600000_06_040");
MsgDisp("Himuro","See you.
This was all I needed.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
MsgClose();
ChClose(6);
Wait(30);
MsgDisp("主人公","(I got a present from ｛氷室＊＊｝!
)");
MsgClose();
ScrFadeOut(0,0);
