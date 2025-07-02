BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(It's time for lunch.
Shall we eat on the rooftop today?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc230",0);
ScrFadeIn(0);
MsgDisp("主人公","Like I thought, nice weather......");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(5,254,0,0,4,-1,-1,0,0);
VoicePlay("D010500100_05_000");
MsgDisp("Hiiragi","Good afternoon.
Are you eating lunch?");
MsgDisp("主人公","Ah, yes.
Did ｛柊＊＊＊｝ eat already?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500100_05_010");
MsgDisp("Hiiragi","I have work to attend to in the student
council room today. I was just in the
mood for a change of scenery.");
MsgDisp("主人公","Eh? During lunch?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("D010500100_05_020");
MsgDisp("Hiiragi","I usually do not get hungry when I have
business to attend to.
Well then——");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,4);
MsgDisp("主人公","That's not good!
You need to eat.");
ChMotion(5,0);
VoicePlay("D010500100_05_030");
MsgDisp("Hiiragi","…………");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
StlOpen("ev_05_06");
StlEye(5,0);
StlMouth(5,0);
ScrFadeIn(0);
VoicePlay("D010500100_05_040");
MsgDisp("Hiiragi","You will have less food.");
MsgDisp("主人公","Only half. I won't give you all of
it, okay?");
StlMouth(5,1);
VoicePlay("D010500100_05_050");
MsgDisp("Hiiragi","Haha, thank you......");
MsgDisp("主人公","｛柊＊＊＊｝, why don't
you eat properly?");
StlEye(5,1);
StlMouth(5,0);
VoicePlay("D010500100_05_060");
MsgDisp("Hiiragi","When I'm busy I cannot just stop what
I am doing to eat.");
StlEye(5,0);
StlMouth(5,0);
MsgDisp("主人公","That kind of thing is a big no-no.
You have to eat before you work.");
StlEyeOpenLevel(5,5);
StlMouth(5,1);
VoicePlay("D010500100_05_070");
MsgDisp("Hiiragi","Haha, yes ma'am.
You sound like a mother, you know?");
MsgDisp("主人公","Eh?");
StlEyeOpenLevel(5,0);
Wait(6,0);
StlEye(5,1);
VoicePlay("D010500100_05_080");
MsgDisp("Hiiragi","Please feel free to eat your
delicious looking chicken.");
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGMVol(0.5,2);
BGOpen("sc230",0);
MsgClose();
ChOpen(5,254,0,4,4,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(5,3);
Wait(24,1);
VoicePlay("D010500100_05_090");
MsgDisp("Hiiragi","Thank you for the food.
I have to go back to the student
council room now.");
MsgDisp("主人公","I'll come and help you.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
VoicePlay("D010500100_05_100");
MsgDisp("Hiiragi","I can't let myself be spoiled like that.
You have done your job well. The work is
is mine to complete.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500100_05_110");
MsgDisp("Hiiragi","The student council work is a 
requirement for me to be here.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(I wonder if ｛柊＊＊＊｝ is 
dealing with too many things on his own...
And what does he mean by requirement?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
