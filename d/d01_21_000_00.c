ChClose(21);
ChClose(22);
BGOpen("sc220",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(The culture festival will end soon...)");
MsgDisp("主人公","(Huh?
Over there, is that
｛みちる＊｝? )");
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C21_MICHIRU_A",0.01);
StlOpen("ev_21_01");
StlEye(21,0);
StlMouth(21,0);
Wait(20,0);
ScrFadeIn(0);
VoicePlay("D012100000_21_000");
MsgDisp("Michiru","Uhm...
Is there something on my face?");
VoicePlay("D012100000_40_000");
MsgDisp("Male Student","No, that...
You're just really cute...");
StlEyeOpenLevel(21,5,1);
VoicePlay("D012100000_21_010");
MsgDisp("Michiru","Eh?
No way...");
VoicePlay("D012100000_40_010");
MsgDisp("Male Student","Uhm, Ms.
Michiru Hanatsubaki!");
StlEyeOpenLevel(21,0,1);
VoicePlay("D012100000_21_020");
MsgDisp("Michiru","I can hear you so you don't need to be so
loud...");
VoicePlay("D012100000_40_020");
MsgDisp("Male Student","Sorry!
I've, uhm... for a long time now...
I've had a crush on you!");
StlEye(21,1);
VoicePlay("D012100000_21_030");
MsgDisp("Michiru","∈");
StlEyeOpenLevel(21,5,1);
VoicePlay("D012100000_21_040");
MsgDisp("Michiru","Me...?");
VoicePlay("D012100000_40_030");
MsgDisp("Male Student","Yes.
So...
Will you please go out with me?");
StlEyeOpenLevel(21,0,1);
Wait(6,0);
StlEyeOpenLevel(21,#1);
VoicePlay("D012100000_21_050");
MsgDisp("Michiru","∈");
StlEye(21,0);
VoicePlay("D012100000_21_060");
MsgDisp("Michiru","Even if you say something like that, I...");
VoicePlay("D012100000_40_040");
MsgDisp("Male Student","...Do you maybe already like another guy?");
StlEyeOpenLevel(21,5,1);
VoicePlay("D012100000_21_070");
MsgDisp("Michiru","That's not it.
But this uhm... is troubling.");
VoicePlay("D012100000_40_050");
MsgDisp("Male Student","It's fine if you don't reply right away.
I'll...
I'll wait for you forever!");
StlEyeOpenLevel(21,0,1);
StlMouthOpenLevel(21,0);
VoicePlay("D012100000_21_080");
MsgDisp("Michiru","......");
StlEye(21,1);
StlMouth(21,1);
VoicePlay("D012100000_21_090");
MsgDisp("Michiru","No, don't do that.
I——");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(21,254,4,4,4,#1,#1,5,0,0,0);
ScrFadeIn(0);
VoicePlay("D012100000_21_100");
MsgDisp("Michiru","Sigh...");
BGMVol(0.5,2);
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,1);
ChCheek(21,0);
SEPlay("EV_SE_645",0.5,0.4);
Wait(20,0);
VoicePlay("D012100000_21_110");
MsgDisp("Michiru","∋ ...Who's there?");
MsgDisp("主人公","｛みちる＊｝...");
ChEye(21,5);
ChMouth(21,5);
ChMotion(21,0);
VoicePlay("D012100000_21_120");
MsgDisp("Michiru","Mari!
Just now... did you see that?");
MsgDisp("主人公","Sorry.
I didn't mean to eavesdrop...");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("D012100000_21_130");
MsgDisp("Michiru","Hehe.
It's fine.
I'm relieved it was Mari.");
MsgDisp("主人公","Uhm...
｛みちる＊｝, what are you
going to do?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,1);
VoicePlay("D012100000_21_140");
MsgDisp("Michiru","Right.
I politely declined.");
MsgDisp("主人公","Eh?");
ChEye(21,2);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("D012100000_21_150");
MsgDisp("Michiru","Because you know, I don't know anything
about him so I wouldn't have any reason to
go out with him.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("D012100000_21_160");
MsgDisp("Michiru","I thought it would be better for the two
of us if I gave an honest reply instead of
getting his hopes up and making him wait.");
MsgDisp("主人公","True.
But ｛みちる＊｝, you look
really cute when you get shy, huh?");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
ChCheek(21,10);
VoicePlay("D012100000_21_170");
MsgDisp("Michiru","Geez Mari, no more.
That... it's so embarrassing...");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,2);
ChEyeOpenLevel(21,0);
VoicePlay("D012100000_21_180");
MsgDisp("Michiru","Sigh...
Love takes a lot of courage, huh?");
MsgDisp("主人公","(Hehe!
But I think I understand that.
You have to love with all your heart.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChPrmTblAdd(21,1);
