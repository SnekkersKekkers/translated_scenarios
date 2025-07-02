BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right......today ｛風真＊＊｝
invited me to walk home together.)");
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
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100100_01_000");
MsgDisp("Kazama","Phew......I talked this much.
It's this time already.");
MsgDisp("主人公","It's gotton so late, huh? ......hey, but
didn't you have business with me?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100100_01_010");
MsgDisp("Kazama","Ah, that's right huh. It's completely
trivial, it's just about the school
cafeteria.");
MsgDisp("主人公","Cafeteria?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,2);
VoicePlay("G110100100_01_020");
MsgDisp("Kazama","Right, our food choices have been
overlapping.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChMouthOpenLevel(1,0);
VoicePlay("G110100100_01_030");
MsgDisp("Kazama","…………");
MsgDisp("主人公","......Is that it?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100100_01_040");
MsgDisp("Kazama","That's it.");
MsgDisp("主人公","Ehhhー?");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100100_01_050");
MsgDisp("Kazama","That's why I siad it was trivial.
Or is it bad to call you for 
something trivial?");
MsgDisp("主人公","Hehe, that's not true.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100100_01_060");
MsgDisp("Kazama","Then, I'll invite you to walk together 
again when our menus overlap.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
