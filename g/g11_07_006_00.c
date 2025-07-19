BGOpen("sc100",0);
ScrFadeIn(0);
MsgDisp("主人公","(Come to think of it, it was a bit windy
last night...
Is the gardening club field okay?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("G110700600_07_000");
MsgDisp("Mikage","｛主人公｝.
Oh, you're early.");
MsgDisp("主人公","Good morning!
｛御影＊＊｝ is early too.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700600_07_010");
MsgDisp("Mikage","Plants look their loveliest in the
morning, and the earlier you water them,
the better.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700600_07_020");
MsgDisp("Mikage","So, why are you here so early?");
MsgDisp("主人公","I was worried about yesterday's strong
winds. So, I came to check on the
conditions of the plants.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700600_07_030");
MsgDisp("Mikage","And then, I showed up～");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700600_07_040");
MsgDisp("Mikage","I've been dragging things along lately.
It's a problem if I appear so often.");
MsgDisp("主人公","It's super fun being with ｛御影＊＊｝
though?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700600_07_050");
MsgDisp("Mikage","Oh that's good.
Well, I'll be back in homeroom in the
morning.");
MsgDisp("主人公","Hehe, yes.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
