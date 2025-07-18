MsgDisp("主人公","(Huh?
What's up with me?
My heart is thudding super fast...)");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,1,1);
VoicePlay("B070400001_04_510");
MsgDisp("Nanatsumori","What's wrong?
Your face is kinda red, so maybe you have
a fever...");
MsgDisp("主人公","No.
It's not like that, it's that I'm somehow
so nervous my heart is racing...");
VoicePlay("B070400001_04_520");
MsgDisp("Nanatsumori","Heart racing?");
MsgDisp("主人公","Yeah.");
VoicePlay("B070400001_04_530");
MsgDisp("Nanatsumori","You're feeling well right?");
MsgDisp("主人公","Yeah.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B070400001_04_540");
MsgDisp("Nanatsumori","Then it's fine.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B070400001_04_550");
MsgDisp("Nanatsumori","...Am I the cause?");
MsgDisp("主人公","｛七ツ森＊｝?
...Ah.");
ChMotion(4,1,1);
VoicePlay("B070400001_04_560");
MsgDisp("Nanatsumori","What?");
MsgDisp("主人公","My heart might be racing even faster.");
ChEye(4,2);
ChMouth(4,1);
VoicePlay("B070400001_04_570");
MsgDisp("Nanatsumori","No, w...wait.
Maybe, this is something that's spread to
me...");
MsgDisp("主人公","...?");
ChEye(4,4);
ChMouth(4,4);
ChMouthOpenLevel(4,0);
ChCheek(4,5);
VoicePlay("B070400001_04_580");
MsgDisp("Nanatsumori","......");
ChMotion(4,2,1);
ChMouthOpenLevel(4,#1);
VoicePlay("B070400001_04_590");
MsgDisp("Nanatsumori","Stop staring at me now.
My heart's pounding, it really spread...");
MsgDisp("主人公","(I passed on my heart racing...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
