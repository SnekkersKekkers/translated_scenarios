MsgClose();
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("P640400004_04_000");
MsgDisp("Nanatsumori","As expected, it's fresh, huh.");
MsgDisp("主人公","Please try this dipping sauce too.");
ChEye(4,4);
VoicePlay("P640400004_04_010");
MsgDisp("Nanatsumori","Ah... delicious. This suits the flavour of
the vegetables well.");
MsgDisp("主人公","Truly?
That's my own blend.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P640400004_04_020");
MsgDisp("Nanatsumori","Seriously?
I think I really like it.");
MsgDisp("主人公","Hehe, I'm glad.
Would you like another serving of herb
tea?");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P640400004_04_030");
MsgDisp("Nanatsumori","...Yes please.");
ChEye(4,3);
ChMouth(4,3);
VoicePlay("P640400004_04_040");
MsgDisp("Nanatsumori","I'll also buy some vegetables.
I want one of everything that you
handmade.");
MsgDisp("主人公","(｛七ツ森＊｝ seems pleased!
I'm glad I gave it my all in the Gardening
Club for the last three years!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGMStop();
