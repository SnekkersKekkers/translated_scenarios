BGOpen("ar500",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("I562100004_21_000");
MsgDisp("Michiru","Ah......
We're running low on Mame Daifuku.");
MsgDisp("主人公","It's okay.
I requested more earlier.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("I562100004_21_010");
MsgDisp("Michiru","Thank goodness.
But it looked like we still had a few
earlier......");
MsgDisp("主人公","Hehe. We had a lot of customers buying
Mame Daifuku today so I ordered the next
batch early.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("I562100004_21_020");
MsgDisp("Michiru","As expected of Mari to anticipate our
sales.");
MsgDisp("主人公","(Hehe, I was complimented!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
