BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("L060100000_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A");
ChOpen(1,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛風真＊＊｝.");
SEPlay("EV_SE_668");
SEWait();
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("L060100000_01_010");
MsgDisp("Kazama","Here, the thanks for last month.");
MsgDisp("主人公","Thanks!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("L060100000_01_020");
MsgDisp("Kazama","Sorry.
I still have a lot to do, so I gotta go.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(It looks like ｛風真＊＊｝ has
a lot of return gifts to give.
Hm... this is obligatory.)");
MsgClose();
ScrFadeOut(0,0);
