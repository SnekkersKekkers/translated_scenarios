MsgDisp("主人公","(｛颯砂＊＊｝'s last high school race
will start soon......)");
MsgClose();
BGOpen("sc624",0);
ChLayout(1);
ScrFadeIn(0);
BGMPlay("BGM_C02_SASSA_C",0.01);
ChOpen(2,37,0,0,4,-1,-1,0,0);
MsgDisp("主人公","Only 4 events left.
I know ｛颯砂＊＊｝ will try his best.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("D010200700_02_000");
MsgDisp("Sassa","Yeah, I'll run until I can't anymore.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("D010200700_02_010");
MsgDisp("Sassa","......But you know,
I guess it would be bad if I couldn't
move anymore——");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(2,0,30);
ChLayout(0);
MsgClose();
ChOpen(2,37,4,4,0,-1,-1,0,0);
SEWait();
MsgDisp("主人公","Eh......");
MsgClose();
SEPlay("EV_SE_551",1,0.6,0.3);
ScrFadeOut(0);
SEWait();
VoicePlay("D010200700_02_020");
MsgDisp("Sassa","…………");
MsgDisp("主人公","｛颯砂＊＊｝……？");
SEPlay("EV_SE_675",1,0.3);
Wait(30,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ChCheek(2,10);
ScrFadeIn(0);
VoicePlay("D010200700_02_030");
MsgDisp("Sassa","......Alright.
In order to not have any regrets,
I'll run until I pass out!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","（｛颯砂＊＊｝……）");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(Finally, the 1500m race......
｛颯砂＊＊｝!)");
MsgClose();
BGOpen("sc625",0);
ScrFadeIn(0);
SEPlay("EV_SE_615");
Wait(60,0);
MsgDisp("主人公","Good luck!
It's the final hurdle!");
MsgClose();
ScrFadeOut(0);
SEStop("EV_SE_615",3);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc628",0);
ScrFadeIn(0);
VoicePlay("D010200700_47_000");
MsgDisp("Broadcast","The winner of this year's Octathlon
is Sassa Nozomu, a 3rd year student at
Habataki Academy. He broke the high
school record.");
SEPlay("EV_SE_GAYA_003",0.5);
SEPlay("EV_SE_GAYA_021",0.5);
SEPlay("EV_SE_CLAP_002",0,0.2);
SEPlay("EV_SE_CLAP_004",0,0.2);
Wait(30,0);
MsgDisp("主人公","｛颯砂＊＊｝, congrats!");
VoicePlay("D010200700_44_000");
MsgDisp("Member B","Sassa-senpai, congratulations!");
VoicePlay("D010200700_33_020");
MsgDisp("Member A","Sassa-senpai, that was amazing!
That was your 3rd consecutive interhigh
victory.");
MsgDisp("主人公","Yeah, it was amazing.
Next year, you all can make it 4 wins
for Habataki in a row.");
SEStop("EV_SE_GAYA_003",2);
SEStop("EV_SE_GAYA_021",2);
SEStop("EV_SE_CLAP_002",2);
SEStop("EV_SE_CLAP_004",2);
VoicePlay("D010200700_02_040");
MsgDisp("Sassa","Manager!");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE",0,0.9);
Wait(70,0);
MsgClose();
BGMPlay("BGM_C02_SASSA_I",0.01);
ChOpen(2,37,3,0,4,-1,-1,0,0);
VoicePlay("D010200700_02_050");
MsgDisp("Sassa","In the end, it was a struggle to get
first place, but I managed to pull
through.");
MsgDisp("主人公","Hehe!
Yeah, welcome back.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(2,0,30);
ChLayout(0);
MsgClose();
ChOpen(2,37,4,4,3,-1,-1,0,0);
VoiceEVSPlay(2);
VoicePlay("D010200700_02_060");
MsgDisp("Sassa","｛主人公｝……");
MsgDisp("主人公","Eh, ｛颯砂＊＊｝?");
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
StlOpen("ev_02_11");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("D010200700_02_070");
MsgDisp("Sassa","｛主人公｝, you've always beeen at my
side, lending me your strength.
Thank you.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,0);
VoicePlay("D010200700_02_080");
MsgDisp("Sassa","If I didn't have you, I wouldn't
have won this medal.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("D010200700_02_090");
MsgDisp("Sassa","That's all you.");
MsgDisp("主人公","Eh......That's not true.");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D010200700_02_100");
MsgDisp("Sassa","Is that a bad thing to say?");
MsgDisp("主人公","Ah......Gold medals are kind of heavy,
aren't they? ｛颯砂＊＊｝, thank you.
You worked hard these past 3 years.");
SEPlay("EV_SE_CLAP_005",0.5);
Wait(30,0);
VoicePlay("D010200700_44_010");
MsgDisp("Member B","Senpais, you are amazing......");
VoicePlay("D010200700_33_040");
MsgDisp("Member A","We have to try our best too.");
SEStop("EV_SE_CLAP_005",2);
MsgClose();
BGMStop(2);
ScrFadeOut(0);
Wait(60);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(Just like that, the last high school
interhigh came to an end.)");
ChPrmTblAdd(2,0);
