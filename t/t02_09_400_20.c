MsgDisp("主人公","I like Kuya-san, too.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,8);
VoicePlay("T020940020_09_000");
MsgDisp("Kuya","... Yes.
I'm glad.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("T020940020_09_010");
MsgDisp("Kuya","Both of us got into university, right?");
MsgDisp("主人公","Hehe, I'll be alright.
Are you confident, Kuya-san?");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("T020940020_09_020");
MsgDisp("Kuya","Haha!
If I have to retake the exam again, I'll
take back this confession...");
MsgDisp("主人公","Hehe!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,8);
VoicePlay("T020940020_09_030");
MsgDisp("Kuya","It'll be alright.
Because for the first time, I tried my
best just to be with you.");
MsgDisp("主人公","Yes...");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,2,1);
ChEyeOpenLevel(9,0);
ChMouthOpenLevel(9,0);
VoicePlay("T020940020_09_040");
MsgDisp("Kuya","......");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,4,1);
VoicePlay("T020940020_09_050");
MsgDisp("Kuya","Let's kiss.");
MsgDisp("主人公","Eh...?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
ChCheek(9,4);
VoicePlay("T020940020_09_060");
MsgDisp("Kuya","For us, it will be a second kiss, right?");
BGMStop(2.8);
ScrFadeOut(0,1);
ChClose(9);
Wait(120,0);
StlOpen("ev_09_04");
ScrFadeIn(0);
VoicePlay("T020940020_09_070");
MsgDisp("Kuya","Today marks the beginning of our real time
together.
I love you....");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
