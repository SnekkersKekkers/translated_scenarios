ChEye(8,3);
ChMouth(8,4);
ChEyeOpenLevel(8,10);
ChCheek(8,8);
VoicePlay("T020801000_08_300");
ChEye(8,0);
ChMouth(8,1);
ChMotion(8,5,1);
ChEyeOpenLevel(8,10);
ChCheek(8,10);
MsgDisp("Shirahane","Wa-∋");
MsgDisp("主人公","This, is my answer. ...did you receive it?");
VoicePlay("T020801000_08_310");
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,4,1);
MsgDisp("Shirahane","Well, I definitely got it but...");
VoicePlay("T020801000_08_320");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0,1);
MsgDisp("Shirahane","I can't beat you.
I still have to work hard....");
MsgDisp("主人公","Hehe!");
VoicePlay("T020801000_08_330");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,3,1);
MsgDisp("Shirahane","Haa...
I wonder if I'll be like this even when I
go to university.");
VoicePlay("T020801000_08_340");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,0,1);
MsgDisp("Shirahane","But, I'll be the one to wrap up the happy
ending.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(8);
Wait(120,0);
StlOpen("ev_08_10");
ScrFadeIn(0);
VoiceEVSPlay(8);
VoicePlay("T020801000_08_350");
MsgDisp("Shirahane","｛主人公｝.
I love you, truly.");
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
