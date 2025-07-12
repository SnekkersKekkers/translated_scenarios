BGOpen("sc624",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChEye(3,3);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛本多＊＊｝!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("H3A0300000_03_000");
MsgDisp("Honda","......Haa!");
MsgDisp("主人公","Huh!　What is it∋");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("H3A0300000_03_010");
MsgDisp("Honda","What is it!?
I was so moved when you won that
I forgot to breathe until now!");
MsgDisp("主人公","Huh∋
But, thanks.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("H3A0300000_03_020");
MsgDisp("Honda","Why are you thanking me?　I should be
the one that's grateful. I was so shocked
it's like I was thrown. In a good way!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("H3A0300000_03_030");
MsgDisp("Honda","Ah, right!
Next time, try that finishing move
on me too∋");
MsgDisp("主人公","(How curious! But I'm really glad
I stayed in the judo club!
Today's the best day ever!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
