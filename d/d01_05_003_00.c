BGOpen("sc130",1);
ScrFadeIn(0);
VoicePlay("D010500300_44_000");
MsgDisp("School Girl A","Hey, did you know?
There's a limited time one day sale
ongoing at the shopping mall!");
VoicePlay("D010500300_45_000");
MsgDisp("School Girl B","Really∋
Let's go there then!");
MsgDisp("主人公","(A sale at the shopping mall, huh?
That sounds good, I guess I should check
it out.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf000",1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("D010500300_05_000");
MsgDisp("Hiiragi?","Why on Earth would you be leaving the
theater company?");
MsgDisp("主人公","(Eh, that voice...)");
VoicePlay("D010500300_33_020");
MsgDisp("Theater Member A","We're not cut out to be actors.");
VoicePlay("D010500300_46_000");
MsgDisp("Theater Member B","No matter how much we practice, we aren't
good enough to satisfy the chairman.
We're not enjoying ourselves.");
VoicePlay("D010500300_05_010");
MsgDisp("Hiiragi","Why are you giving up so easily?");
VoicePlay("D010500300_33_040");
MsgDisp("Theater Member A","It's not that simple for us either.");
VoicePlay("D010500300_46_010");
MsgDisp("Theater Member B","There's no point in discussing this.
Let's go.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
SEWait();
MsgClose();
Wait(30,0);
ChOpen(5,40,4,2,2,0,#1,0,0);
VoicePlay("D010500300_05_020");
MsgDisp("Hiiragi","......");
MsgDisp("主人公","...｛柊＊＊＊｝?");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,5);
VoicePlay("D010500300_05_030");
MsgDisp("Hiiragi","! Why...");
ChMouth(5,0);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
VoicePlay("D010500300_05_040");
MsgDisp("Hiiragi","...Excuse me.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(5);
SEWait();
MsgDisp("主人公","Ah, ｛柊＊＊＊｝!");
MsgClose();
ScrFadeOut(0,0);
EnvAutoSet(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(｛柊＊＊＊｝, where did you go?
You don't seem okay at all...)");
VoicePlay("D010500300_05_050");
MsgDisp("Hiiragi?","...*Sobbing noises*");
MsgDisp("主人公","Ah...");
MsgClose();
ScrFadeOut(0,0);
StlOpen("ev_05_09");
StlEye(5,1);
StlEyeOpenLevel(5,0,1);
StlMouth(5,1);
BGMPlay("BGM_C05_HIIRAGI_C",0.01);
EnvPlay("SE_ENV_BG_AD006_CO1",1);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝...");
StlEyeOpenLevel(5,10,1);
VoicePlay("D010500300_05_060");
MsgDisp("Hiiragi","!");
StlEyeOpenLevel(5,#1);
VoicePlay("D010500300_05_070");
MsgDisp("Hiiragi","...I didn't want you to see me like
this.");
StlEyeOpenLevel(5,5);
VoicePlay("D010500300_05_080");
MsgDisp("Hiiragi","...Just a year ago those two smiled and
told me how much they love the theater.");
StlEyeOpenLevel(5,0,1);
VoicePlay("D010500300_05_090");
MsgDisp("Hiiragi","And now, because of me, they think they
aren't cut out for it and have given up on
their dreams. It's not fun for them...");
MsgDisp("主人公","......");
StlEye(5,0);
VoicePlay("D010500300_05_100");
MsgDisp("Hiiragi","I'm really the worst.
I was destroying their dreams without even
realizing it.");
StlEyeOpenLevel(5,0);
StlMouth(5,0);
VoicePlay("D010500300_05_110");
MsgDisp("Hiiragi","Isn't that ironic for a person like me
whose job it is to convey hope to the
audience on stage...");
MsgDisp("Hiiragi","How hilarious it is that I'm the chairman.");
StlEye(5,1);
StlMouth(5,1);
VoicePlay("D010500300_05_120");
MsgDisp("Hiiragi","... Hah, my apologies...
Am I that way to you too?");
MsgDisp("主人公","Of course not. ｛柊＊＊＊｝ is
always working hard for everyone's sake,
the Student Council and the Theater
Company.");
StlEyeOpenLevel(5,5);
VoicePlay("D010500300_05_130");
MsgDisp("Hiiragi","For everyone's sake...
Yes, that was always my intention.");
MsgDisp("主人公","Yes.
We all appreciate you, okay?");
StlEyeOpenLevel(5,0,1);
VoicePlay("D010500300_05_140");
MsgDisp("Hiiragi","...Thank you.");
MsgClose();
ScrFadeOut(0,0);
StlClose();
SEPlay("EV_SE_675",1,0.4);
SEWait();
BGMVol(0.5,2);
BGOpen("wf200",1);
EnvPlay("SE_ENV_BG_WF200_CO1",1);
MsgClose();
ChOpen(5,40,4,2,2,0,#1,0,0);
Wait(10,0);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","...Are you okay?");
ChMouth(5,4);
VoicePlay("D010500300_05_150");
MsgDisp("Hiiragi","Please don't worry about me.");
ChMotion(5,0);
ChEyeOpenLevel(5,8);
VoicePlay("D010500300_05_160");
MsgDisp("Hiiragi","Please try to forget today.
If you don't, I don't know how I can show
my face to you again.");
MsgDisp("主人公","｛柊＊＊＊｝...");
ChMouth(5,0);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("D010500300_05_170");
MsgDisp("Hiiragi","Sorry, I need to clear my head.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝ seemed really upset...)");
MsgClose();
ScrFadeOut(0,0);
EnvAutoSet(1);
ChPrmTblAdd(5,0);
