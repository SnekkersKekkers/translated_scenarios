BGMStop()MsgClose();
ScrFadeOut(0);
BGOpen("tr300",1);
ChLayout(1);
MsgClose();
ChOpen(8,255,4,3,4,10,0,0,0);
ScrFadeIn(0);
VoicePlay("B050800200_08_000");
MsgDisp("Shirahane","......");
MsgDisp("主人公","What's wrong?");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B050800200_08_010");
MsgDisp("Shirahane","Eh...
Ah, no.
It's nothing?");
MsgDisp("主人公","It doesn't look like it's nothing though.");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,4,1);
ChEyeOpenLevel(8,10);
ChMouthOpenLevel(8,0);
VoicePlay("B050800200_08_020");
MsgDisp("Shirahane","......");
ChEye(8,0);
ChMouth(8,4);
VoiceEVSPlay(8);
VoicePlay("B050800200_08_030");
MsgDisp("Shirahane","｛主人公｝.
D'ya think——");
ChMotion(8,0,1);
VoicePlay("B050800200_08_040");
MsgDisp("Shirahane","D'ya think, I'm distractin' ya from your
studies?");
MsgDisp("主人公","That's not...");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B050800200_08_050");
MsgDisp("Shirahane","...I thought ya would say that.
Since you're kind.");
MsgDisp("主人公","｛大地＊＊｝.
Why would you say something like that?");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,2,1);
ChEyeOpenLevel(8,10);
VoicePlay("B050800200_08_060");
MsgDisp("Shirahane","I don't really know why, but I'm relieved.
I was just one-sidedly making ya——");
MsgClose();
ScrFadeOut(0);
ChClose(8);
VoicePlay("B050800200_08_070");
MsgDisp("Shirahane","...Ah.");
MsgClose();
EnvAutoSet(0);
BGMPlay("BGM_C08_DAICHI_B",0.01);
StlOpen("ev_08_03");
StlEye(8,0);
StlMouth(8,1);
EnvPlay("SE_ENV_BG_SC210_AU1",0.5);
ScrFadeIn(0);
VoicePlay("B050800200_08_080");
MsgDisp("Shirahane","Autumn fireflies...");
MsgDisp("主人公","Fireflies during this season?");
StlEye(8,1);
StlMouth(8,2);
VoicePlay("B050800200_08_090");
MsgDisp("Shirahane","These are autumn fireflies. They hang on
strongly until the last minute and
survive. With all they've got.");
MsgDisp("主人公","Hehe.
Like ｛大地＊＊｝?");
StlEye(8,3);
StlMouth(8,0);
VoicePlay("B050800200_08_100");
MsgDisp("Shirahane","Eh?");
MsgDisp("主人公","Right now, ｛大地＊＊｝ seems like he's
giving everything he's got too.");
StlEye(8,3);
StlMouth(8,0);
StlEyeOpenLevel(8,5);
VoicePlay("B050800200_08_110");
MsgDisp("Shirahane","I'm...giving it everything I've got?");
StlEye(8,1);
StlMouth(8,1);
VoicePlay("B050800200_08_120");
MsgDisp("Shirahane","I see.
Maybe I am.");
StlEye(8,1);
StlMouth(8,1);
StlEyeOpenLevel(8,5);
VoicePlay("B050800200_08_130");
MsgDisp("Shirahane","Right now, I'm definitely giving it all
that I've got.
In order to be here with you.");
StlEye(8,2);
StlMouth(8,2);
VoicePlay("B050800200_08_140");
MsgDisp("Shirahane","Maybe this firefly came here to tell me.
To not give up until the end.");
StlEye(8,2);
StlMouth(8,2);
StlEyeOpenLevel(8,0);
VoicePlay("B050800200_08_150");
MsgDisp("Shirahane","...So that's how it is.
Worrying doesn't get you anywhere.");
MsgClose();
ScrFadeOut(0);
EnvAutoSet(1);
StlClose();
BGMVol(0.5,2);
BGOpen("tr300",1);
MsgClose();
ChOpen(8,255,0,3,3,0,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050800200_08_160");
MsgDisp("Shirahane","You and the fireflies gave me courage.");
MsgDisp("主人公","Eh?");
ChEye(8,1);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("B050800200_08_170");
MsgDisp("Shirahane","I've got a goal now.
I can finally see a path to follow.");
ChEye(8,3);
ChMouth(8,3);
ChEyeOpenLevel(8,0);
VoicePlay("B050800200_08_180");
VoiceEVSPlay(8);
MsgDisp("Shirahane","Hehe!
Thanks a lot, ｛主人公｝.");
MsgDisp("主人公","I didn't do anything...");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B050800200_08_190");
MsgDisp("Shirahane","That's fine.
You should just stay like that.
I'm the one who should change.");
MsgDisp("主人公","(Seems like ｛大地＊＊｝ has made a
decision.
A single path...he's found his goal.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(8,0);
