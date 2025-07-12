BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you very much!
Please come again.");
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,0,0,4,#1,#1,0,0);
VoicePlay("I562100003_21_000");
MsgDisp("Michiru","Hm?
What is this small bag here for?");
MsgDisp("主人公","Ah!
That customer just now asked for it......
I forgot to put it in!");
ChEye(21,5);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("I562100003_21_010");
MsgDisp("Michiru","Oh no!
I'll go after them and hand it over,
so please watch the store, Mari.");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(21,0,30);
MsgDisp("主人公","(I was careless......
I troubled ｛みちる＊｝.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
