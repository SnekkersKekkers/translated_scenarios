BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right......｛風真＊＊｝ said he
had something he wanted to talk to me
about on the way home, ......I wonder if
something happened?)");
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
MsgDisp("主人公","Ah, that's right what did you want to talk
to me about?");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G110100601_01_000");
MsgDisp("Kazama","There was something, but I lost it.");
MsgDisp("主人公","Eh?
What does that mean?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100601_01_010");
MsgDisp("Kazama","Spending time with you here is a big deal
to me......
I can think in a different way to usual.");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100601_01_020");
MsgDisp("Kazama","I know it's pathetic, but until we came
here......
I was planning on prying on Inori.");
MsgDisp("主人公","｛氷室＊＊｝?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100601_01_030");
MsgDisp("Kazama","But, it's already okay.
Just keep going as you always have.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100601_01_040");
MsgDisp("Kazama","After that, it's my problem.
It's not yours, not Inori's.
It's my problem.");
MsgDisp("主人公","......Yeah.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100601_01_050");
MsgDisp("Kazama","Hey, don't make that face.
It's okay, it's not like I'm going to
suddenly start surfing tomorrow.");
MsgDisp("主人公","(｛風真＊＊｝......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
