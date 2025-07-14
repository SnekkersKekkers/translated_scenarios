MsgType(0);
MsgClose();
ScrFadeOut(0);
BGOpen("ex240",1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChNanaType(0);
NSSOpen(4,254,2,4,10,#1,10);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("T040400000_04_000");
MsgDisp("Nanatsumori","Ahー...");
MsgDisp("主人公","What's wrong?
｛七ツ森＊｝'s face is bright red.");
VoicePlay("T040400000_04_010");
MsgDisp("Nanatsumori","Um...just now.
That was basically a proposal.");
NSSMouth(4,2);
VoicePlay("T040400000_04_020");
MsgDisp("Nanatsumori","That was hasty...");
MsgDisp("主人公","Hehe.
I was so happy.");
NSSEye(4,4);
NSSMouth(4,4);
NSSEyeOpenLevel(4,10);
VoiceEVSPlay(4);
VoicePlay("T040400000_04_030");
MsgDisp("Nanatsumori","｛主人公｝...");
NSSMouth(4,3);
VoicePlay("T040400000_04_040");
MsgDisp("Nanatsumori","I see. Oh well! It doesn't matter how many
times I propose!");
MsgDisp("主人公","Eh?");
VoicePlay("T040400000_04_050");
MsgDisp("Nanatsumori","Because, isn't that right?
There's no limit to the number of times
you can pledge your love.");
NSSEye(4,3);
NSSMouth(4,3);
NSSEyeOpenLevel(4,10);
VoicePlay("T040400000_04_060");
MsgDisp("Nanatsumori","But when it's really, really time, I'll be
pouring out even more love than I have
today. ...Be prepared, okay?");
SEStop("EV_SE_754",5.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0,300);
NSSClose();
Wait(300,0);