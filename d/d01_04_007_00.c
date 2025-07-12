BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Ugh......I feel a bit tired?
I guess I'll get some fresh air on the
rooftop.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc230",0);
SEPlay("EV_SE_DOOR_011",0,1);
Wait(80,0);
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","(Ugh......
I guess I'm a bit burnt out......)");
VoicePlay("D010400700_04_000");
MsgDisp("Nanatsumori?","Come here.");
MsgDisp("主人公","......Eh?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
MsgDisp("主人公","Ah......｛七ツ森＊｝.");
VoicePlay("D010400700_04_010");
MsgDisp("Nanatsumori","Your face is really pale.");
MsgClose();
ChClose(4,0,30);
SEPlay("EV_SE_544");
MsgClose();
ChLayout(0);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
VoicePlay("D010400700_04_020");
MsgDisp("Nanatsumori","Man......");
MsgClose();
SEPlay("EV_SE_551",1.3,0.4,0.6)MsgClose();
ScrFadeOut(0);
ChClose(4);
Wait(60,0);
BGMPlay("BGM_C04_NANA_B",0.01);
StlOpen("ev_04_12");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0,1);
ScrFadeIn(0);
MsgDisp("主人公","∈");
VoicePlay("D010400700_04_030");
MsgDisp("Nanatsumori","You don't have a fever......");
MsgDisp("主人公","｛七ツ森＊｝, there are people here——");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400700_04_040");
MsgDisp("Nanatsumori","It's fine.
Just stay still.");
MsgDisp("主人公","…………");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5);
VoicePlay("D010400700_04_050");
MsgDisp("Nanatsumori","......Idiot.
You're doing too much.");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400700_04_060");
MsgDisp("Nanatsumori","I know I'm a hypocrite for saying this
but when you feel tired, you should rest
properly.");
MsgDisp("主人公","Y......Yeah.");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5);
VoicePlay("D010400700_04_070");
MsgDisp("Nanatsumori","That's not a reassuring answer......");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400700_04_080");
MsgDisp("Nanatsumori","Alright.
This is an order. Disobedience is not
permitted. Go straight home today.");
MsgDisp("主人公","Okay......");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_675",1,0.4)StlClose();
BGMVol(0.5,2);
BGOpen("sc230",0);
ChLayout(1);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
SEWait();
ScrFadeIn(0);
VoicePlay("D010400700_04_090");
MsgDisp("Nanatsumori","It's a promise then.
When you don't feel well, it affects me
too.");
MsgDisp("主人公","Hehe.");
ChEye(4,2);
ChMouth(4,2);
VoicePlay("D010400700_04_100");
MsgDisp("Nanatsumori","And......");
MsgDisp("主人公","And?");
ChMotion(4,2,1);
VoicePlay("D010400700_04_110");
MsgDisp("Nanatsumori","The people around us are staring like
crazy......");
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D010400700_04_120");
MsgDisp("Nanatsumori","Hurry up, but take it slowly okay!
Let's go!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
BGMStop();
ChClose(4,0,30);
MsgClose();
ScrFadeOut(0);
MsgDisp("主人公","Ahh～!
｛七ツ森＊｝ ～∋");
SEWait();
MsgClose();
PlPrmTblAdd(70);
ChPrmTblAdd(4,0);
