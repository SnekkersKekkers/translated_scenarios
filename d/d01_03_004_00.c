BGOpen("sc210",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Such nice weather, it feels really
good...)");
VoicePlay("D010300400_03_000");
MsgDisp("Honda?","Yay, good job!");
MsgDisp("主人公","Eh?");
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C03_HONDA_B",0.01);
StlOpen("ev_03_08");
StlEye(3,0);
StlMouth(3,0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("D010300400_03_010");
MsgDisp("Honda","｛主人公｝, look look!
These babies are flying for this first
time!");
MsgDisp("主人公","Wow, butterflies...!");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5);
VoicePlay("D010300400_03_020");
MsgDisp("Honda","Right? Aren't swallowtail butterflies
beautiful? When you close your eyes, you
can even hear how happy they are.");
VoicePlay("D010300400_03_030");
MsgDisp("Honda","These guys all hatched and took off at the
same time, they're really good friends.");
StlEye(3,2);
StlMouth(3,0);
VoicePlay("D010300400_03_040");
MsgDisp("Honda","Reminds me of me and you.");
MsgDisp("主人公","Hehe, yeah.");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("D010300400_03_050");
MsgDisp("Honda","Come back here again when you're ready to
lay eggs!");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("D010300400_03_060");
MsgDisp("Honda","Sigh, they're gone.");
MsgDisp("主人公","Will they come back again?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("D010300400_03_070");
MsgDisp("Honda","Yeah, since it's that time of year we can
see them again in two months.");
MsgDisp("主人公","Were you watching over them the whole
time?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D010300400_03_080");
MsgDisp("Honda","That's right, they were my special
project. They were hibernating in the
Pepper tree in the gardening club.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D010300400_03_090");
MsgDisp("Honda","It'll get even crazier from now on.
Since it's the insect season, you can find
a lot of insects!");
MsgDisp("主人公","Y-Yeah.
That's true...");
MsgDisp("主人公","(A lot of bugs huh... I bet there's a lot
of them for ｛本多＊＊｝ to
observe at school...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
ChPrmTblAdd(3,0);
