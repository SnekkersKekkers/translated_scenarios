ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(2,5);
ChMouth(2,2);
ChMotion(2,5);
ChCheek(2,8);
VoicePlay("T020200021_02_000");
MsgDisp("Sassa","Oh, ah......
Was that a kiss......?");
MsgDisp("主人公","Yes I also like ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,5);
ChCheek(2,10);
VoicePlay("T020200021_02_010");
MsgDisp("Sassa","Seriously......");
MsgDisp("主人公","｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("T020200021_02_020");
MsgDisp("Sassa","Ah, yeah.
Your kisses are great.");
MsgDisp("主人公","Eh......Already.");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,3);
ChCheek(2,0);
VoicePlay("T020200021_02_030");
MsgDisp("Sassa","Haha! I'm so happy. I guess I wasn't just
forcing you into this.");
MsgDisp("主人公","I was really happy too spending the last
three years challenging myself alongside
｛颯砂＊＊｝.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoiceEVSPlay(2);
VoicePlay("T020200021_02_040");
MsgDisp("Sassa","｛主人公｝......
Thank you.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020200021_02_050");
MsgDisp("Sassa","But, it won't have just been for these
three years. This will continue forever.");
MsgDisp("主人公","Yes!");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020200021_02_060");
MsgDisp("Sassa","Now, tiptoe a bit.");
MsgDisp("主人公","Eh?");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(2,0,0);
Wait(120,0);
StlOpen("ev_02_17");
ScrFadeIn(0);
VoicePlay("T020200021_02_070");
MsgDisp("Sassa","Look,
this way it'll be just right......");
VoicePlay("T020200021_02_080");
MsgDisp("Sassa","......I love you.");
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
