BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right...｛風真＊＊｝ said he had
something he wanted to talk to me about.
...I wonder if something happened?)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","・ ・ ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,8,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110100800_01_000");
MsgDisp("Kazama","...Right.
There was something I wanted to talk to
you about...");
MsgDisp("主人公","What is it?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100800_01_010");
MsgDisp("Kazama","...What is it?
Well, it was probably something trivial.");
MsgDisp("主人公","Eh, did you forget?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100800_01_020");
MsgDisp("Kazama","Do you have any idea what I might've
wanted say?");
MsgDisp("主人公","(What ｛風真＊＊｝ might've
wanted to say...
Maybe he wanted to nag me like a Mom?)");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G110100800_01_030");
MsgDisp("Kazama","Just now you were thinking something bad,
I bet.");
MsgDisp("主人公","Eh?
That's not true I...");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,1);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100800_01_040");
MsgDisp("Kazama","So what was it?
I have plenty of time, so let's take the
time to talk about it.");
MsgDisp("主人公","Ehhー?
Can't I hear what ｛風真＊＊｝
had to say instead?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110100800_01_050");
MsgDisp("Kazama","The situation is different now.");
MsgDisp("主人公","(Geez, how convenient.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
