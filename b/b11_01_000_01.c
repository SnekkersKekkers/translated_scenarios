MsgClose();
ChClose(1,0,0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Huh?
｛風真＊＊｝ isn't here yet?");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("B110100001_34_000");
MsgDisp("Guy","So you were here.
Shall we quickly go home?");
MsgClose();
SEPlay("EV_SE_557");
ChOpen(34,254,0,1,0,#1,#1,0,0);
MsgDisp("主人公","Ehh∋
...Me?");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110100001_34_010");
MsgDisp("Guy","Yes, you.
Because you understand me.");
MsgDisp("主人公","Umm...just who are you?");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110100001_34_020");
MsgDisp("Guy","This body is an avatar.
NAmes have no meaning.");
MsgDisp("主人公","???");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110100001_34_030");
MsgDisp("Guy","Well, quickly.
From reality to the sea of the virtual
world, let's goo and surf the net.");
MsgDisp("主人公","Ehh∋
Hey, what are you talking about!");
ChPosition(34,2);
MsgDispSksp(1,5);
SEPlay("EV_SE_550");
MsgClose();
ChOpen(1,31,0,0,2,8,#1,0,1,0,30);
VoicePlay("B110100001_01_000");
MsgDisp("Kazama","Stop right there.");
MsgDispSksp(0);
ChEye(34,2);
ChMouth(34,0);
VoicePlay("B110100001_34_040");
MsgDisp("Guy","You...
That avatar is good looking.");
MsgDispSksp(1,5);
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B110100001_01_010");
MsgDisp("Kazama","Haaa?
Oi, I don't understand you.");
MsgDispSksp(0);
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110100001_34_050");
MsgDisp("Guy","Ehh, scary.
This is why I hate realityー.");
ChMotion(1,1);
SEPlay("EV_SE_580");
ChClose(34);
ChPosition(1,0);
Wait(60,0);
MsgDispSksp(1,5);
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
VoicePlay("B110100001_01_020");
MsgDisp("Kazama","Wait a minute!");
MsgDispSksp(0);
VoicePlay("B110100001_34_060");
MsgDisp("Guy","Nope!
I'm returning to the sea of the internet!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("B110100001_01_030");
MsgDisp("Kazama","Haa?
What was up with that guy...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B110100001_01_040");
MsgDisp("Kazama","Are you alright?");
MsgDisp("主人公","Yeah I'm alright.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B110100001_01_050");
MsgDisp("Kazama","Sorry, this was because I was late.
But you now, Habataki City has a lot of
weird stuff?");
MsgDisp("主人公","T-That might be true...
Shall we go now...");
