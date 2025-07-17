BGOpen("wf200",1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4,1);
BGMPlay("BGM_C07_MIKAGE_C",0.01);
ScrFadeIn(0);
VoicePlay("B360750200_07_000");
MsgDisp("Mikage","The sunset is so beautiful～");
MsgDisp("主人公","That's true.
But isn't it dangerous to walk while
looking up?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B360750200_07_010");
MsgDisp("Mikage","I guess.
But it'd be a shame to miss it.");
MsgDisp("主人公","Shall we sit on that bench?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("B360750200_07_020");
MsgDisp("Mikage","Hmm...
I feel kinda bad for those two—— Let's
stay just for a little bit.");
MsgDisp("主人公","Hehe, okay.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(7);
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex270",1);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("B360750200_07_030");
MsgDisp("Mikage","It's so beautiful... Did you know you can
can take a psychological test using the
shape of the clouds?");
MsgDisp("主人公","That's interesting.
｛御影＊＊｝ what do you
see?");
VoicePlay("B360750200_07_040");
MsgDisp("Mikage","Hmm...
Haha, it's Inori surfing and Yanosuke
cleaning.");
MsgClose();
ScrFadeOut(0);
BGOpen("wf200",1);
ChOpen(7,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B360750200_07_050");
MsgDisp("Mikage","Let's bring them next time.
They'll probably sulk about it.");
MsgDisp("主人公","Hehe, okay.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChCheek(7,0);
