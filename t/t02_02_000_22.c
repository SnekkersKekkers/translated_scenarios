ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,4);
ChCheek(2,10);
VoicePlay("T020200022_02_000");
MsgDisp("Sassa","Wait. That 
......hug∋");
MsgDisp("主人公","Yes. I also like ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("T020200022_02_010");
MsgDisp("Sassa","Really, I'm so happy");
MsgDisp("主人公","I was also happy to have had the
opportunity to pursue my dream alongside
｛颯砂＊＊｝ for three years.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,0);
VoiceEVSPlay(2);
VoicePlay("T020200022_02_020");
MsgDisp("Sassa","｛主人公｝......
Thank you.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020200022_02_030");
MsgDisp("Sassa","But, it won't have just been for these
three years. This will continue forever.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020200022_02_040");
MsgDisp("Sassa","That's right.
And as for my match with you.");
MsgDisp("主人公","Eh?");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(2,0,0);
Wait(120,0);
StlOpen("ev_02_17");
ScrFadeIn(0);
VoicePlay("T020200022_02_050");
MsgDisp("Sassa","I'm not going to just let myself get
beaten anymore. Look at me.");
VoicePlay("T020200022_02_060");
MsgDisp("Sassa","I wanted to touch you too.
...as I love you so much.");
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
