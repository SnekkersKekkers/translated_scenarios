MsgType(0);
MsgClose();
ScrFadeOut(0);
BGOpen("ex240",1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
NSSOpen(8,254,4,0,#1,#1,10);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("T040800000_08_000");
MsgDisp("Shirahane","I guess this is what it means to be
happy...");
MsgDisp("主人公","Hehe.");
NSSEye(8,3);
VoicePlay("T040800000_08_010");
MsgDisp("Shirahane","This is the first time I've liked a girl
this much.");
NSSEye(8,0);
VoicePlay("T040800000_08_020");
MsgDisp("Shirahane","It's completely different from 'liking'
your big brother and big sister.");
NSSEye(8,4);
NSSMouth(8,4);
VoicePlay("T040800000_08_030");
MsgDisp("Shirahane","What can I say... just thinking about you
makes me happy.");
NSSEyeOpenLevel(8,0);
MsgDisp("主人公","｛大地＊＊｝...");
NSSEye(8,0);
NSSMouth(8,5);
VoicePlay("T040800000_08_040");
MsgDisp("Shirahane","... Ah!
Could this be——");
MsgDisp("主人公","Eh?");
NSSEye(8,3);
NSSMouth(8,5);
VoicePlay("T040800000_08_050");
MsgDisp("Shirahane","\"True love\", that's what this is, isn't
it?");
NSSEye(8,3);
NSSMouth(8,0);
NSSEyeOpenLevel(8,0);
VoicePlay("T040800000_08_060");
MsgDisp("Shirahane","Yeah!
I love you so absurdly much.
Hehe▼");
SEStop("EV_SE_754",5.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0,300);
NSSClose();
Wait(300,0);
