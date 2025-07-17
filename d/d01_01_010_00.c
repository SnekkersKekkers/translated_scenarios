BGOpen("ho210",0);
EnvAutoSet(1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
Wait(40,0);
MsgDisp("主人公","(Ah, ｛風真＊＊｝ is calling!)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
Wait(20,0);
MsgDisp("主人公","Hello, ｛風真＊＊｝?");
VoicePlay("D010101000_01_001");
MsgDisp("Kazama","It's me.
Hey, do you have time now?");
MsgDisp("主人公","Yeah, I do but...");
VoicePlay("D010101000_01_011");
MsgDisp("Kazama","Okay, I'll come pick you up soon.");
MsgDisp("主人公","O-Okay, sure.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(What's going on?
｛風真＊＊｝... )");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr000",0);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010101000_01_021");
MsgDisp("Kazama","Good, we made it here safely.");
MsgDisp("主人公","Safely?");
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("D010101000_01_031");
MsgDisp("Kazama","Yeah, when I'm with you, I never know what
will happen.");
ChEye(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D010101000_01_041");
MsgDisp("Kazama","It's easy to get stuck in a puddle or
something like that?");
MsgDisp("主人公","Eh?
A puddle...
That only happened one time.");
ChMotion(1,1);
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("D010101000_01_051");
MsgDisp("Kazama","Once is enough.
The bus is here.
Let's go.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(Where are we going?)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
EnvAutoSet(0);
StlOpen("ev_01_16");
StlEye(1,0);
StlMouth(1,0);
BGMPlay("BGM_C01_RYOUTA_C",0.01);
EnvPlay("SE_ENV_BG_HO000_CO0",1,0.3);
ScrFadeIn(0);
MsgDisp("主人公","｛風真＊＊｝, you wanted to
visit the castle?");
StlEye(1,1);
VoicePlay("D010101000_01_061");
MsgDisp("Kazama","I guess so.
... The city changed a lot while I was
gone, I guess?");
MsgDisp("主人公","That's true.");
StlEye(1,0);
StlEyeOpenLevel(1,5,1);
VoicePlay("D010101000_01_071");
MsgDisp("Kazama","But this place never changes.
So I thought that it might bring back some
memories from the past.");
StlEye(1,1);
VoicePlay("D010101000_01_081");
MsgDisp("Kazama","You know, we probably came here together
back in kindergarten.");
MsgDisp("主人公","Yeah, I wonder how that went...
Does ｛風真＊＊｝ remember?");
StlEye(1,0);
StlEyeOpenLevel(1,0,1);
VoicePlay("D010101000_01_091");
MsgDisp("Kazama","Nope.
The two of us have forgotten about a lot
of things.");
StlEye(1,2);
StlMouth(1,1);
VoicePlay("D010101000_01_101");
MsgDisp("Kazama","So, I don't blame you for forgetting about
that day...");
StlEye(1,0);
StlMouth(1,0);
VoicePlay("D010101000_01_110");
MsgDisp("Kazama","Even just looking from here I see a lot of
buildings I don't recognize...");
MsgDisp("主人公","Yeah, there are a lot of new spots.
Some places are being renovated.
We should go out together sometime?");
StlEye(1,1);
VoicePlay("D010101000_01_120");
MsgDisp("Kazama","Right?
Even if there's a lot we don't remember,
we just have to make new memories.");
StlEye(1,0);
StlEyeOpenLevel(1,0,1);
VoicePlay("D010101000_01_130");
MsgDisp("Kazama","I think I'm ready for that change...");
StlEyeOpenLevel(1,5,1);
VoicePlay("D010101000_01_140");
MsgDisp("Kazama","The sound of the bell.
Like I thought, you can't hear it from
here...");
MsgDisp("主人公","Hehe, when you say \"the sound of the
bell\", do you mean that church bell we
both heard a long time ago?");
StlEye(1,1);
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("tr320",0);
BGMVol(0.5,2);
EnvPlay("SE_ENV_BG_HO000_CO0",1,0.7);
ChLayout(0);
MsgClose();
SEPlay("EV_SE_544",0.1,0.4);
ChOpen(1,255,7,3,1,#1,#1,0,0,0,30);
ScrFadeIn(0);
ChMotion(1,3);
VoicePlay("D010101000_01_150");
MsgDisp("Kazama","What, you remember that∋");
MsgDisp("主人公","Yeah, I didn't forget.
We heard the bell ringing and made wishes
with our pinwheels.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D010101000_01_160");
MsgDisp("Kazama","Haa?
That's what you mean...
That's somewhat disappointing.");
MsgDisp("主人公","(｛風真＊＊｝, maybe you thought I forgot
about you?
I guess I should have told you sooner...)");
BGMStop();
EnvAutoSet(1);
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChPrmTblAdd(1,0);
