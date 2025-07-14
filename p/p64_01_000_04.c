ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("P640100004_01_000");
MsgDisp("Kazama","｛主人公｝, Thank you for the meal.");
MsgDisp("主人公","Was it delicious?");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P640100004_01_010");
MsgDisp("Kazama","It was delicious.
It feels just like it's been freshly
harvested.");
MsgDisp("主人公","Thank you.
I'm glad I grew it with care.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P640100004_01_020");
MsgDisp("Kazama","It's a relief to be able to see the face
of the producer, huh?");
MsgDisp("主人公","Hehe, that's right.
Mikage-sensei was in charge of the salad
leaves.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P640100004_01_030");
MsgDisp("Kazama","Mikage-sensei's vegetables...
I only like yours though.");
MsgDisp("主人公","I grew the tomatoes and cucumbers.
I put them in the salad too, but they're
also for sale, you know?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P640100004_01_040");
MsgDisp("Kazama","I see, 
I'll buy some before they sell out.");
ChClose(1,0,30);
MsgDisp("主人公","(Yay! I'm so glad I've worked hard for
three years to make people this happy!)");
MsgClose();
ScrFadeOut(0,0);
BGMStop();
