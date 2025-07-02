BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf510",0);
BGMPlay("BGM_PLACE_PLANETA_RIUM",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B360105100_01_000");
MsgDisp("Kazama","It's quiet huh.
It's hard to believe it was so 
noisy just a minute ago.");
MsgDisp("主人公","Hehe.
That's because it was s
o lively today.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360105100_01_010");
MsgDisp("Kazama","Well yeah. But you're supposed 
to go to these kinds of 
places as a pair, right?");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B360105100_01_020");
MsgDisp("Kazama","So, let's re-do it 
from the start.");
MsgDisp("主人公","Hey.. don't you feel 
bad for everyone?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("B360105100_01_030");
MsgDisp("Kazama","Is that so?
But that also adds to 
the spice, doesn't it?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B360105100_01_040");
MsgDisp("Kazama","But those guys have good
intuition. It'll be a pain in 
the ass if they find out.");
MsgDisp("主人公","｛風真＊＊｝,
You seem like you're
having a lot of fun.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
Wait(90,1);
MsgClose();
ChClose(1,0,30);
ChLayout(0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,255,7,4,2,-1,-1,0,0);
MsgDisp("主人公","Eh, what's wrong?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360105100_01_050");
MsgDisp("Kazama","Just checking something.
After all, I'm the 
only one you see.");
SEPlay("EV_SE_038");
SEWait();
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360105100_01_060");
MsgDisp("Kazama","Come on, let's start.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(Maybe I was a bit startled...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChOpen(1,255,7,0,0,-1,-1,0,0,0,0);
