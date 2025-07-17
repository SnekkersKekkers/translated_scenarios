BGOpen("sc624",0);
ChLayout(1);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChEye(3,3);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
BGMPlay("BGM_C03_HONDA_B",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("H3A0300001_03_000");
MsgDisp("Honda","Good work!");
MsgDisp("主人公","...Yeah.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("H3A0300001_03_010");
MsgDisp("Honda","That last match was really close!
If you just... ah-");
ChMotion(3,2);
VoicePlay("H3A0300001_03_020");
MsgDisp("Honda","I guess there's no point in hypotheticals
about a match.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("H3A0300001_03_030");
MsgDisp("Honda","If you did this or that, you could've won
or turned it around - that thinking is
disrespectful of your hard work.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H3A0300001_03_040");
MsgDisp("Honda","But you should give yourself some credit
for working hard these past three years,
okay?");
MsgDisp("主人公","Yeah...
｛本多＊＊｝, thank you.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("H3A0300001_03_050");
MsgDisp("Honda","Thank you too. I'm glad I got to see the
fruit of your efforts. Good work!");
MsgDisp("主人公","(I lost, but I'm glad I stayed in the judo
club...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
