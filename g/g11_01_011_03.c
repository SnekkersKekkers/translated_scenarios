BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
SEPlay("EV_SE_787");
MsgDisp("主人公","(Ah, a message from
｛風真＊＊｝. \"Let's go home
together today\" huh...Okay, let's get
ready to go home now.)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110101103_01_000");
MsgDisp("Kazama","There's something I want to ask you.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110101103_01_010");
MsgDisp("Kazama","What do you think of Simon's product
selection?");
MsgDisp("主人公","What's this all of a sudden?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110101103_01_020");
MsgDisp("Kazama","The manager asked me this the other day.
He wants to gain new customers.");
MsgDisp("主人公","I see, I can understand why he'd want
｛風真＊＊｝'s opinion.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,7);
VoicePlay("G110101103_01_030");
MsgDisp("Kazama","I'm happy about that, though It's tough to
know what to say.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,#1);
VoicePlay("G110101103_01_040");
MsgDisp("Kazama","As for me, I think it's bette r to
prioritize our current customers.");
MsgDisp("主人公","｛風真＊＊｝ is amazing huh...
you think about the customers in so many
different ways.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,7);
VoicePlay("G110101103_01_050");
MsgDisp("Kazama","If it were my own store, I wouldn't have
to worry about anything.");
MsgDisp("主人公","｛風真＊＊｝'s shop'...
I'm sure it'll be wonderful.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G110101103_01_060");
MsgDisp("Kazama","What, why are you saying that like it's
someone else's business?
...Geez.");
MsgDisp("主人公","(Hmm...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
