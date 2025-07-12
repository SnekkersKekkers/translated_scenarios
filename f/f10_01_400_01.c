BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("F100140001_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,254,0,0,0,#1,#1,0,1);
ChOpen(2,254,3,0,4,#1,#1,0,2);
MsgDisp("主人公","｛風真＊＊｝, ｛颯砂＊＊｝.
What's up? Both of you.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100140001_02_000");
MsgDisp("Sassa","I just remembered something.
From a long time ago.");
ChEye(1,0);
ChMouth(1,2);
MsgDisp("主人公","Oh, what?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100140001_02_010");
MsgDisp("Sassa","At Setsubun in kindergarten, I played
the role of an oni.
Do you remember?");
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
MsgDisp("主人公","No, I've got no clue...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100140001_02_020");
MsgDisp("Sassa","What about you, Ryota?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("F100140001_01_010");
MsgDisp("Kazama","I remember it *very* well.");
ChEyeOpenLevel(1,8);
MsgDisp("主人公","I see, that's good.
It's a shared memory for you two,
right?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100140001_01_020");
MsgDisp("Kazama","Sassa, aren't you going to continue?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100140001_02_030");
MsgDisp("Sassa","Continue?
Ryota and I ran around together.
It was fun.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100140001_01_030");
MsgDisp("Kazama","You're being too nostalgic.");
MsgDisp("主人公","What? Is that not what happened?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("F100140001_01_040");
MsgDisp("Kazama","...good grief. He put the oni mask on
and chased me around.
It was pretty scary.");
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("F100140001_01_050");
MsgDisp("Kazama","I remember it like it was yesterday.");
MsgDisp("主人公","(Hehe. I bet the two of them playing
tag was really cute.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
