ChEye(8,3);
ChMouth(8,4);
ChEyeOpenLevel(8,10);
VoicePlay("T020801000_08_240");
ChEye(8,0);
ChMouth(8,1);
ChMotion(8,1,1);
ChEyeOpenLevel(8,10);
ChCheek(8,10);
MsgDisp("Shirahane","Hey...
Ehh-∋");
MsgDisp("主人公","This is my answer.
... Did you get it?");
VoicePlay("T020801000_08_250");
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,4,1);
MsgDisp("Shirahane","Yes, I got it but...");
VoicePlay("T020801000_08_260");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,2,1);
MsgDisp("Shirahane","It's no good.
I'm still no match for you.");
MsgDisp("主人公","Hehe!");
VoicePlay("T020801000_08_270");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
MsgDisp("Shirahane","Haha.");
VoicePlay("T020801000_08_280");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,3,1);
ChEyeOpenLevel(8,10);
MsgDisp("Shirahane","... This is no laughing matter!
Let me at least wrap up the happy ending.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(8);
Wait(120,0);
StlOpen("ev_08_10");
ScrFadeIn(0);
VoicePlay("T020801000_08_290");
MsgDisp("Shirahane","I love you.
When I go to college, let's be together
forever.");
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
