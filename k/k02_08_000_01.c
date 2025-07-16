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
ChOpen(8,255,0,4,0,#1,#1,5,0);
ScrFadeIn(0);
MsgDisp("主人公","Oh, ｛大地＊＊｝!?");
ChMotion(8,2,1);
VoicePlay("K020800001_08_000");
MsgDisp("Shirahane","Sorry for suddenly comin' over.");
MsgDisp("主人公","Not at all.
What is it?");
SEPlay("EV_SE_665");
SEWait();
ChMotion(8,0,1);
VoicePlay("K020800001_08_010");
MsgDisp("Shirahane","Could ya take this?
S'a little late though.");
MsgDisp("主人公","This is......");
VoicePlay("K020800001_08_020");
MsgDisp("Shirahane","The other day was your birthday, right?
I wanted t'give this to you then, but I
couldn't find the time......");
MsgDisp("主人公","I'm so happy...... thank you!");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("K020800001_08_030");
MsgDisp("Shirahane","Yeah.
Again, happy birthday▼");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,4,1);
ChEyeOpenLevel(8,0);
ChCheek(8,8);
VoicePlay("K020800001_08_040");
MsgDisp("Shirahane","Well, I'm goin' home.
Good night.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
ChClose(8,0,30);
MsgDisp("主人公","(I got a present from
｛大地＊＊｝! )");
MsgClose();
ScrFadeOut(0,0);
