ChEye(4,4);
ChMouth(4,4);
ChEye(4,5);
ChMouth(4,0);
ChMotion(4,5,1);
ChCheek(4,8);
VoicePlay("T020400000_04_240");
MsgDisp("Nanatsumori","Wa-...wait!");
MsgDisp("主人公","Hehe!
That's my answer.");
ChEye(4,4);
ChMouth(4,0);
ChCheek(4,5);
VoicePlay("T020400000_04_250");
MsgDisp("Nanatsumori","A kiss...
So does that mean ...it's OK?");
MsgDisp("主人公","Yes.
I also like ｛七ツ森＊｝.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("T020400000_04_260");
MsgDisp("Nanatsumori","I see...");
ChEye(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
VoicePlay("T020400000_04_270");
MsgDisp("Nanatsumori","Hmー...
But I didn't expect that to come first.");
MsgDisp("主人公","?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("T020400000_04_280");
MsgDisp("Nanatsumori","...Can we start over?");
MsgDisp("主人公","Eh...");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(4,0,0);
Wait(120,0);
StlOpen("ev_04_17");
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("T020400000_04_290");
MsgDisp("Nanatsumori","｛主人公｝.
I...promise to love you, for my whole
life.");
MsgDisp("主人公","｛七ツ森＊｝...");
VoicePlay("T020400000_04_300");
MsgDisp("Nanatsumori","I love you...");
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
