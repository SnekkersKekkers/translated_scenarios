MsgDisp("主人公","What kind of TV do you watch?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B070800000_08_010");
MsgDisp("Shirahane","I see.
I'll watch anythin'?
I have to stockpile on information.");
ChEye(8,3);
ChMotion(8,0,1);
VoicePlay("B070800000_08_020");
MsgDisp("Shirahane","Both the news and variety shows.
I also like documentaries.");
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,2,1);
VoicePlay("B070800000_08_030");
MsgDisp("Shirahane","Ah... I don't watch too much comedy.");
MsgDisp("主人公","Why?");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B070800000_08_040");
MsgDisp("Shirahane","Coincidentally, when the comedy shows 
are on, the show my older sister wants
to watch is on at the same time.");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B070800000_08_050");
MsgDisp("Shirahane","And so, at those times the 
lady of the house, my older sister
is top priority.");
MsgDisp("主人公","(I see..
｛大地＊＊｝ is interested in everything.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(8,#1);
ChMouthOpenLevel(8,#1);
ChCheek(8,0);
