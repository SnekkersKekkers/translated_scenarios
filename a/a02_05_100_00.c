BGOpen("sc500",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Oh, that's right!
I ran out of paint today.
I'll grab some before I go home.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf100",1);
ScrFadeIn(0);
MsgDisp("主人公","(The art store, where was it——)");
SEPlay("EV_SE_049");
Wait(10,0);
ScrQuake(1);
MsgDisp("主人公","Wah∋");
MsgClose();
ScrFadeOut(0,0);
SEPlay("EV_SE_717",0,0.8);
StlOpen("ev_05_01");
StlEye(5,1);
StlMouth(5,0);
Wait(145,0);
BGMPlay("BGM_C05_HIIRAGI_I",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Ah...I'm so sorry!");
StlEye(5,1);
VoicePlay("A020510000_05_000");
MsgDisp("Hiiragi?","Excuse me.
Are you alright?");
MsgDisp("主人公","I'm fine.
...Oh, what beautiful flowers.
Glad they didn't get crushed...");
StlEyeOpenLevel(5,5,1);
StlMouth(5,1);
VoicePlay("A020510000_05_010");
MsgDisp("Hiiragi?","Yes, they made it out safely.");
MsgDisp("主人公","I'm truly sorry, I wasn't looking 
ahead.");
StlEye(5,0);
StlMouth(5,0);
VoicePlay("A020510000_05_020");
MsgDisp("Hiiragi?","Actually, it's my fault for standing there
with such a big cargo.");
MsgDisp("主人公","No no, it's me wh——");
StlEye(5,1);
StlMouth(5,1);
VoicePlay("A020510000_05_030");
MsgDisp("Hiiragi?","Hehe.
You're kind, and strong willed. ");
MsgDisp("主人公","I am...?");
StlEyeOpenLevel(5,5,1);
VoicePlay("A020510000_05_040");
MsgDisp("Hiiragi?","My name is Hiiragi Yanosuke.
Please forgive me for greeting you with my
hands full.");
MsgDisp("主人公","Don't worry about that!
My name is ｛主人公姓名｝.");
StlEyeOpenLevel(5,#1);
StlMouth(5,0);
VoicePlay("A020510000_05_050");
MsgDisp("Hiiragi","I'm a student at Habataki High too.");
MsgDisp("主人公","Oh, is that so?");
StlMouth(5,1);
VoicePlay("A020510000_05_060");
MsgDisp("Hiiragi","Yes, what a wonderful coincidence.");
StlEyeOpenLevel(5,5,1);
StlMouth(5,0);
VoicePlay("A020510000_05_070");
MsgDisp("Hiiragi","Excuse me, would you be so kind as to give
me directions?");
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf400",1);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","Huh, we're here.
This is the event hall right here, and——");
VoicePlay("A020510000_43_000");
MsgDisp("Theater Member","Ahh! You're here, Chairman!");
MsgDisp("主人公","(Chairman...?)");
VoicePlay("A020510000_05_080");
MsgDisp("Hiiragi","Excuse me, I'll be right back.");
MsgDisp("主人公","Huh?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.5);
SEWait();
MsgDisp("主人公","(Did these people just call ｛柊＊＊＊｝
\"Chairman\"...?)");
Wait(40);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
Wait(60);
MsgClose();
ChOpen(5,40,0,0,0,#1,#1,0,0);
VoicePlay("A020510000_05_090");
MsgDisp("Hiiragi","My apologies.
Thanks to you, I managed to get to the
rehearsal in time.");
MsgDisp("主人公","Rehearsal?");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
VoicePlay("A020510000_05_100");
MsgDisp("Hiiragi","Yes, I am currently performing here.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("A020510000_05_110");
MsgDisp("Hiiragi","I wanted to do a little bit of shopping,
but I lost my way back to the hall.
I'm glad that I met you.");
MsgDisp("主人公","Don't worry, it was just a few
blocks...");
VoicePlay("A020510000_43_010");
MsgDisp("Theater Member","Chairman! It's time!");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("A020510000_05_120");
MsgDisp("Hiiragi","If you'd like to come and see the play,
you're welcome anytime.
Well, then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝... He said he's a
Habataki student, but he's also the
chairman of the troupe Amazing...)");
MsgDisp("主人公","(Oh, there's the poster for his play!
...Hmm? \"Starring actor : Hiiragi
Yanosuke\"∋)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
