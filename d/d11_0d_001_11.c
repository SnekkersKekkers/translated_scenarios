BGOpen("ex000",1);
ChLayout(1);
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","(Phew.
It's nice to take a walk for a change.)");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,255,0,0,0,#1,#1,0,1);
ChOpen(22,255,0,0,3,#1,#1,0,2);
ChMotion(22,3,1);
VoicePlay("D110D00100_22_000");
MsgDisp("Hikaru","Ma～ri!");
MsgDisp("主人公","Eh∋
｛みちる＊｝, ｛ひかる＊｝.
What's up?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("D110D00100_21_000");
MsgDisp("Michiru","Hehe.
Have you been redecorating in your garden?");
MsgDisp("主人公","Eh?");
ChEye(22,0);
ChMouth(22,5);
ChMotion(22,4,1);
ChEyeOpenLevel(22,10);
VoicePlay("D110D00100_22_010");
MsgDisp("Hikaru","Eh∋
You didn't notice?");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
StlOpen("ev_0b_01");
ScrFadeIn(0);
VoicePlay("D110D00100_22_020");
MsgDisp("Hikaru","Haven't the colors of the roses in Mari's
garden changed?");
VoicePlay("D110D00100_21_010");
MsgDisp("Michiru","These three colors are also beautiful.
Mari's love has been distributed well and
they are all in harmony.");
MsgDisp("主人公","The color of the roses have changed...?");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
ChOpen(21,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("D110D00100_22_030");
MsgDisp("Hikaru","Aha▼
I hope \"Mari's Garden\" is a lot of fun～♪");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("D110D00100_21_020");
MsgDisp("Michiru","Please pour your love into all kinds of
roses.
They are all worth raising.");
MsgDisp("主人公","(A change in the flowerbed of my heart...?
I guess I should ask ｛ひかる＊｝
later.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(1,0);
ChPrmTblAdd(3,0);
ChPrmTblAdd(4,0);
