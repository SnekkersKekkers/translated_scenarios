MsgDisp("主人公","Yes, I also like ｛本多＊＊｝.");
ChEye(3,4);
ChMouth(3,3);
ChMouth(3,4);
ChEyeOpenLevel(3,0);
ChCheek(3,10);
VoicePlay("T020320000_03_160");
MsgDisp("Honda","......Haa, ......I'm happy.
I wonder what this feeling is......");
MsgDisp("主人公","I'm happy too.
｛本多＊＊｝, thank you for finding me.");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,0,1);
ChCheek(3,0);
VoicePlay("T020320000_03_170");
MsgDisp("Honda","Well, sorry it took so long!
And thank you.");
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("T020320000_03_180");
MsgDisp("Honda","I have to thank Ryou-kun and Mii-kun too.");
MsgDisp("主人公","Hehe, that's right isn't it?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020320000_03_190");
MsgDisp("Honda","Ah, but maybe it'll be okay for now......");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(3,0,0);
Wait(120,0);
StlOpen("ev_03_17");
ScrFadeIn(0);
VoicePlay("T020320000_03_200");
MsgDisp("Honda","I've experienced a lot of different
emotions, but this might be the first time
I've felt something like this.");
VoicePlay("T020320000_03_210");
MsgDisp("Honda","But we still have a long way to go.
I'll teach you a lot more.");
VoicePlay("T020320000_03_220");
MsgDisp("Honda","I love you.
I'm glad I found you.");
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
