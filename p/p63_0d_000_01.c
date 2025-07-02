BGOpen("sc723",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
MsgClose();
ChOpen(21,254,0,0,0,-1,-1,0,1);
ChOpen(22,254,0,0,3,-1,-1,0,2);
VoicePlay("P630D00001_21_000");
MsgDisp("Michiru","Are you giving it your best?");
MsgDisp("主人公","Ah,｛みちる＊｝,｛ひかる＊｝!
welcome.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P630D00001_22_000");
MsgDisp("Hikaru","Look, sis.
Isn't that a super lovely color?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P630D00001_21_010");
MsgDisp("Michiru","Truly.
Did Mari grow this vegetable?");
MsgDisp("主人公","I did too, but so did everyone
at the Horticulture club? We're 
also doing a vegetable sale this year.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("P630D00001_22_010");
MsgDisp("Hikaru","The vegetables Mari grew, huh?
I'm super curious～!");
MsgDisp("主人公","Certainly have a look.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P630D00001_21_020");
MsgDisp("Michiru","Then, 
we'll intrude for a bit.");
MsgClose();
ScrFadeOut(0,0);
