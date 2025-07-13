BGOpen("sc000",1);
MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010400300_04_000");
MsgDisp("Nanatsumori","Hey, do you have some time today?");
MsgDisp("主人公","Yeah, I'm free.
Want to get some tea?");
VoicePlay("D010400300_04_010");
MsgDisp("Nanatsumori","That's not it.");
ChMotion(4,1,1);
VoicePlay("D010400300_04_020");
MsgDisp("Nanatsumori","Want to come with me to the agency?");
MsgDisp("主人公","Eh?
By agency do you mean your modeling
agency∋");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D010400300_04_030");
MsgDisp("Nanatsumori","Yeah.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(4);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_04_09");
StlEye(4,0);
StlMouth(4,0);
BGOpen("ex100",0);
BGMPlay("BGM_C04_NANA_C",0.01);
ScrFadeIn(0);
VoicePlay("D010400300_41_000");
MsgDisp("Staff A","Nana-kun, that vibe is perfect～!
Now look at the camera.");
SEPlay("EV_SE_041");
SEWait();
StlEye(4,1);
StlMouthOpenLevel(4,0);
VoicePlay("D010400300_04_040");
MsgDisp("Nanatsumori","............");
VoicePlay("D010400300_41_010");
MsgDisp("Staff A","Great～!
Stay just like that, let me take a few
shots～");
SEPlay("EV_SE_041");
Wait(35,0);
SEPlay("EV_SE_041");
Wait(25,0);
SEPlay("EV_SE_041");
Wait(40,0);
SEPlay("EV_SE_041");
Wait(25,0);
SEPlay("EV_SE_041");
SEWait();
StlEyeOpenLevel(4,0);
VoicePlay("D010400300_44_000");
MsgDisp("Staff B","As expected of Nana-kun!
He looks great in that outfit worn by
legendary high school model Hazuki Kei!");
VoicePlay("D010400300_34_030");
MsgDisp("Staff C","Doesn't he!
It's a different kind of sexy from 
Hazuki Kei, though......");
VoicePlay("D010400300_34_040");
MsgDisp("Staff C","I think I'll become his fan!");
VoicePlay("D010400300_44_010");
MsgDisp("Staff B","Yeah!
I think this will be good for Hazuki
Kei's birthday project!");
MsgDisp("主人公","(It's true......
｛七ツ森＊｝ looks so lovely and handsome!)");
MsgDisp("主人公","(And that outfit, it's a remake of
something worn by the legendary Hazuki
Kei......Amazing!)");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("D010400300_04_050");
MsgDisp("Nanatsumori","......Heh.");
MsgDisp("主人公","∈");
SEPlay("EV_SE_041");
Wait(40,0);
SEPlay("EV_SE_041");
Wait(25,0);
SEPlay("EV_SE_041");
Wait(25,0);
SEPlay("EV_SE_041");
Wait(20,0);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlClose();
BGMVol(0.5,2);
BGOpen("ex100",0);
MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("D010400300_04_060");
MsgDisp("Nanatsumori","......So?");
MsgDisp("主人公","That was really inspiring......I was able 
to experience a real life photoshoot. 
That outfit looked great on you too!");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D010400300_04_070");
MsgDisp("Nanatsumori","I'm glad.");
ChEye(4,0);
VoicePlay("D010400300_04_080");
MsgDisp("Nanatsumori","I wanted you to have a chance to see
that Hazuki Kei project too.");
MsgDisp("主人公","Thanks.
I'll definitely buy the magazine!");
VoicePlay("D010400300_41_060");
MsgDisp("Staff A","Thank you for your patronage～!");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("D010400300_04_090");
MsgDisp("Nanatsumori","......Haha!");
MsgDisp("主人公","Hehe!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
ChPrmTblAdd(4,0);
