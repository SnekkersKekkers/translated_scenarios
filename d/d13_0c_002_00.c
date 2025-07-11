MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgDisp("主人公","(It's gotten late now.
Haaa... I don't have a lot of days
left at Habataki High School...)");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("sc131",1);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,254,0,0,4,-1,-1,0,1,0,30);
ChOpen(6,254,1,1,0,0,-1,0,2,0,30);
ChEye(5,4);
ChMotion(5,4);
VoiceEVSPlay(5);
VoicePlay("D130C00200_05_000");
MsgDisp("Hiiragi","｛主人公｝.
Are you headed home now?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("D130C00200_06_000");
MsgDisp("Himuro","You're a bit late.");
MsgDisp("主人公","Ah, were you two waiting for me?
Thank you.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D130C00200_05_010");
MsgDisp("Hiiragi","Yes, well to be more precise; 
the three of us were.");
MsgDisp("主人公","?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D130C00200_06_010");
MsgDisp("Himuro","Hey, over here.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
ChClose(5,0,30);
ChClose(6,0,30);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc210",1);
ChLayout(2);
MsgClose();
ChOpen(5,254,0,0,4,-1,-1,0,0,0,30);
ChOpen(6,254,7,0,0,-1,-1,0,1,0,30);
ChOpen(7,37,0,0,0,-1,-1,0,2,0,30);
ScrFadeIn(0);
VoicePlay("D130C00200_06_020");
MsgDisp("Himuro","Kojiro-sensei, sorry 
to keep you waiting.");
MsgDisp("主人公","｛御影＊＊｝?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D130C00200_07_000");
MsgDisp("Mikage","Oh, is that all of us now?");
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("D130C00200_05_020");
MsgDisp("Hiiragi","Using the vegetables the horticulture
club grew, Mikage-sensei prepared 
a barbecue for us.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("D130C00200_06_030");
MsgDisp("Himuro","I'll have a little bit 
as long as it's not eggplant.");
ChEye(7,3);
ChMouth(7,0);
ChMotion(7,3);
ChEyeOpenLevel(7,0);
VoicePlay("D130C00200_07_010");
MsgDisp("Mikage","Good thinking, Inori.
All the vegetables I grow are delicious.
Try some.");
ChEye(5,4);
ChMotion(5,4);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D130C00200_07_020");
MsgDisp("Mikage","You and Yanosuke too.
This secret barbecue, is your 
last party at Habataki High School.");
MsgDisp("主人公","Thank you very much...!");
MsgDisp("主人公","(I'm so happy to have had 
a barbecue with everyone at the end!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
