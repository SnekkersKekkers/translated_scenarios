BGOpen("sc722",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year the Gardening Club's program
is a cafe. We prepared herb tea and
cookies, but...)");
MsgClose();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,3,3,#1,#1,0,2);
ChMotion(22,4,1);
VoicePlay("P630D00000_22_000");
MsgDisp("Hikaru","Ye～s▼
We came to hang out!");
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝.
Welcome!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("P630D00000_21_000");
MsgDisp("Michiru","A nice fragrance...
is it herbal tea?");
MsgDisp("主人公","Right.
We used the herbs the horticulture
club grew to make tea and cookies.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("P630D00000_22_010");
MsgDisp("Hikaru","That's wonderful, wonderful!
Big sis, let's have tea time here?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P630D00000_21_010");
MsgDisp("Michiru","Let's do that.
Then, let's go by Mari's recommendation.");
MsgDisp("主人公","Certainly.
Two customers, this way pleーase!");
MsgClose();
ScrFadeOut(0,0);
