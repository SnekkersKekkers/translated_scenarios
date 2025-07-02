BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C02_SASSA_A",0.01);
ChOpen(2,254,3,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("D100200000_02_000");
MsgDisp("Sassa","｛主人公｝, morning!");
MsgDisp("主人公","Good Morning, ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("D100200000_02_010");
MsgDisp("Sassa","You look like you slept well?");
MsgDisp("主人公","Hehe, you too.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("D100200000_02_020");
MsgDisp("Sassa","I always get here on time.
Even if I have to run here, I get a 
good time.");
MsgDisp("主人公","Don't run in the halls, okay?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("D100200000_02_030");
MsgDisp("Sassa","Huh?　What?
This reminds me of my dream last night.");
MsgDisp("主人公","Eh, really......?
What kind of dream was it?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D100200000_02_040");
MsgDisp("Sassa","There was a garden with blooming roses,
your house, maybe......So I ran up to you
and you said what you said just now.");
MsgDisp("主人公","Eh......That's an interesting dream.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("D100200000_02_050");
MsgDisp("Sassa","Yeah.
Maybe it means something?
I'll think about it a bit.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(2);
MsgClose();
ScrFadeOut(0);
