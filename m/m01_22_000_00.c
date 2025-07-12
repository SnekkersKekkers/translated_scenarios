SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Nn, who's there?");
SEPlay("EV_SE_DOOR_007");
SEWait();
MsgClose();
BGMPlay("BGM_C22_HIKARU_A",0.01);
ChOpen(22,255,0,0,2,#1,#1,0,0,0,90);
VoicePlay("M012200000_22_000");
MsgDisp("Hikaru","I'm coming iiin......");
MsgDisp("主人公","｛ひかる＊｝！");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,4,1);
VoicePlay("M012200000_22_010");
MsgDisp("Hikaru","So......Are you doing okay?");
MsgDisp("主人公","Mm.
I'm mostly better now.");
ChMotion(22,0,1);
VoicePlay("M012200000_22_020");
MsgDisp("Hikaru","......Really?
You're not just saying that for Hikaru?");
MsgDisp("主人公","Hehe!
I wouldn't lie to you.");
ChEye(22,4);
ChMouth(22,0);
ChMotion(22,2,1);
ChEyeOpenLevel(22,0);
VoicePlay("M012200000_22_030");
MsgDisp("Hikaru","Thank God......");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("M012200000_22_040");
MsgDisp("Hikaru","Without Mari, school's a lonely place.
Like a day without sunshine ......");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,3,1);
VoicePlay("M012200000_22_050");
MsgDisp("Hikaru","Do hurry and get better.
At school, like, I wanna talk and
hang out and stuff.");
MsgDisp("主人公","Yeah. I think next week I'll be able to go
to school, so wait for me.");
ChEye(22,3);
ChMouth(22,0);
ChMotion(22,4,1);
ChEyeOpenLevel(22,0);
VoicePlay("M012200000_22_060");
MsgDisp("Hikaru","......Kay!");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,3,1);
VoicePlay("M012200000_22_070");
MsgDisp("Hikaru","Ah, that's right. I gave a
potpurri made from herbs and flowers to 
your mom. It's good for when you're tired.");
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("M012200000_22_080");
MsgDisp("Hikaru","When you can be awake again,
try keeping it in your room.
I'm sure it'll pep you up!");
MsgDisp("主人公","Thanks, ｛ひかる＊｝.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("M012200000_22_090");
MsgDisp("Hikaru","......Eheh.
Then, I'm about to go, kay?
Mari, take care.");
MsgClose();
SEPlay("EV_SE_690",0.1,0.2);
BGMStop();
ChClose(22);
Wait(50,1);
SEPlay("EV_SE_DOOR_008",0.5);
SEWait();
MsgDisp("主人公","(I made ｛ひかる＊｝ worry......
I better get better fast.)");
