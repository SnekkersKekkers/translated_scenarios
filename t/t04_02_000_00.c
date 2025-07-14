MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",0);
NSSOpen(2,254,3,3,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("T040200000_02_000");
MsgDisp("Sassa","We've walked on this road a lot, huh.");
MsgDisp("主人公","｛颯砂＊＊｝ ran here often.");
NSSEye(2,3);
NSSMouth(2,3);
NSSEyeOpenLevel(2,0);
VoicePlay("T040200000_02_010");
MsgDisp("Sassa","That's right.
From now on, I'll be mindful of what's
around me so I don't act recklessly.");
MsgDisp("主人公","Yes, if it's ｛颯砂＊＊｝, it'll be
alright.");
NSSEye(2,4);
NSSMouth(2,4);
VoicePlay("T040200000_02_020");
MsgDisp("Sassa","I have my dearest, capable manager by my
side, right?");
MsgDisp("主人公","Well, shall run now?");
NSSEye(2,3);
NSSMouth(2,3);
NSSEyeOpenLevel(2,5);
VoicePlay("T040200000_02_030");
MsgDisp("Sassa","Oh, yeah that would be great.");
MsgDisp("主人公","Eh?　Really?");
NSSEye(2,3);
NSSMouth(2,3);
VoicePlay("T040200000_02_040");
MsgDisp("Sassa","What, why are you surprised?
It's easier to run in a uniform than it is
to run in a party outfit.");
MsgDisp("主人公","Hehe, yes......!");
NSSEye(2,3);
NSSMouth(2,3);
NSSEyeOpenLevel(2,5);
VoicePlay("T040200000_02_050");
MsgDisp("Sassa","Let's go! A dash along the beach. Our last
training session together as high school
seniors.");
SEStop("EV_SE_754",5.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0,300);
NSSClose();
Wait(300,0);
