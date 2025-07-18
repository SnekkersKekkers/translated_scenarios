MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("P650700007_07_000");
MsgDisp("Mikage","｛主人公｝.
The customers were not happy, did you
notice too?");
MsgDisp("主人公","Ah, yes...
As I thought, it was no good huh?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P650700007_07_010");
MsgDisp("Mikage","That's right. But, it wasn't the fault of
the vegetables and herbs. Each one grew
well.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P650700007_07_020");
MsgDisp("Mikage","The final step.
Knowledge about herbal tea, the timing of
harvesting, how to use scissors.");
MsgDisp("主人公","Yes...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P650700007_07_030");
MsgDisp("Mikage","This might be your last cultural festival,
but with soil, and your love, plants will
grow. From now on too, keep gardening!");
MsgDisp("主人公","(Uuugh, even though this was the last
cultural festival of my high school
life...I should have tried harder.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
