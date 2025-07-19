BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right...｛風真＊＊｝ said he wanted
to talk to me on his way home. ...I wonder
if something happened?)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛風真＊＊｝, what did you want to talk to
me about?");
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110101104_01_000");
MsgDisp("Kazama","It's been a while since I started working
part time with you.");
MsgDisp("主人公","Is that so...?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G110101104_01_010");
MsgDisp("Kazama","Why does it feel like that?");
MsgDisp("主人公","Working together is so fun that time just
flew by.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChMouth(1,2);
ChMotion(1,2);
ChEyeOpenLevel(1,#1);
VoicePlay("G110101104_01_020");
MsgDisp("Kazama","I feel the same.
It somewhat feels like we're running a
shop together.");
MsgDisp("主人公","Hehe, yeah.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G110101104_01_030");
MsgDisp("Kazama","It's given me a simulation of the future,
while I also get paid for my part time
job. I'm grateful for General Store simon.");
MsgDisp("主人公","｛風真＊＊｝'s contribution to the store is
amazing.
I have to do my best to catch up to him.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("G110101104_01_040");
MsgDisp("Kazama","But, the number of customers calling for
you is increasing. If the two of us run a
store together, we'll be invincible,
right?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110101104_01_050");
MsgDisp("Kazama","When that time comes...I'll have to open
shop far away from Simon's. I can't repay
kindness with evil.");
MsgDisp("主人公","(Hehe, it seems like ｛風真＊＊｝ has
already decided to open up his own shop.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
