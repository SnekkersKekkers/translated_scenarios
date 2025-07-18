ChEye(5,4);
ChMouth(5,2);
ChMotion(5,0,1);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("P840500001_05_000");
MsgDisp("Hiiragi","｛主人公｝.
The confectionaries we used to welcome the
guests....where did you purchase it from?");
MsgDisp("主人公","Eh?
They were sweets from the staffroom
though...");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("P840500001_05_010");
MsgDisp("Hiiragi","I see. then it's inevitable they would
take offence to that.");
MsgDisp("主人公","Eh?
What's wrong?");
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("P840500001_05_020");
MsgDisp("Hiiragi","Those sweets, were brought in as a gift
from one of the guests...");
MsgDisp("主人公","Ehhh∋
I-I'm very sorry.
What should I do...");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("P840500001_05_030");
MsgDisp("Hiiragi","I sincerely apologized, and I think they
understood, but I'm guessing it's an
unpleasant memory.");
MsgDisp("主人公","(Haa...a huge fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
