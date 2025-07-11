BGOpen("sc530",0);
ChLayout(2);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(1,254,0,0,0,-1,-1,0,2,0,30);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,2,0,-1,-1,0,0,0,30);
ScrFadeIn(0);
MsgDisp("主人公","(Ah...
I wonder what everyone is 
gathered here, talking about?)");
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D130B00002_01_000");
MsgDisp("Kazama","Looks like she's brought enough 
for three. Out of those, surely
one of them is a winner.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D130B00002_03_000");
MsgDisp("Honda","Yep yep.
That seems like something she would do! ");
MsgDisp("主人公","Good morning, everyone!
What are you talking about?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEye(4,5);
ChMouth(4,4);
ChMotion(4,5,1);
VoicePlay("D130B00002_04_000");
MsgDisp("Nanatsumori","！");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoiceEVSPlay(1);
VoicePlay("D130B00002_01_010");
MsgDisp("Kazama","｛主人公｝, do you know 
what day it is today?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D130B00002_03_010");
MsgDisp("Honda","Of course you know. Right?
It's a sweet day that
comes once a year!");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("D130B00002_04_010");
MsgDisp("Nanatsumori","...That's an unnatural
way of saying it.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("D130B00002_04_020");
MsgDisp("Nanatsumori","I'm going back to the
classroom now.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
MsgClose();
ChClose(3,0,30);
ChClose(1,0,30);
ChLayout(1);
MsgClose();
ChOpen(3,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(1,254,0,4,3,0,0,0,2,0,30);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D130B00002_03_020");
MsgDisp("Honda","I wonder if Mii-kun will be alright.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoiceEVSPlay(1);
VoicePlay("D130B00002_01_020");
MsgDisp("Kazama","｛主人公｝.
The rest is for you to figure out.
See you then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
ChClose(3,0,30);
ChClose(1,0,30);
MsgDisp("主人公","(Ah... today is Valentine's day, 
so maybe they're worried about that?)");
MsgClose();
ScrFadeOut(0,0);
