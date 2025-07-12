BGOpen("ar300",0);
ChLayout(1);
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,35,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(8);
VoicePlay("D020800400_08_000");
MsgDisp("Shirahane","｛主人公｝, it's already break time, yeah?
I'll finish up here so you can go back
to the office first.");
MsgDisp("主人公","Okay.
I'll make some tea then.
Do you want the same as usual?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
ChEyeOpenLevel(8,0);
VoicePlay("D020800400_08_010");
MsgDisp("Shirahane","Bet.");
ChEye(8,0);
ChMouth(8,4);
VoicePlay("D020800400_08_020");
MsgDisp("Shirahane","Ya really are such an honest, 
hard-working person, an honor student 
too......It's inspiring.");
MsgDisp("主人公","But ｛大地＊＊｝ is the same way.");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,2,1);
VoicePlay("D020800400_08_030");
MsgDisp("Shirahane","I'm no match for you.
I'm honest and hard-working, but I'm not
an honor student.");
MsgDisp("主人公","Really?");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,4,1);
VoicePlay("D020800400_08_040");
MsgDisp("Shirahane","Hmm.
If we're talking about Hane High,
I'm at the top of the list but......");
MsgDisp("主人公","Eh, that's amazing!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("D020800400_08_050");
MsgDisp("Shirahane","Haha!
But, Hane High and Haba High are
like night and day.");
MsgDisp("主人公","(It seems like ｛大地＊＊｝ is both a
top student and good at sports......∋)");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,4,1);
VoicePlay("D020800400_08_060");
MsgDisp("Shirahane","I just enrolled in the same school as
my bro without thinking about it, but
maybe I should've done it differently?");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,2,1);
VoicePlay("D020800400_08_070");
MsgDisp("Shirahane","Us two in the same school......
That's interesting......");
MsgDisp("主人公","(It's interesting to me too......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
