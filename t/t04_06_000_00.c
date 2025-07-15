MsgType(0);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",0);
NSSOpen(6,254,4,4,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("T040600000_06_000");
MsgDisp("Himuro","............");
NSSEye(6,4);
NSSMouth(6,4);
VoicePlay("T040600000_06_010");
MsgDisp("Himuro","I'm glad I came to Haba High.");
MsgDisp("主人公","Eh?");
NSSEye(6,6);
NSSMouth(6,3);
VoicePlay("T040600000_06_020");
MsgDisp("Himuro","Of course, it wasn't all good, and there
were many troubles......");
NSSEye(6,4);
NSSMouth(6,3);
VoicePlay("T040600000_06_030");
MsgDisp("Himuro","But I met you, and now I get to walk
alongside you.");
NSSEye(6,4);
NSSMouth(6,3);
VoicePlay("T040600000_06_040");
MsgDisp("Himuro","And it is because of that, I'm very happy
now.");
MsgDisp("主人公","Yes......me too.");
NSSEye(6,4);
NSSMouth(6,4);
VoiceEVSPlay(6);
VoicePlay("T040600000_06_050");
MsgDisp("Himuro","......｛主人公｝. Once again,
congratulations on your graduation.");
MsgDisp("主人公","Hehe. thank you, ｛氷室＊＊｝.");
NSSEye(6,3);
NSSMouth(6,3);
NSSEyeOpenLevel(6,0);
VoicePlay("T040600000_06_060");
MsgDisp("Himuro","From now on and always, show me that smile
closest to me, ......only to me, okay?");
SEStop("EV_SE_754",5.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0,300);
NSSClose();
Wait(300,0);
