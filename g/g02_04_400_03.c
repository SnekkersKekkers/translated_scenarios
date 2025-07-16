MsgClose();
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
VoicePlay("G020440003_04_000");
MsgDisp("Nanatsumori","I'm bad with bugs, but fireflies at night
are a different story.");
MsgDisp("主人公","Hehe.");
ChMotion(4,1,1);
VoicePlay("G020440003_04_010");
MsgDisp("Nanatsumori","You can't see the bodies but the light is
really beautiful.");
ChEye(4,4);
ChMouth(4,4);
VoicePlay("G020440003_04_020");
MsgDisp("Nanatsumori","Ah...
Kind of like a model on stage.");
MsgDisp("主人公","What do you mean?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("G020440003_04_030");
MsgDisp("Nanatsumori","To look beautiful to others, you cover up
parts to be invisible and dress other
parts to the fullest.");
ChEye(4,4);
ChMotion(4,1,1);
VoicePlay("G020440003_04_040");
MsgDisp("Nanatsumori","They are also communicating...
Mostly for courtship, but also doing their
best to appeal to each other.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("G020440003_04_050");
MsgDisp("Nanatsumori","It's really amazing how fireflies manage
to even be friends with humans.");
MsgDisp("主人公","Yeah, you're right!
... Ah, ｛七ツ森＊｝, a
firefly landed on your shoulder.");
ChEye(4,5);
ChMouth(4,5);
ChMotion(4,5,1);
VoicePlay("G020440003_04_060");
MsgDisp("Nanatsumori","No way∋");
ChEye(4,1);
ChMouth(4,5);
ChMotion(4,2,1);
ChEyeOpenLevel(4,0);
VoicePlay("G020440003_04_070");
MsgDisp("Nanatsumori","Get it!
Please!
I don't want to do skinship with it!");
MsgDisp("主人公","(｛七ツ森＊｝, you really don't like
bugs...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
