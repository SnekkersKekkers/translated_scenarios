ScrFadeIn(0);
ChEye(2,2);
ChMouth(2,2);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P640200005_02_000");
MsgDisp("Sassa","Uhーm.
Thank you for the meal...");
MsgDisp("主人公","｛颯砂＊＊｝, how did it taste?");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P640200005_02_010");
MsgDisp("Sassa","The fresh vegetables were delicious.
But, what was that dressing?");
MsgDisp("主人公","Eh... it's herb dressing?");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P640200005_02_020");
MsgDisp("Sassa","I know that, but the herbs were so
strong...");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P640200005_02_030");
MsgDisp("Sassa","No matter what I ate, all I could taste
was the strong aroma of the herbs. I
couldn't taste the vegetables that you
guys painstakingly grew.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P640200005_02_040");
MsgDisp("Sassa","It's a shame because the store is
wonderful, and the vegetables are
delicious.");
MsgDisp("主人公","I see...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P640200005_02_050");
MsgDisp("Sassa","I'll enjoy these beautiful vegetables at
home.");
MsgClose();
ChClose(2);
Wait(30);
MsgDisp("主人公","(Maybe I should have researched more
during the preparation period and
carefully tasted it.... Uugh, it was a
huge fail....");
MsgClose();
ScrFadeOut(0,0);
BGMStop();
