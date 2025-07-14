BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Habatcher comes out today!
I'll drop by the bookstore.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ar600",0);
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,4,2,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("G110300300_03_000");
MsgDisp("Honda","｛主人公｝. Sorry......");
MsgDisp("主人公","Ah ｛本多＊＊｝. What's wrong?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("G110300300_03_010");
MsgDisp("Honda","The latest edition of 'Habatcher' just sold
out......");
MsgDisp("主人公","Ah, I see.
But, I understand.");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgClose();
BGOpen("ev003",0);
ChOpen(3,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110300300_03_020");
MsgDisp("Honda","Haaa, actually I hid a copy for you in
this gap here......");
MsgDisp("主人公","Eh!");
ChEye(3,2);
ChMouth(3,2);
ChMotion(3,2);
VoicePlay("G110300300_03_030");
MsgDisp("Honda","But, I'm sorry.
I was conflicted on what to do as a store
clerk and what to do as your friend——");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300300_03_040");
MsgDisp("Honda","But the store clerk version of me won in
the end.");
MsgDisp("主人公","I see.
But as a store clerk, you did the right
thing.");
ChEye(3,2);
ChMouth(3,2);
ChMotion(3,0);
VoicePlay("G110300300_03_050");
MsgDisp("Honda","Haaa......I wonder if there's another book
wedged around here......?");
MsgDisp("主人公","(Hehe. Thank you, ｛本多＊＊｝. )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
