BGOpen("ho210",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Oh yeah! In October there will be a
night-time Halloween event starting this
evening at the Amusement Park.)");
MsgDisp("主人公","I'm not busy today so......
Time to get going and do an interview!");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr410",1);
ScrFadeIn(0);
MsgDisp("主人公","(The sun is setting......
Shouldn't the event be starting soon?)");
SEPlay("EV_SE_588",0,0.6);
SEPlay("EV_SE_511",0.2,0.7);
VoicePlay("D010400000_46_000");
MsgDisp("Woman Customer A","I finally got to meet her!
So inspiring～!");
VoicePlay("D010400000_47_000");
MsgDisp("Woman Customer B","Excuse me, can I get a photo?");
MsgDisp("主人公","(The excited voices of women......!
My reporter antenna tells me there's a
crowd of people nearby!)");
SEStop("EV_SE_588",1);
SEStop("EV_SE_511",1);
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
Wait(30,0);
StlOpen("ev_04_13");
StlEye(4,0);
StlMouth(4,0);
BGMPlay("BGM_C04_NANA_C",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Woah......
Such a cool witch!
She's tall and slender...... so beautiful!");
VoicePlay("D010400000_46_010");
MsgDisp("Woman Customer A","Sigh......
She looks even more lovely in person!");
VoicePlay("D010400000_47_010");
MsgDisp("Woman Customer B","Nana▼ｃо-san, you look like you can do
real magic～♪");
MsgDisp("主人公","(Nanaco-san?
Oh, it's a woman...... she looks like a
model.)");
StlEyeOpenLevel(4,5);
VoicePlay("D010400000_04_000");
MsgDisp("Witch","Hehe......
Do you want to see it?");
SEPlay("EV_SE_588",0,0.5);
SEPlay("EV_SE_511",0.1);
Wait(10,0);
MsgDisp("主人公","(......
Hm?)");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0,1);
VoicePlay("D010400000_47_020");
MsgDisp("Woman Customer B","Kyaaa!");
VoicePlay("D010400000_46_020");
MsgDisp("Woman Customer A","Show us, show us～▼");
SEStop("EV_SE_588",2);
SEStop("EV_SE_511",2);
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400000_04_010");
MsgDisp("Witch","Then look this way——");
StlEye(4,1);
StlMouth(4,1);
StlNear(1,0,15);
VoicePlay("D010400000_04_020");
MsgDisp("Witch","Ah∈");
MsgDisp("主人公","(Ah......
Like I thought.
This person has a familiar voice.)");
StlEye(4,1);
StlMouth(4,0);
StlEyeOpenLevel(4,0);
MsgDisp("主人公","Excuse me!
I'm a reporter for Habataki Watcher and
I'd love to get an interview......");
SEPlay("EV_SE_511",0.5,0.5);
SEPlay("EV_SE_842",0.2,0.5);
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400000_46_030");
MsgDisp("Woman Customer A","Nana▼ ｃо-san, that's amazing!
An interview with Habatcher!");
VoicePlay("D010400000_47_030");
MsgDisp("Woman Customer B","Amazing!
I want to hear it too～!");
SEStop("EV_SE_511",3);
SEStop("EV_SE_842",3);
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0);
VoicePlay("D010400000_04_030");
MsgDisp("Witch","...... ＮＯ.
In the truth lies darkness.");
MsgDisp("主人公","Then just the parts that aren't secrets!
From Nanaco directly to all her Habatcher
fans! Go ahead∈");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("D010400000_04_040");
MsgDisp("Witch","............");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400000_04_050");
MsgDisp("Witch","That's just like you......");
MsgDisp("主人公","?");
BGMStop(2);
MsgClose();
ScrFadeOut(0);
StlClose();
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr410",1);
ScrFadeIn(0);
MsgDisp("主人公","Phew......She was a bit secretive, but I
was able to get some information about
Nana▼ｃо-san!");
MsgDisp("主人公","She may have had a lot of secrets, but she
was still a kind and wonderful person.");
MsgDisp("主人公","(But you know, I'm sure I've heard that
voice somewhere before......
Hmm......)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(4,0);
