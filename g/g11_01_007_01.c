BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(Well, it's time to go home now.)");
MsgDisp("主人公","(......Huh? ｛風真＊＊｝ is over there.
Well, let's have a chat then go home.)");
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
ChOpen(1,100,1,0,2,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("G110100701_01_000");
MsgDisp("Kazama","I lost track of time......
This is a nice season isn't it?");
MsgDisp("主人公","Yeah, it feels nice, huh?
Does ｛風真＊＊｝ also like spring?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100701_01_010");
MsgDisp("Kazama","Yeah, I like it.
Fishing feels nice too.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100701_01_020");
MsgDisp("Kazama","This is the season for mountains and
rivers.");
MsgDisp("主人公","Is summer the season for the sea?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100701_01_030");
MsgDisp("Kazama","I'm not fishing then, but for me winter is
the season for the sea.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100701_01_040");
MsgDisp("Kazama","I'm going to look for treasure brought by
the rough winter waves.");
MsgDisp("主人公","Treasure......");
ChEye(1,1);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100701_01_050");
MsgDisp("Kazama","Are you thinking of something pragmatic
again?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100701_01_060");
MsgDisp("Kazama","Remember what I told you before?
When I was younger, I would look for
driftwood with odd shapes and treasure it.");
MsgDisp("主人公","Ehh, sounds fun.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100701_01_070");
MsgDisp("Kazama","Since you're interested...
Next summer, instead of hitting the water,
how about we look for driftwood together?");
MsgDisp("主人公","Hehe, I'd love to. ");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
