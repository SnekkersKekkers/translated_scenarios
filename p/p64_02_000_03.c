ScrFadeIn(0);
ChEye(2,2);
ChMouth(2,2);
ChMotion(2,4);
VoicePlay("P640200003_02_000");
MsgDisp("Sassa","Thank you for the meal...
Hey, was there something wrong?");
MsgDisp("主人公","W-Why is that?");
ChEye(2,2);
ChMouth(2,2);
ChMotion(2,4);
VoicePlay("P640200003_02_010");
MsgDisp("Sassa","Have you tried drinking this herb tea?");
MsgDisp("主人公","Ah, no.
Because I was hectic over setting up the
shop....");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P640200003_02_020");
MsgDisp("Sassa","I thought so. In a way I'm relieved. It
would be troubling if you thought this was
delicious.");
MsgDisp("主人公","Umm...was it not delicious?");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P640200003_02_030");
MsgDisp("Sassa","Well, it's fine.
I thought it was a stimulant drug.
The stimulus is amazing.");
MsgDisp("主人公","Is it really that bad?
Let me have a tas——");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P640200003_02_040");
MsgDisp("Sassa","Ah, no, no.
I can't let you drink something like that.");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("P640200003_02_050");
MsgDisp("Sassa","Haa...don't worry about that.
Check the recipe in the kitchen.
I'm going t drink some other juice...");
MsgClose();
ChClose(2);
Wait(30);
MsgDisp("主人公","(｛颯砂＊＊｝, I'm sorry...
I might not have blended it properly.
A huge failure...)");
MsgClose();
ScrFadeOut(0,0);
BGMStop();
