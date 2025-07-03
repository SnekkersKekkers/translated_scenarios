BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Another hard day of work.)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(8,254,0,0,3,-1,-1,0,0);
VoiceEVSPlay(8);
VoicePlay("D010800300_08_000");
MsgDisp("Shirahane","｛主人公｝, I've been waiting for ya!");
MsgDisp("主人公","Ah, ｛大地＊＊｝!");
ChEye(8,3);
ChMouth(8,3);
ChEyeOpenLevel(8,0);
VoicePlay("D010800300_08_010");
MsgDisp("Shirahane","Hehe......");
MsgDisp("主人公","You look like you're in a good mood.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,2,1);
VoicePlay("D010800300_08_020");
MsgDisp("Shirahane","I wanna show ya something.");
MsgClose();
ScrFadeOut(0);
ChClose(8);
StlOpen("ev_08_07");
StlEye(8,0);
StlMouth(8,0);
SEPlay("EV_SE_635",0,0.8);
Wait(30,0);
BGMPlay("BGM_C08_DAICHI_I",0.01);
ScrFadeIn(0);
SEWait();
VoicePlay("D010800300_08_030");
MsgDisp("Shirahane","Surprise∈
All correct answers.");
MsgDisp("主人公","Is this your test?");
StlEye(8,1);
VoicePlay("D010800300_08_040");
MsgDisp("Shirahane","Ya.
It's been a while since I got a perfect
score!");
MsgDisp("主人公","Amazing!");
StlEye(8,0);
VoicePlay("D010800300_08_050");
MsgDisp("Shirahane","The Quiz King's Perfect Score Anpan!");
MsgDisp("主人公","Eh?");
StlEyeOpenLevel(8,5);
VoicePlay("D010800300_08_060");
MsgDisp("Shirahane","Ikkun, I mean Iku Honda-kun always gets
this Perfect Score Anpan. The effect is
actually amazing......");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
BGOpen("sc130",1);
MsgClose();
ChOpen(8,254,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛大地＊＊｝ and ｛本多＊＊｝ know each
other?");
ChEye(8,0);
ChMouth(8,0);
VoicePlay("D010800300_08_070");
MsgDisp("Shirahane","Not really. I saw him somewhere the
other day and recognized him, so I
spoke to him for the first time.");
MsgDisp("主人公","I see.");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,2,1);
VoicePlay("D010800300_08_080");
MsgDisp("Shirahane","Like Ikkun says, the sugar content
in the bread probably helps.");
MsgDisp("主人公","Hehe!");
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("D010800300_08_090");
MsgDisp("Shirahane","Well, this is the last time I'll rely
on its special powers. I have to get
a perfect score on my own.");
MsgDisp("主人公","Right?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("D010800300_08_100");
MsgDisp("Shirahane","Hehe!
Since we're already here, wanna go
home together?");
MsgDisp("主人公","Sure!");
MsgDisp("主人公","(......Come to think of it, where did
｛本多＊＊｝ get the Perfect Score Anpan
from anyway?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(8,0,0);
ChPrmTblAdd(8,0);
