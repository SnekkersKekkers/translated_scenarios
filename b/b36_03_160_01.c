MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne330",0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChLayout(1);
SEPlay("EV_SE_715");
ScrFadeIn(0);
Wait(70,0);
SEPlay("EV_SE_GAYA_025");
Wait(30,0);
BGMPlay("BGM_C03_HONDA_B",0.01);
VoicePlay("B360316001_03_000");
MsgDisp("Honda","Hey, did you see that? I've never seen 
anyone so good at a dance game before!");
SEStop("EV_SE_GAYA_025",1);
MsgDisp("主人公","Haha, yeah, they were really cool!");
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B360316001_03_010");
MsgDisp("Honda","...");
MsgDisp("主人公","Um... is something wrong?");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B360316001_03_020");
MsgDisp("Honda","Alright, I'm going to give it a try too!");
MsgDisp("主人公","Wait, what∋");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(3);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
VoicePlay("B360316001_03_030");
MsgDisp("Honda","Ugh... I can't keep up at all...");
MsgDisp("主人公","｛本多＊＊｝ you picked a really 
high-difficulty stage right off the bat.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,3,1);
SEPlay("EV_SE_544");
MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0);
VoicePlay("B360316001_03_040");
MsgDisp("Honda","But... if I don't push myself, I'd look 
so bad in comparison.");
MsgDisp("主人公","Huh?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("B360316001_03_050");
MsgDisp("Honda","You said that person was cool earlier,
so...");
MsgDisp("主人公","Huh∋　You went overboard just because of 
that?");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B360316001_03_060");
MsgDisp("Honda","Yeah, your one comment has me sweating 
buckets.");
MsgDisp("主人公","(｛本多＊＊｝, are you okay..?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChCheek(3,0);
