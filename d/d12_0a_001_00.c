BGOpen("ho210",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, a message from ｛氷室＊＊｝......)");
MsgDisp("主人公","(It says......\"Right now there's a surfing
lesson being held at the beach.
Ryota-senpai and Nozomu-senpai are
students if you'd like to come watch.\")");
MsgDisp("主人公","(That sounds kind of interesting?
Alright, let's go!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf600",0);
ScrFadeIn(0);
VoicePlay("D120A00100_06_000");
MsgDisp("Himuro?","Please drop your hips more.
Ah, your posture is bad.");
MsgDisp("主人公","(Ah, that voice is......)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_0a_03");
StlEye(1,0);
StlMouth(1,0);
StlEye(2,0);
StlMouth(2,0);
StlEye(6,0);
StlMouth(6,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("D120A00100_06_010");
MsgDisp("Himuro","Ryota-senpai, aren't you too wobbly?
Nozomu-senpai you're...... perfect as
expected.");
MsgDisp("主人公","Hehe, you guys are really into it, huh?");
StlEyeOpenLevel(1,5,1);
StlMouth(1,0);
VoicePlay("D120A00100_01_000");
MsgDisp("Kazama","Ugh......
Why are you here.");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D120A00100_02_000");
MsgDisp("Sassa","Yo.
Are you here for the surfing class too?");
MsgDisp("主人公","Nope, I'm just here to observe.");
StlEyeOpenLevel(1,#1);
StlMouth(1,1);
VoicePlay("D120A00100_01_010");
MsgDisp("Kazama","Observe?
What's with that.");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("D120A00100_06_020");
MsgDisp("Himuro","Come on, Ryota-senpai, focus.");
StlEye(1,1);
StlMouth(1,1);
VoicePlay("D120A00100_01_020");
MsgDisp("Kazama","Inori, this is your doing, isn't it?");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D120A00100_02_010");
MsgDisp("Sassa","Hey, how much longer should we keep this
pose?");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0,1);
VoicePlay("D120A00100_06_030");
MsgDisp("Himuro","Until I say its okay to stop.");
StlEye(2,0,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("D120A00100_02_020");
MsgDisp("Sassa","Eh......");
StlEyeOpenLevel(1,0);
StlMouth(1,0);
VoicePlay("D120A00100_01_030");
MsgDisp("Kazama","All because Sassa had to ask you to teach
us to surf......");
StlEyeOpenLevel(1,#1);
StlMouth(1,1);
MsgDisp("主人公","(｛氷室＊＊｝ looks like he's having a lot
of fun?)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlClose();
BGOpen("wf600",1);
ChLayout(2);
ChOpen(6,31,0,0,0,#1,#1,0,0,0,30);
ChOpen(2,31,0,0,4,#1,#1,0,1,0,30);
ChOpen(1,31,0,2,2,0,#1,0,2,0,30);
ChLayout(4);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("D120A00100_02_030");
MsgDisp("Sassa","Hey, isn't it about time we go in the
water......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D120A00100_06_040");
MsgDisp("Himuro","Don't underestimate the ocean.
It's still too early for that.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D120A00100_01_040");
MsgDisp("Kazama","Sigh......
This is the first time I've ever heard of
surfing on the sand......");
MsgDisp("主人公","｛風真＊＊｝, are you okay?");
ChMouth(1,0);
ChEyeOpenLevel(1,#1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("D120A00100_06_050");
MsgDisp("Himuro","Okay, that's it for today's class.
Let's go get some juice.");
MsgDisp("主人公","(Today's class...... does that mean there
will be second one......?
I think I want to watch it again......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChLayout(1);
ChPrmTblAdd(1,0);
ChPrmTblAdd(2,0);
ChPrmTblAdd(6,0);
ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
