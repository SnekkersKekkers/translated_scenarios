BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc740",0);
ChLayout(1);
ChOpen(31,254,0,0,0,#1,#1,0,0);
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,3);
ScrFadeIn(0);
VoicePlay("P243101000_31_000");
MsgDisp("Goro","Hmmm.... It seems to be a hit with the
audience.");
MsgDisp("主人公","Yes, so far so good.
Now we're going to change the stage, off
we go!");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,4);
VoicePlay("P243101000_31_010");
MsgDisp("Goro","Then, I'll go too12");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","Ehhhh∋
Goro-sensei～∋");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_793",1,0.9);
SEPlay("EV_SE_GAYA_003",0.2,0.8);
SEPlay("EV_SE_624",1);
Wait(180,0);
SEStop("EV_SE_793",3);
SEStop("EV_SE_GAYA_003",3);
SEStop("EV_SE_624",3);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
SEPlay("EV_SE_544");
ChOpen(31,254,4,2,2,#1,#1,0,0);
VoicePlay("P243101000_31_020");
MsgDisp("Goro","Yahoo!
The stage change was perfect♪");
MsgDisp("主人公","Yes! I think the audience will be
surprised to know that Goro-sensei helped
out.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("P243101000_31_030");
MsgDisp("Goro","Hehe! It's been a while since I got that
high school feeling. Thank you▼");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","( I changed the set with Goro-sensei,
this'll be a nice memory!)");
MsgClose();
ScrFadeOut(0);
