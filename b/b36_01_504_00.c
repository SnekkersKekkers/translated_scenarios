MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex300",2);
BGMPlay("BGM_XMAS_TRHEE",0.01);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Waa, beautiful.");
ChEye(1,4);
VoicePlay("B360150400_01_000");
MsgDisp("Kazama","Looks like it's a good one.
I'm glad I brought you.");
MsgDisp("主人公","Thank you, ｛風真＊＊｝.
But I'm sure everyone else 
wanted to see this too right?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("B360150400_01_010");
MsgDisp("Kazama","This sort of thing is best
done with two people.");
MsgDisp("主人公","There are definitely 
a lot of couples.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
VoicePlay("B360150400_01_020");
MsgDisp("Kazama","Hey, why don't why stand 
side-by-side like the others?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(1);
Wait(30,0);
MsgClose();
SEPlay("EV_SE_552",0.5);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("B360150400_01_030");
MsgDisp("Kazama","Isn't it nice for two people to 
idly stare at the same scenery?");
VoicePlay("B360150400_01_040");
MsgDisp("Kazama","Normally, I look for something 
active to do, but this sort of 
thing is refreshing.");
MsgDisp("主人公","Yeah we can take our time 
and also enjoy ourselves.");
VoicePlay("B360150400_01_050");
MsgDisp("Kazama","Phew... I feel bad for those guys, but
But this has really turned around 
from the noisy first half.");
MsgDisp("主人公","Hey... everyone will 
get angry you know?");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,255,0,4,3,-1,-1,0,0);
VoicePlay("B360150400_01_060");
MsgDisp("Kazama","If we get caught, they'll be 
noisy right? Then, this time 
let's take our time walking.");
MsgDisp("主人公","Hehe, yeah!");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChCheek(1,0);
