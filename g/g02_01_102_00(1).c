MsgClose();
ChOpen(1,255,0,0,2,#1,#1,0,0);
VoicePlay("G020110200_01_000");
MsgDisp("Kazama","......Hey, we've gone out together quite a
lot, haven't we?");
MsgDisp("主人公","Yeah. 
I wonder how many times it's been.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("G020110200_01_010");
MsgDisp("Kazama","That's the thing.
I don't remember either.");
MsgDisp("主人公","Hehe.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020110200_01_020");
MsgDisp("Kazama","But you know, I just realized that there's
something wrong with that.");
MsgDisp("主人公","Eh?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,10);
VoicePlay("G020110200_01_030");
MsgDisp("Kazama","It means we've only been able to do
ordinary dates, right?");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110200_01_040");
MsgDisp("Kazama","That's my fault.
The old me would be mad at this.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110200_01_050");
MsgDisp("Kazama","Anyway, get ready for what's coming next.");
MsgDisp("主人公","(What's wrong, ｛風真＊＊｝? )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
