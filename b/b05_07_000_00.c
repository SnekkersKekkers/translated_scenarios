ChLayout(1);
BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, a message from ｛御影＊＊｝.
\"The cherry blossoms are beautiful, won't
you come see itー\" ...He says.))");
MsgDisp("主人公","(Looks like ｛御影＊＊｝ is at the
forest park? Alright, it's good weather,
let's head out!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp210",0);
ScrFadeIn(0);
MsgDisp("主人公","Waa...pretty!
I have the cherry blossoms in full bloom
all to myself～!");
VoicePlay("B050700000_07_000");
MsgDisp("Mikage?","Hey hey, there's two of us!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
Wait(63,0);
ChOpen(7,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛御影＊＊｝! Thank you for
inviting me.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B050700000_07_010");
MsgDisp("Mikage","It's nice and empty isn't it?
The weekends will definitely be crowded.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B050700000_07_020");
MsgDisp("Mikage","...The two of us had a bit of a false
start.");
MsgDisp("主人公","Hehe, that's right.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("B050700000_07_030");
MsgDisp("Mikage","Hey, come here.
It's all set up.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","Yees!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.5);
MsgClose();
ScrFadeOut(0);
SEWait();
StlOpen("ev_07_01");
StlEye(7,1);
StlMouth(7,0);
EfctOpen(15);
BGMPlay("BGM_C07_MIKAGE_I",0.01);
ScrFadeIn(0);
Wait(7,0);
VoicePlay("B050700000_07_040");
MsgDisp("Mikage","It's a special-made fruit sandwich.");
MsgDisp("主人公","Amazing! Did you make this yourself,
｛御影＊＊｝?");
StlEye(7,0);
StlMouth(7,0);
VoicePlay("B050700000_07_050");
MsgDisp("Mikage","I bought the bread and kiwi but the
strawberries are home grown.");
StlEye(7,1);
StlMouth(7,1);
StlEyeOpenLevel(7,5,1);
VoicePlay("B050700000_07_060");
MsgDisp("Mikage","She's a beauty isn't she?");
MsgDisp("主人公","Yes!
It's almost a pity I have to eat it.");
StlEye(7,0,0);
StlMouth(7,1);
StlEyeOpenLevel(7,0,1);
VoicePlay("B050700000_07_070");
MsgDisp("Mikage","Isn't itー.
I don't have the courage to bite into it
either.");
StlEye(7,2);
StlMouth(7,1);
VoicePlay("B050700000_07_080");
MsgDisp("Mikage","Then, let's go for it on three.");
MsgDisp("主人公","Hehe, yes.
Thank you for the meal!");
StlEye(7,2);
StlMouth(7,1);
StlEyeOpenLevel(7,0);
VoicePlay("B050700000_07_090");
MsgDisp("Mikage","One, two, three!");
MsgClose();
ScrFadeOut(0,1);
EfctClose();
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex980",0);
MsgClose();
BGOpen("fp210",0);
ChOpen(7,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛御影＊＊｝, thank you for the meal!
It was a very cute and delicious meal.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B050700000_07_100");
MsgDisp("Mikage","I see.
If you were that happy, my strawberries
must be very satisfied too.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("B050700000_07_110");
MsgDisp("Mikage","We have to work to digest our food.
Let's take a stroll.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("主人公","(We were able to enjoy the cherry blossoms
early this year.
｛御影＊＊｝, thank you very much!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
ChPrmTblAdd(7,0);
