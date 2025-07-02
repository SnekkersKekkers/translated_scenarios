MsgDisp("主人公","Yes, I also like ｛本多＊＊｝.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
ChEyeOpenLevel(3,10);
ChCheek(3,5);
VoicePlay("T020301000_03_140");
MsgDisp("Honda","......Haa,
......I'm happy.
I wonder what this feeling is......");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("T020301000_03_150");
MsgDisp("Honda","Since I met you, I've experienced many
different emotions, but this might be the
first time I've felt something like this.");
MsgDisp("主人公","Me too, I also learned a lot of things for
the first time from ｛本多＊＊｝.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
ChCheek(3,0);
VoicePlay("T020301000_03_160");
MsgDisp("Honda","I see, but we still have a long way to go.
I'll teach you lots more.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(3,0,0);
Wait(120,0);
StlOpen("ev_03_17");
ScrFadeIn(0);
VoicePlay("T020301000_03_170");
MsgDisp("Honda","So, you can teach me too.");
MsgDisp("主人公","Yes......");
VoicePlay("T020301000_03_180");
MsgDisp("Honda","Let's experience lots of things together.");
MsgClear();
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
