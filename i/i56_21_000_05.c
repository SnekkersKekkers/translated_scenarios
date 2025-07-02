BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you very much!
Please come again.");
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,0,0,4,-1,-1,0,0);
VoicePlay("I562100005_21_000");
MsgDisp("Michiru","Have the sweets you displayed in the
showcase already sold out?");
MsgDisp("主人公","Ah, ｛みちる＊｝.
They sold out just now.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("I562100005_21_010");
MsgDisp("Michiru","I see.
The layout and plates were gorgeous,
so everyone was looking at them.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("I562100005_21_020");
MsgDisp("Michiru","Having such a good sense for the
display is cool.");
MsgDisp("主人公","(Hehe, I was complimented!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
