ChEye(4,4);
ChMouth(4,4);
MsgDisp("主人公","I also like ｛七ツ森＊｝......");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
ChMouthOpenLevel(4,0);
ChCheek(4,5);
VoicePlay("T020400000_04_180");
MsgDisp("Nanatsumori","…………");
ChEye(4,4);
ChMouthOpenLevel(4,#1);
VoicePlay("T020400000_04_190");
MsgDisp("Nanatsumori","I wanted that answer.
......Thank you.");
MsgDisp("主人公","Hehe.");
VoicePlay("T020400000_04_200");
MsgDisp("Nanatsumori","I've moved on from being an ambiguous
person. From now on, I want to cherish you
as a man.");
MsgDisp("主人公","Thank you. I too......");
ChMouth(4,0);
ChMotion(4,1,1);
ChCheek(4,0);
VoicePlay("T020400000_04_210");
MsgDisp("Nanatsumori","Wait.
If we make a vow here......");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(4,0,0);
Wait(120,0);
StlOpen("ev_04_17");
ScrFadeIn(0);
VoicePlay("T020400000_04_220");
MsgDisp("Nanatsumori","I, Nanatsumori Minoru promise to love you
for the rest of my life.");
VoiceEVSPlay(4);
VoicePlay("T020400000_04_230");
MsgDisp("Nanatsumori","｛主人公｝, I love you.");
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
