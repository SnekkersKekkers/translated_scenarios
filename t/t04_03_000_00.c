MsgType(0);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",1);
NSSOpen(3,254,0,3,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("T040300000_03_000");
MsgDisp("Honda","That's right.
During the Christmas Party we went to the
Middle School library, right?");
MsgDisp("主人公","Yes. That cute pop-up book.");
NSSEye(3,4);
NSSMouth(3,0);
VoicePlay("T040300000_03_010");
MsgDisp("Honda","Right, right.
A family of four enjoying Christmas in a big
white house.");
NSSEye(3,0);
NSSMouth(3,0);
VoicePlay("T040300000_03_020");
MsgDisp("Honda","A big tree popped out.
When I was younger, I thought it was like my
own house.");
MsgDisp("主人公","｛Honda＊＊｝ is also from a family of four
isn't he?");
NSSEye(3,0);
NSSMouth(3,0);
NSSEyeOpenLevel(3,0);
VoicePlay("T040300000_03_030");
MsgDisp("Honda","Yeah. But you now, things are different now.
At our house, I mean.");
MsgDisp("主人公","Eh?");
NSSEye(3,1);
NSSMouth(3,3);
VoicePlay("T040300000_03_040");
MsgDisp("Honda","I don't know if it's just four living there
anymore?");
NSSEye(3,3);
NSSMouth(3,3);
VoicePlay("T040300000_03_050");
MsgDisp("Honda","There's lots of creatures living there
now too.");
MsgDisp("主人公","Hehe, yes.");
SEStop("EV_SE_754",5.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0,300);
NSSClose();
Wait(300,0);
