BGOpen("sc220",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Ah. Over there is...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(22,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(31,254,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","｛ひかる＊｝, Goro-sensei!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F102220002_22_000");
MsgDisp("Hikaru","Mari!");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,4);
VoicePlay("F102220002_31_000");
MsgDisp("Goro","Ah, Mari!
Hehe!");
MsgDisp("主人公","Eh, even Goro-sensei 
is calling me that...");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,2);
VoicePlay("F102220002_31_010");
MsgDisp("Goro","It sure is nice to be young.
Just this alone makes me happy.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("F102220002_22_010");
MsgDisp("Hikaru","Ahaha! Uncle is still plenty young～
Right, Mari.");
MsgDisp("主人公","Definitely. How old are you anyways,
Goro-sensei?");
ChEye(22,5);
ChMouth(22,5);
ChMotion(22,5,1);
VoicePlay("F102220002_22_020");
MsgDisp("Hikaru","∈");
ChEye(31,0);
ChMouth(31,0);
VoicePlay("F102220002_31_020");
MsgDisp("Goro","............");
MsgDisp("主人公","Umm... it's nothing.");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,3);
VoicePlay("F102220002_31_030");
MsgDisp("Goro","Eh, good girl.
see you later.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(31);
ChPosition(22,0);
ChEye(22,3);
ChMouth(22,1);
ChMotion(22,2,1);
ChEyeOpenLevel(22,10);
VoicePlay("F102220002_22_030");
MsgDisp("Hikaru","...Haa
That startled me.");
MsgDisp("主人公","Could it be...");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("F102220002_22_040");
MsgDisp("Hikaru","Right, right.
Age is a taboo topic for Uncleー.");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("F102220002_22_050");
MsgDisp("Hikaru","Well he was a classmate of the chairman's,
so it's obvious isn't it?
Looks like it's a delicate subject.");
ChEye(22,4);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("F102220002_22_060");
MsgDisp("Hikaru","But... I feel like he hasn't changed at
all since we were little.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F102220002_22_070");
MsgDisp("Hikaru","...Ah! Then, I wonder if we'll be like
that too? Immortal!");
MsgDisp("主人公","(I think that's impossible but...
Goro-sensei doesn't look like he's
aged...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
