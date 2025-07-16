BGOpen("sc210",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,254,0,2,5,#1,#1,0,0);
VoicePlay("F100420001_04_000");
MsgDisp("Nanatsumori","Woah......");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
You look a bit tired.");
ChEye(4,4);
ChMouth(4,2);
VoicePlay("F100420001_04_010");
MsgDisp("Nanatsumori","I'm just a bit sleep deprived.");
MsgDisp("主人公","I feel like it's always like that.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("F100420001_04_020");
MsgDisp("Nanatsumori","Himuro-kun is amazing.");
MsgDisp("主人公","｛氷室＊＊｝?");
ChPosition(4,1);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(6,254,0,0,0,#1,#1,0,2,0,60);
SEWait();
VoicePlay("F100420001_06_000");
MsgDisp("Himuro","Minoru-senpai, thanks for yesterday... no,
thanks for this morning.");
MsgDisp("主人公","Ah...
｛氷室＊＊｝ also seems sleepy huh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F100420001_06_010");
MsgDisp("Himuro","A little.
It was hard to know when to stop, so I
ended up not sleeping at all.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("F100420001_04_030");
MsgDisp("Nanatsumori","No, I'm sorry.
It's because I took on a big quest.
All my comrades are sleep-deprived...");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("F100420001_06_020");
MsgDisp("Himuro","Right.
The sky got bright.");
MsgDisp("主人公","Eh?
Wait a second.
What were you doing until dawn?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("F100420001_06_030");
MsgDisp("Himuro","Guri guri.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F100420001_04_040");
MsgDisp("Nanatsumori","Right.
DO you want to try it too?
Guri guri that is.");
MsgDisp("主人公","(Guriguri...
I'll look it up next time.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
