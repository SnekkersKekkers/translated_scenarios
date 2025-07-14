MsgType(0);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",0);
NSSOpen(5,254,0,3,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("T040500000_05_000");
MsgDisp("Hiiragi","Is this the right way?");
MsgDisp("主人公","Eh......this is the path we usually take
home?");
NSSEye(5,4);
NSSMouth(5,4);
VoicePlay("T040500000_05_010");
MsgDisp("Hiiragi","Yes. But, this is our first steps after
graduating.");
NSSEye(5,3);
NSSMouth(5,3);
VoicePlay("T040500000_05_020");
MsgDisp("Hiiragi","So it would be troubling if we got it
wrong at the start.");
MsgDisp("主人公","Hehe, yes.");
NSSEye(5,4);
VoicePlay("T040500000_05_030");
MsgDisp("Hiiragi","Ah, you laughed.
That's the laugh that I love.
Then this must be the right direction.");
MsgDisp("主人公","It's not just me, Is ｛柊＊＊＊｝ smiling
too?");
NSSEye(5,3);
NSSCheek(5,5);
VoicePlay("T040500000_05_040");
MsgDisp("Hiiragi","Yes, this is still a whole-hearted smile.
Because from now on you, the one I love,
will continue to smile beside me.");
SEStop("EV_SE_754",5.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0,300);
NSSClose();
Wait(300,0);
