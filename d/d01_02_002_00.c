BGOpen("sc330",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like a variety of new books
have been requested. Should we look
around?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("主人公","(On these shelves should be a lot of
difficult speciality books......)");
MsgDisp("主人公","(Huh......Is that——)");
MsgClose();
BGMPlay("BGM_C02_SASSA_B",0.01);
StlOpen("ev_02_07");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
SEPlay("EV_SE_609",0,1);
SEWait();
VoicePlay("D010200200_02_000");
MsgDisp("Sassa","Mm......");
MsgDisp("主人公","(It's ｛颯砂＊＊｝. What's he reading? He
looks so serious......)");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5);
StlMouthOpenLevel(2,0);
VoicePlay("D010200200_02_010");
MsgDisp("Sassa",".........Hm?");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200200_02_020");
MsgDisp("Sassa","Hey, is it really that rare of a sight?
Me reading a book.");
MsgDisp("主人公","(∋)");
StlEye(2,1);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
VoicePlay("D010200200_02_030");
MsgDisp("Sassa","Even track and field idiots read books.");
MsgDisp("主人公","Hehe, sorry. You looked so
serious......What book is it?");
StlEye(2,1);
StlMouth(2,1);
StlEyeOpenLevel(2,0,1);
VoicePlay("D010200200_02_040");
MsgDisp("Sassa","A challenging physical education book.
I was reading it so I could show off
later.");
SEPlay("EV_SE_SCHOOL_002");
Wait(30,0);
StlEye(2,1);
StlMouth(2,1);
VoicePlay("D010200200_02_050");
MsgDisp("Sassa","Oh, afternoon classes are starting.");
MsgClose();
SEStop("EV_SE_SCHOOL_002",2);
ScrFadeOut(0);
Wait(20);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,254,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, are you not going to borrow
the book?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D010200200_02_060");
MsgDisp("Sassa","Ahh, it's fine.
I already got it all in my head.");
MsgDisp("主人公","That's great.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("D010200200_02_070");
MsgDisp("Sassa","Ah, it's not a book for health class,
okay?");
MsgClose();
BGMStop();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(Hehe.
Now I'm curious, what was he reading?
I think it was this book......?)");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_610");
SEWait();
MsgDisp("主人公","(\"Exercise Theory 1st Edition, Hyper
Recovery for Efficient Muscle
Growth\"......Is ｛颯砂＊＊｝ actually a
scientific person?)");
ChPrmTblAdd(2,0);
