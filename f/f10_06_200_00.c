BGOpen("sc500",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, 
...it's about time to head home.)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100620000_06_000");
MsgDisp("Himuro","I'm sorry, but if you have 
something to do, please postpone it.");
MsgDisp("主人公","Eh?");
VoicePlay("F100620000_03_000");
MsgDisp("Honda?","Ah, there you are!
Nori-kun!");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F100620000_06_010");
MsgDisp("Himuro","...Tsk.");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
ChPosition(6,1);
MsgClose();
SEWait();
ChOpen(3,254,0,0,0,#1,#1,0,2);
MsgDisp("主人公","｛本多＊＊｝?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
VoiceEVSPlay(3);
VoicePlay("F100620000_03_010");
MsgDisp("Honda","｛主人公｝,
you're here too!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("F100620000_03_020");
MsgDisp("Honda","I called out to Nori-Kun, 
but he didn't realize, 
so I ran after him!");
ChEye(6,1);
ChMouth(6,2);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F100620000_06_020");
MsgDisp("Himuro","I ran away because
I realized...");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("F100620000_03_030");
MsgDisp("Honda","So! When should we do it?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("F100620000_06_030");
MsgDisp("Himuro","That's why I said I'm not going.");
ChSet(3,5);
VoicePlay("F100620000_03_040");
MsgDisp("Honda","Ehhh! Why∋");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100620000_06_040");
MsgDisp("Himuro","I've told you many times
before, haven't I? Cup noodles are fine
for me, that's all! See you then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
ChPosition(3,0);
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("F100620000_03_050");
MsgDisp("Honda","Nori-kun is so stubborn～!
Wait for meー!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChClose(3);
MsgDisp("主人公","(W-What is going on...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
