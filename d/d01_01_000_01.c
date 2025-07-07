BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm a second year student starting
today. I wonder what this year will
be like? 
Hehe, I'm looking forward to it!)");
VoicePlay("D010100001_01_000");
MsgDisp("Kazama?","Don't just stand here and smile all
by yourself.
......Geez, what a crazy person.");
MsgClose();
ScrFadeOut(0,0);
BGMPlay("BGM_C01_RYOUTA_I",0.01);
StlOpen("ev_01_07");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
MsgDisp("主人公","Eh......｛風真＊＊｝∋");
StlEye(1,1);
StlMouth(1,1);
VoicePlay("D010100001_01_010");
MsgDisp("Kazama","Well, I guess I get why you're smiling.");
MsgDisp("主人公","Uhm......
No way, are we in the same class again
this year?");
StlEye(1,2);
StlMouth(1,2);
Wait(30,1);
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("sc310",0);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,0,2,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("D010100001_01_020");
MsgDisp("Kazama","What do you mean by \"again\"?
Are you complaining?");
MsgDisp("主人公","I don't think I meant it like that.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D010100001_01_030");
MsgDisp("Kazama","Huh? What do you mean by　\"I think\"?");
MsgClose();
BGMStop(1.5);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
Wait(40,0);
ChPrmTblAdd(1,0);
