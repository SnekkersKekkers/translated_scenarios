ChEye(8,3);
ChMouth(8,4);
ChEyeOpenLevel(8,10);
MsgDisp("主人公","I also... like ｛大地＊＊｝.");
VoicePlay("T020801000_08_170");
ChEye(8,0);
ChMouth(8,4);
MsgDisp("Shirahane","Like...?");
MsgDisp("主人公","Yes, like.");
VoicePlay("T020801000_08_180");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,4,1);
ChEyeOpenLevel(8,0);
ChCheek(8,10);
MsgDisp("Shirahane","Yes...
I also really like you too.");
MsgDisp("主人公","Hehe!");
VoicePlay("T020801000_08_190");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,3,1);
MsgDisp("Shirahane","All right, the legend came true!
I just opened two doors!");
MsgDisp("主人公","Ah... that's right.
The church and lighthouse door both
opened, right?");
VoicePlay("T020801000_08_200");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
MsgDisp("Shirahane","That's right.
I've received blessings from both schools,
isn't that unheard of?");
MsgDisp("主人公","Haha, isn't it.");
VoicePlay("T020801000_08_210");
ChEye(8,4);
ChMouth(8,3);
MsgDisp("Shirahane","Hey, even when I go to University, let's
always be together.");
VoicePlay("T020801000_08_220");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,2,1);
ChEyeOpenLevel(8,0);
MsgDisp("Shirahane","I'm a beginner boyfriend, but I hope
you'll be okay with that.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(8);
Wait(120,0);
StlOpen("ev_08_10");
ScrFadeIn(0);
VoicePlay("T020801000_08_230");
MsgDisp("Shirahane","I love you.
I'll always treasure you.");
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
