MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B360103301_01_000");
MsgDisp("Kazama","Looking at it again,
this place is quite
intricately decorated. ");
MsgDisp("主人公","Ehh, did you only 
notice this now?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B360103301_01_010");
MsgDisp("Kazama","That's right.
I'm not restlessly looking 
around like you are, 
I'm always concentrated.");
MsgDisp("主人公","But there's so much 
interesting fish here?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B360103301_01_020");
MsgDisp("Kazama","Right.
Well, to me you're much 
more interesting.");
MsgDisp("主人公","Ehh?
That's cruel.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360103301_01_030");
MsgDisp("Kazama","I'm not calling you weird, 
I'm calling you cute.");
MsgDisp("主人公","Hmmph.
But, are you saying the 
fish here aren't cute?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B360103301_01_040");
MsgDisp("Kazama","Don't be so huffy.
Come on, let's take our 
time in looking around.");
SEPlay("EV_SE_544");
MsgClose();
ChClose(1,0,30);
ChLayout(0);
MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0,0,30);
MsgDisp("主人公","Aren't you a bit close?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360103301_01_050");
MsgDisp("Kazama","It's finally just the two of us.
I also want you to let me 
take a thorough look.");
MsgDisp("主人公","Hey...
I'm not a deep-sea fish!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChCheek(1,0);
