BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right...｛風真＊＊｝ said he had
something to say to me while we walk home
......I wonder if something happened?)");
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
ChOpen(1,100,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Speaking of,
what did you want to talk about?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100600_01_000");
MsgDisp("Kazama","......It's fine now.");
MsgDisp("主人公","Eh?");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100600_01_010");
MsgDisp("Kazama","It was regarding Sassa. I thought I had so
many things to ask......but I stopped.");
MsgDisp("主人公","｛颯砂＊＊｝……？");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100600_01_020");
MsgDisp("Kazama","There's no room for that guy in our space
together. He won't fit. He's gargantuan.");
MsgDisp("主人公","Hehe.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100600_01_030");
MsgDisp("Kazama","If I keep gossiping about him, 
he'll come running so I'll stop here.");
SEPlay("EV_SE_646",0,0.8);
SEWait();
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,2);
VoicePlay("G110100600_01_040");
MsgDisp("Kazama","Seriously∋");
MsgClose();
SEPlay("EV_SE_645",0.5,0.6);
ChClose(1,0,30);
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_645");
SEPlay("EV_SE_697",0.2,0.3);
Wait(10,0);
ChOpen(1,100,1,1,0,0,-1,0,0);
VoicePlay("G110100600_01_050");
MsgDisp("Kazama","Phew......this is wrong.
I mean what am I so worried about?
How pathetic, huh?");
ChEyeOpenLevel(1,-1);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100600_01_060");
MsgDisp("Kazama","It's time for us to go.
I'll walk you back.");
MsgDisp("主人公","(｛風真＊＊｝……)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
