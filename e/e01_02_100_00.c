BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(...
Alright.
It's getting dark, I should head home.)");
MsgClose();
BGMPlay("BGM_C02_SASSA_A",0.01);
ChOpen(2,255,4,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("E010210000_02_000");
MsgDisp("Sassa","｛主人公｝, doing some
shopping?");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Yeah, I was about to go home.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010210000_02_010");
MsgDisp("Sassa","Alright, then I should go home too.");
MsgDisp("主人公","Hm?
｛颯砂＊＊｝, you were shopping
too?");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("E010210000_02_020");
MsgDisp("Sassa","I just wasted my time.");
MsgDisp("主人公","Huh?");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010210000_02_030");
MsgDisp("Sassa","I heard there was a sale on supplements,
so I came to take a look.
But they were beauty supplements.");
MsgDisp("主人公","Huhu, I see.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,7);
VoicePlay("E010210000_02_040");
MsgDisp("Sassa","Is it funny?
There were only girls there, so I got some
weird looks.....");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("E010210000_02_050");
MsgDisp("Sassa","I ended up buying them though.");
MsgDisp("主人公","Maybe that's why.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010210000_02_060");
MsgDisp("Sassa","Yeah, I got one that's supposed to keep
the skin's firmness and elasticity");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010210000_02_070");
MsgDisp("Sassa","Hmmmh... You don't need it, do you?
Then, I'll give it to my mother as a gift.
You hurry home too!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(2);
MsgDisp("主人公","(Huhu, his mom will be happy!)");
MsgClose();
ScrFadeOut(0);
