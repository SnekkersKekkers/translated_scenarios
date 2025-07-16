BGOpen("sc130",1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Are you heading home now?");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("G110600400_06_000");
MsgDisp("Himuro","Ah, it's you.
Today I plan on going to the beach.
...... If you want, you can come?");
MsgDisp("主人公","Yes......!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(6,0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110600400_06_010");
MsgDisp("Himuro","Hey......
Why don't you practice swimming a bit?");
MsgDisp("主人公","Eh......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600400_06_020");
MsgDisp("Himuro","It didn't seem like you were great at
swimming that time we went to the pool.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600400_06_030");
MsgDisp("Himuro","The ocean feels nice.
It's a shame.
If you like, I can teach you.");
MsgDisp("主人公","Really?");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600400_06_040");
MsgDisp("Himuro","As long as you have the will, that is.
My training is rigorous.");
MsgDisp("主人公","......Please go easy on me.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600400_06_050");
MsgDisp("Himuro","Ha?
Don't you want to be able to swim?");
MsgDisp("主人公","It's not that but......");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600400_06_060");
MsgDisp("Himuro","Then, this is not the time to be gentle or
to dote on you.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600400_06_070");
MsgDisp("Himuro","Besides, do you know how dangerous the
ocean is?
You could get swept out by a wave.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600400_06_080");
MsgDisp("Himuro","If you can only swim half-heartedly,
you'll grow careless. Therefore it's
better to become a careful swimmer.");
MsgDisp("主人公","I-I understand......
I'll do my best.");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600400_06_090");
MsgDisp("Himuro","Alright.");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600400_06_100");
MsgDisp("Himuro","I expect you to do as you say.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
