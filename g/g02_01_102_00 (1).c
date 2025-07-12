MsgClose();
ChOpen(1,255,0,0,2,#1,#1,0,0);
VoicePlay("G020110200_01_000");
MsgDisp("Kazama","......So hey, the two of us go out a lot,
right?");
MsgDisp("主人公","That's true. I wonder how many times
this makes it.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("G020110200_01_010");
MsgDisp("Kazama","Yeah, that's my point. I don't remember
either.");
MsgDisp("主人公","Hahah.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020110200_01_020");
MsgDisp("Kazama","But I just realized that that's bad.");
MsgDisp("主人公","Huh?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,10);
VoicePlay("G020110200_01_030");
MsgDisp("Kazama","Because it means we've only been on
ordinary dates.");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110200_01_040");
MsgDisp("Kazama","It's my fault. My younger self would be
pissed if he could see me now.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110200_01_050");
MsgDisp("Kazama","Anyway, be ready for big things starting
next time.");
MsgDisp("主人公","(What's gotten into ｛風真＊＊｝?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
