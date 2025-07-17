MsgClose();
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0);
ChMouthOpenLevel(4,0);
ScrFadeIn(0);
VoicePlay("P640400003_04_000");
MsgDisp("Nanatsumori","......");
MsgDisp("主人公","｛七ツ森＊｝, would you
like another serving of herb tea?");
ChMouthOpenLevel(4,#1);
VoicePlay("P640400003_04_010");
MsgDisp("Nanatsumori","No...
I'll hold back a bit.");
MsgDisp("主人公","Could it be, it's not tasty?");
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P640400003_04_020");
MsgDisp("Nanatsumori","Well, yeah. It seems like it wasn't
steeped long enough so it's a bit weak.
And...");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("P640400003_04_030");
MsgDisp("Nanatsumori","It looks like the bag of vegetables you're
selling over there is full of insects,
move it... please.");
MsgDisp("主人公","(Aah...
I failed hugely in so many ways...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGMStop();
