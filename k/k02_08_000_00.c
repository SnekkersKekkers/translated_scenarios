BGOpen("ho100",2);
SEPlay("EV_SE_DOOR_001");
SEWait();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Coming!");
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.5);
MsgClose();
BGMPlay("BGM_C08_DAICHI_A",0.01);
ChOpen(8,255,0,3,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("K020800000_08_000");
MsgDisp("Shirahane","Heheh, evenin'～!");
MsgDisp("主人公","｛大地＊＊｝!?
What is it?");
VoicePlay("K020800000_08_010");
MsgDisp("Shirahane","Today's your birthday, isn't it?
So, I wanted t'give you this.");
SEPlay("EV_SE_665");
SEWait();
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("K020800000_08_020");
MsgDisp("Shirahane","Happy birthday!
Here's a present▼");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,2,1);
ChCheek(8,6);
VoicePlay("K020800000_08_030");
MsgDisp("Shirahane","I thought super hard about you
when I was choosin' this......
I'll be happy if you end up likin' it.");
MsgDisp("主人公","Hehe, thanks!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("K020800000_08_040");
MsgDisp("Shirahane","Yeah.
Well, see ya!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
ChClose(8,0,30);
MsgDisp("主人公","(I got a present from ｛大地＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
