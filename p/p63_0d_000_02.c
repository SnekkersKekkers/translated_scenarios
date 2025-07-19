BGOpen("sc724",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts in the
Gardening Club...)");
MsgClose();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ChMotion(22,3,1);
VoicePlay("P630D00002_22_000");
MsgDisp("Hikaru","What's here, amazing～!
Seems like it's just in the middle of
school!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P630D00002_21_000");
MsgDisp("Michiru","Truly.
It's as though we went abroad.");
MsgDisp("主人公","Ah, ｛ひかる＊｝, ｛みちる＊｝.
Welcome!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("P630D00002_22_010");
MsgDisp("Hikaru","Mari! ...so that means this is the
Gardening Club's display?");
MsgDisp("主人公","Yeah. It's an organic cafe. We're offering
meals made with the vegetables we grew
ourselves.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("P630D00002_21_010");
MsgDisp("Michiru","Lovely.
Hikaru, should we have lunch here?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P630D00002_22_020");
MsgDisp("Hikaru","Sounds good♪
We'll have Mari's recommendation please!");
MsgDisp("主人公","Certainly.
Then we'll prepare the organic vegetables
salad and herb tea!");
MsgClose();
ScrFadeOut(0,0);
