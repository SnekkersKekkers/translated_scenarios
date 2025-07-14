SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, it's from Habacha's editorial
department. It says......\"Can you please
cover the event at Habataki Farm\"......)");
MsgDisp("主人公","(Yeah! Of course I'll go.)");
MsgClose();
Wait(40,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr500",0);
ScrFadeIn(0);
VoicePlay("D010700700_48_000");
MsgDisp("Live","The \"Sheep Shearing Championship\" will
begin soon!");
VoicePlay("D010700700_49_000");
MsgDisp("Mom","Come, let's hurry.
It's about to start!");
VoicePlay("D010700700_44_000");
MsgDisp("Boy","Okay!");
MsgDisp("主人公","Phew......I think I made it in time.
Let's hurry!");
SEPlay("EV_SE_FOOT_RUN_KEEP_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
Wait(30,0);
BGMPlay("BGM_C07_MIKAGE_C",0.01,0.6);
StlOpen("ev_07_12");
StlEye(7,0);
StlMouth(7,0);
SEPlay("EV_SE_792",0.8);
SEPlay("EV_SE_745",0.8,0.5);
ScrFadeIn(0);
MsgDisp("主人公","......Wait, huh∋");
VoicePlay("D010700700_48_010");
MsgDisp("Live","Ooh, so fast!
From the Mechanical Shearing division-
Mikage Kojiro!");
StlEyeOpenLevel(7,5);
MsgDisp("主人公","｛御影＊＊｝∋");
SEPlay("EV_SE_846",0.1,0.8);
VoicePlay("D010700700_33_040");
MsgDisp("Male Customer","Wow, that's amazing!
So fast!");
StlEyeOpenLevel(7,#1);
VoicePlay("D010700700_48_020");
MsgDisp("Live","He's destroying the competition with his
elegance......!
Even the sheep seems amazed∈");
SEStop("EV_SE_792",3);
SEStop("EV_SE_846",3);
StlEyeOpenLevel(7,5);
VoicePlay("D010700700_07_000");
MsgDisp("Mikage","That's a good girl.
Go to sleep.");
StlMouth(7,1);
StlNear(1,0,30);
SEPlay("EV_SE_026",0,0.9)Wait(90,1);
StlNear(0,0,30);
Wait(30,1);
StlMouth(7,0);
VoicePlay("D010700700_45_000");
MsgDisp("Woman Customer","Kyaa, how cool!
He has such a nice smile!");
MsgDisp("主人公","｛御影＊＊｝, what are you......");
StlEyeOpenLevel(7,#1);
VoicePlay("D010700700_07_010");
MsgDisp("Mikage","Oh, it's you∋
So there's another adorable sheep here.");
MsgDisp("主人公","Ehh∈");
SEStop("EV_SE_745",1.2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr500",0);
ChLayout(1);
MsgClose();
ChOpen(7,37,0,0,0,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("D010700700_07_020");
MsgDisp("Mikage","Ehh......I didn't know you were interested
in this kind of thing?");
MsgDisp("主人公","Ah, not really, I just wanted to get an
interview for my part-time job at
Habacha......");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("D010700700_07_030");
MsgDisp("Mikage","I see.
How about an exclusive interview with the
champion then?");
MsgDisp("主人公","Y-Yes please!!");
MsgDisp("主人公","(I didn't expect to interview
｛御影＊＊｝......! )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
ChPrmTblAdd(7,0);
