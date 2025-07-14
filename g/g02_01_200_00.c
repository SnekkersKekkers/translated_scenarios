MsgClose();
ChOpen(1,255,0,4,2,#1,#1,0,0);
VoicePlay("G020120000_01_000");
MsgDisp("Kazama","Okay, so, I can take you being here with
me as me having a chance, yeah?");
MsgDisp("主人公","Huh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020120000_01_010");
MsgDisp("Kazama","I tried not to think about it......but
that didn't work out.
That guy just gets on my nerves.");
ChEye(1,1);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120000_01_020");
MsgDisp("Kazama","Why isn't it me?");
MsgDisp("主人公","｛風真＊＊｝?");
ChMotion(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
VoicePlay("G020120000_01_030");
MsgDisp("Kazama","......Don't worry about it.
But I am serious.");
MsgDisp("主人公","(Isn't ｛風真＊＊｝ acting strange
today......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
