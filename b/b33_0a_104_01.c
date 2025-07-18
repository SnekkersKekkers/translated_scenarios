BGOpen("fp200",0);
ChLayout(2);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ScrFadeIn(0);
MsgDisp("主人公","The firefly habitat is good no matter when
you come...");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B330A10401_01_000");
MsgDisp("Kazama","Shall we head to the gazebo in the middle?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330A10401_06_000");
MsgDisp("Himuro","That's fine.
...But, wouldn't things get interesting
if that rumor was true?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,2);
VoicePlay("B330A10401_02_000");
MsgDisp("Sassa","The one about hearing inner voices? Ehhh,
how surprising. Inori you seem like the
type to make fun of that sort of stuff.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B330A10401_01_010");
MsgDisp("Kazama","Inori is the type to have lots of hidden
voices.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330A10401_06_010");
MsgDisp("Himuro","What does that mean.");
ChEye(1,0);
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("B330A10401_02_010");
MsgDisp("Sassa","Well, yeah.
But he's also the type to normally let out
his hidden voices.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B330A10401_06_020");
MsgDisp("Himuro","Hm, that's good isn't it?
It's honesty.");
MsgDisp("主人公","Hehe, that's right isn't it?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A10401_06_030");
MsgDisp("Himuro","Both you and Nozomu-senpai are simplistic.
As for who appears interesting...well
there's only one person left isn't there?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B330A10401_01_020");
MsgDisp("Kazama","...Even I've not really gotten anything to
hide.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B330A10401_02_020");
MsgDisp("Sassa","Nothing in special huh?
...Well, shall we go?
Let's hear some inner voices.");
ChEye(1,4);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330A10401_06_040");
MsgDisp("Himuro","Right.");
MsgClose();
SEPlay("EV_SE_767");
ChClose(2,0,30);
ChClose(6,0,30);
ChClose(1,0,30);
ChLayout(1);
ChOpen(1,255,0,4,2,8,#1,0,0,0,30);
MsgDisp("主人公","...Huh?
｛風真＊＊｝, aren't you coming?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("B330A10401_01_030");
MsgDisp("Kazama","At this rate, whether they hear anything
or not, they're just going to tease me.");
MsgDisp("主人公","I-Is that so?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A10401_01_040");
MsgDisp("Kazama","This happens all the time.
...Geez, I'm not supposed to be type to
get teased.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(1,0,30);
MsgDisp("主人公","(｛風真＊＊｝ is just well-loved by
everyone huh?)");
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
ChOpen(1,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(1,3);
ChOpen(2,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(2,3);
ChOpen(6,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(6,3);
