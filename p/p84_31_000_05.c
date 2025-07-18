ChEye(31,1);
ChMouth(31,1);
ChMotion(31,0);
ScrFadeIn(0);
VoicePlay("P843100005_31_000");
MsgDisp("Goro","Haa, Haa...");
MsgDisp("主人公","Goro-sensei, are you alright?");
ChEye(31,1);
ChMouth(31,1);
ChMotion(31,0);
ChEyeOpenLevel(31,0);
VoicePlay("P843100005_31_010");
MsgDisp("Goro","...Do I look alright?");
MsgDisp("主人公","I'm sorry.
It's because I have to patrol as well...");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,2);
ChEyeOpenLevel(31,0);
VoicePlay("P843100005_31_020");
MsgDisp("Goro","It's okay because I had asked you to do
the impossible. But if you had other work
to do, I wanted you to at least say it
beforehand.");
MsgDisp("主人公","I'm sorry...");
ChEye(31,1);
ChMouth(31,1);
ChMotion(31,5);
VoicePlay("P843100005_31_030");
MsgDisp("Goro","Uuugh, my back aches too.
Ah, adieu...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(Goro-sensei seems like he's in pain...I
even made him accompany me on my
errands...That was a huge fail.)");
MsgClose();
ScrFadeOut(0);
