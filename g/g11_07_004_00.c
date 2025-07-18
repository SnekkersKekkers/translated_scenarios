MsgClose();
EnvAutoSet(0);
BGOpen("sc320",0);
EnvPlay("SE_ENV_BG_SC350_CS0",0.2);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110700400_07_000");
MsgDisp("Mikage","Well, that's all for today. It's fine
whether you're going to club activities,
taking a detour or heading straight home,
but take care.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoiceEVSPlay(7);
VoicePlay("G110700400_07_010");
MsgDisp("Mikage","｛主人公｝.
Please stop by the gardening club for a
bit on your way home.");
MsgDisp("主人公","Eh...
Ah, okay!");
MsgClose();
ScrFadeOut(0);
ChClose(7);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A");
BGOpen("ev007",0);
EnvPlay("SE_ENV_BG_EV007_CO0");
ChOpen(7,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(7,0);
VoicePlay("G110700400_07_020");
MsgDisp("Mikage","......");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700400_07_030");
MsgDisp("Mikage","As expected.
Aren't you feeling a bit tired?");
MsgDisp("主人公","Eh?
But that's not true...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700400_07_040");
MsgDisp("Mikage","Never mind that.
Just try taking a deep breath.");
MsgDisp("主人公","...Huu, fuuu...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700400_07_050");
MsgDisp("Mikage","Once more.");
MsgDisp("主人公","...Huu, fuuu...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700400_07_060");
MsgDisp("Mikage","Plant leaves have scent sachets, which
bugs dislike, but have a relaxing effect
on people.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700400_07_070");
MsgDisp("Mikage","It's cool when you're always giving it
your all, but sometimes you need to relax
too.");
MsgDisp("主人公","...Ah, yes.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("G110700400_07_080");
MsgDisp("Mikage","Okay, then.
Take another deep breath before you go
home.");
Wait(30,0);
SEPlay("EV_SE_080");
MsgDisp("主人公","(Huh?
I think I feel a bit better...it must be
thanks to ｛御影＊＊｝.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
EnvAutoSet(1);
PlPrmTblAdd(72);
