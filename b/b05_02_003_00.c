MsgClose();
BGMStop();
ScrFadeOut(0);
ChClose(2,0,0);
Wait(20,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf100",0);
ScrFadeIn(0);
VoicePlay("B050200300_31_000");
MsgDisp("Goro?","Oh my.");
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C31_GORO_A",0.01);
ChOpen(31,254,2,0,0,#1,#1,0,0);
VoicePlay("B050200300_31_010");
MsgDisp("Goro","Mm, what a nice face♪");
MsgDisp("主人公","Goro-sensei!!");
ChPosition(31,1);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChOpen(2,253,3,5,0,#1,#1,0,2);
VoicePlay("B050200300_02_000");
MsgDisp("Sassa","Eh? The world-renown fashion icon, that
Goro-sensei?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,1);
VoicePlay("B050200300_31_020");
MsgDisp("Goro","Mmhm. Hey, isn't that guy with you a
diamond in the rough?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B050200300_02_010");
MsgDisp("Sassa","Diamond in the rough......You mean me?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("B050200300_31_030");
MsgDisp("Goro","F・o・u・n・d Y・o・u!
Let me borrow him for a bit▼");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,5);
VoicePlay("B050200300_31_040");
MsgDisp("Goro","Rough Diamond, come here.");
ChEye(2,5);
ChMouth(2,5);
ChMotion(2,5);
MsgDisp("主人公","Eh∋");
SEPlay("EV_SE_504");
SEWait();
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
BGMStop();
MsgClose();
ChClose(31,0,30);
ChClose(2,0,30);
VoicePlay("B050200300_02_020");
MsgDisp("Sassa","Ahh, wait......!");
SEWait();
MsgDisp("主人公","(They're gone......)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","(I wonder what Goro-sensei is doing with
｛颯砂＊＊｝......? )");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(31,254,4,0,0,#1,#1,0,0);
VoicePlay("B050200300_31_050");
MsgDisp("Goro","We're B・a・c・k.");
MsgDisp("主人公","Ah, welcome back.
EH——");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
BGMPlay("BGM_C02_SASSA_I",0.01);
StlOpen("ev_02_04");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
VoicePlay("B050200300_31_060");
MsgDisp("Goro","I polished your rough diamond
a little▼");
MsgDisp("主人公","Woah! ｛颯砂＊＊｝ looks so mature!");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("B050200300_02_030");
MsgDisp("Sassa","......Yeah. This is my first time looking
so cool.");
VoicePlay("B050200300_31_070");
MsgDisp("Goro","Yep. I went with \"Goro's Fresh
Collection\"\"!");
MsgDisp("主人公","Ah, that fashion collection is featured on
Habacha......");
StlEye(2,1);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
StlCheek(2,10);
VoicePlay("B050200300_02_040");
MsgDisp("Sassa","A-Am I your model......∋");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("B050200300_31_080");
MsgDisp("Goro","Nonono～ I'm just trying out the clothes
on your body.");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
VoicePlay("B050200300_02_050");
MsgDisp("Sassa","Ah......I see......
Of course.");
VoicePlay("B050200300_31_090");
MsgDisp("Goro","Those clothes are from Agel.
Adieu.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
Wait(90,0);
VoicePlay("B050200300_02_060");
MsgDisp("Sassa","Ah.
Thank you so much......");
MsgDisp("主人公","(Hehe, ｛颯砂＊＊｝ seems a bit
disappointed.
The suit really made him look cool.)");
BGMStop();
ChPrmTblAdd(2,0);
