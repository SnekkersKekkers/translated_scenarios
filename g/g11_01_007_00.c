BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(Well, it's time to go home.)");
MsgDisp("主人公","(...Huh? ｛風真＊＊｝ is over there. Let's
chat a bit before we head home.)");
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
ChMotion(1,1);
VoicePlay("G110100700_01_000");
MsgDisp("Kazama","You know, the time that we spend together
seems to go by super fast...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100700_01_010");
MsgDisp("Kazama","It feels like we're the only ones being
left behind?");
MsgDisp("主人公","Hehe, maybe.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100700_01_020");
MsgDisp("Kazama","It's not so bad.
Time flows slowly for us, and everyone
else is busy as usual.");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G110100700_01_030");
MsgDisp("Kazama","...Hm?
I wonder why that is?");
ChEyeOpenLevel(1,#1);
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100700_01_040");
MsgDisp("Kazama","It feels like we've only been together for
an hour, but to everyone else hours have
passed...");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G110100700_01_050");
MsgDisp("Kazama","Is that a life hack?");
MsgDisp("主人公","Umm...
I don't really know.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110100700_01_060");
MsgDisp("Kazama","I also don't really know.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G110100700_01_070");
MsgDisp("Kazama","...The sun sets at the same time for
everyone though, so I won't gain or lose
anything by staying I guess?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100700_01_080");
MsgDisp("Kazama","Let's just chill here until the sun goes
down a little more.");
MsgDisp("主人公","Hehe, yeah!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
