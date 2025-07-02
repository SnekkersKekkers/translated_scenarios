BGOpen("ar500",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,3,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("I562100000_21_000");
MsgDisp("Michiru","No, Mari!
That pastry doesn't go in the fridge.");
MsgDisp("主人公","Hm?
It's fresh but doesn't need to be 
chilled?");
ChEye(21,2);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("I562100000_21_010");
MsgDisp("Michiru","If the container isn't sealed, the
water will escape and it'll be stiff.
Remember that.");
MsgDisp("主人公","(Oh no.
I need to learn how to store
these properly......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
