MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B120305001_03_000");
MsgDisp("Honda","Find any books you're interested in? If
you want, I can lend them to you. Take
whichever one you like!");
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
