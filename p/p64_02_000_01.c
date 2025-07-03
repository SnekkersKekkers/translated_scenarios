ScrFadeIn(0);
ChEye(2,2);
ChMouth(2,2);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P640200001_02_000");
MsgDisp("Sassa","I-it's bitter?
Is herb tea like this?");
MsgDisp("主人公","｛颯砂＊＊｝?
Huh, are you not good with herbs?");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P640200001_02_010");
MsgDisp("Sassa","Is there truly anyone
who's good with this?
I somehow managed to drink it all though.");
MsgDisp("主人公","Ah... 
maybe I blended it wrong?");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P640200001_02_020");
MsgDisp("Sassa","I thought so...
even if it's good for my body, 
it's still bitter.");
MsgDisp("主人公","Uuugh... sorry.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P640200001_02_030");
MsgDisp("Sassa","Well, I'm glad to 
have been the guinea pig.
Could I get some water?");
MsgDisp("主人公","(I should have participated more 
diligently in preparations and
resarched more on herb tea, huh...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
BGMStop();
