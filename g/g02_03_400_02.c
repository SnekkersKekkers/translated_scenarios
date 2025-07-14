ChLayout(1);
MsgClose();
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("G020340002_03_000");
MsgDisp("Honda","Lately, I've been thinking about getting
another piercing.");
MsgDisp("主人公","You've only had your ears pierced before
right?");
ChSet(3,3);
VoicePlay("G020340002_03_010");
MsgDisp("Honda","Ding ding!
Right, just my ears.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("G020340002_03_020");
MsgDisp("Honda","But the other day, I happened to see
someone on a foreign site with piercings
all over their body.");
MsgDisp("主人公","Eh, all over......?");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("G020340002_03_030");
MsgDisp("Honda","Don't worry, I'm not thinking about going
that far.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G020340002_03_040");
MsgDisp("Honda","But, like, the belly button...... oh, and
maybe even the tongue seems interesting. I
wonder what it feels like when you eat!");
MsgDisp("主人公","Maybe...... Rather than for fashion this
is out of curiosity?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("G020340002_03_050");
MsgDisp("Honda","Right, right!
Once you start with one, two, three, it
could get pretty interesting.");
MsgDisp("主人公","Y-Yeah......");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G020340002_03_060");
MsgDisp("Honda","Ah, I see.
Sorry, didn't mean to worry you.");
MsgDisp("主人公","Eh, but——");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("G020340002_03_070");
MsgDisp("Honda","I wouldn't go so far as to satisfy my
curiosity if it makes anyone, especially
you, uncomfortable.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("G020340002_03_080");
MsgDisp("Honda","Yes, that's the end of this conversation!");
MsgDisp("主人公","(｛本多＊＊｝......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
