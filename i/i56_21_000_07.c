BGOpen("ar500",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("I562100007_21_000");
MsgDisp("Michiru","Hm......?
I've never seen this candy wrapping
before.");
MsgDisp("主人公","Ah.
I tried wrapping that one myself......");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("I562100007_21_010");
MsgDisp("Michiru","Really?
It's so stylish and cute!");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("I562100007_21_020");
MsgDisp("Michiru","The choice of the wrapping paper and
string is also perfect.
It's almost too nice to unwrap, right?");
MsgDisp("主人公","(Thank goodness!
Looks like I did well!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
