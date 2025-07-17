MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc010",1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
This will be the last time I walk down
this road...)");
VoiceEVSPlay(1);
VoicePlay("T020160000_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgDisp("主人公","∋");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_HANYOU_D",0.01);
ChOpen(1,254,0,0,0,#1,#1,0,0);
VoicePlay("T020160000_01_010");
MsgDisp("Kazama","Did I make it in time?");
MsgDisp("主人公","｛風真＊＊｝!
The graduation ceremony is already over∋");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("T020160000_01_020");
MsgDisp("Kazama","I see.
Then I guess I won't graduate.");
MsgDisp("主人公","Eh...");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("T020160000_01_030");
MsgDisp("Kazama","No, not'Eh'.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("T020160000_01_040");
MsgDisp("Kazama","I want you to look back on the past three
years since your entrance ceremony.");
MsgDisp("主人公","Eeehhh∋");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("T020160000_01_050");
MsgDisp("Kazama","Now we're going to reflect hard together.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("T020160000_01_060");
MsgDisp("Kazama","We've made too little progress.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("T020160000_01_070");
MsgDisp("Kazama","Hey, shall we go to a coffee shop?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","Ah...
｛風真＊＊｝, wait!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop(6);
MsgClose();
ScrFadeOut(0,0,120);
Wait(300,0);
