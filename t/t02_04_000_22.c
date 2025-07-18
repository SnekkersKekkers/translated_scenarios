ChEye(4,4);
ChMouth(4,4);
ChEye(4,5);
ChMouth(4,1);
ChMotion(4,5,1);
ChCheek(4,10);
VoicePlay("T020400000_04_310");
MsgDisp("Nanatsumori","Uwah∋");
MsgDisp("主人公","I also love ｛七ツ森＊｝!");
ChEye(4,4);
ChMouth(4,4);
ChCheek(4,7);
VoicePlay("T020400000_04_320");
MsgDisp("Nanatsumori","Ah...yeah.
I also like you but...");
ChMouth(4,3);
ChMotion(4,0,1);
ChCheek(4,0);
VoicePlay("T020400000_04_330");
MsgDisp("Nanatsumori","This answer is totally unexpected.");
MsgDisp("主人公","Hehe!");
ChMotion(4,1,1);
VoicePlay("T020400000_04_340");
MsgDisp("Nanatsumori","This is no laughing matter.
This is a memory that'll remain forever.");
MsgDisp("主人公","Ah...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("T020400000_04_350");
MsgDisp("Nanatsumori","Okay, let's overwrite it.
Come here.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(4,0,0);
Wait(120,0);
StlOpen("ev_04_17");
ScrFadeIn(0);
MsgDisp("主人公","!");
VoicePlay("T020400000_04_360");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori","I swear here and now that I'll cherish you
for the rest of my life.
I love you ｛主人公｝...");
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
