BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hehe, I got my hands on the latest issue of
Habataki Watcher! Let's head straight to the
rooftop and read it!)");
SEPlay("EV_SE_591");
Wait(60,0);
MsgDisp("主人公","Ah, the bonus poster...!");
SEPlay("EV_SE_FOOT_RUN_KEEP_ALONE");
MsgClose();
ScrFadeOut(0);
BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(Oh no, it blew away...
Where did it go?)");
VoicePlay("A020410000_04_000");
MsgDisp("Nanatsumori?","Something just blew over here.");
SEPlay("EV_SE_662");
SEWait();
VoicePlay("A020410000_04_010");
MsgDisp("Nanatsumori?","...Huh, isn't that Habatcher?");
SEPlay("EV_SE_593",0,0.8);
Wait(50,0);
VoicePlay("A020410000_04_020");
MsgDisp("Nanatsumori?","Oh no.");
SEPlay("EV_SE_594",0,0.8);
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C04_NANA_I",0.01);
StlOpen("ev_04_01");
StlEye(4,0);
StlMouth(4,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah!!
It's my poster!
I dropped it in the hall...");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0);
VoicePlay("A020410000_04_030");
MsgDisp("Nanatsumori?","Got it.
Here, take it then.");
SEPlay("EV_SE_592",0,1);
SEWait();
MsgDisp("主人公","Thank you.
I'm glad you found it.");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("A020410000_04_040");
MsgDisp("Nanatsumori?","......");
MsgDisp("主人公","Huh?
You're also reading Habataki Watcher?");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("A020410000_04_050");
MsgDisp("Nanatsumori?","Yeah but...");
MsgDisp("主人公","That bracelet you're wearing...
Isn't it the same one high school model
NANA-kun has on the poster?");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("A020410000_04_060");
MsgDisp("Nanatsumori?","Not really.
It's pretty common, I think.");
MsgDisp("主人公","But it's the exact same.
Here, even the color is the same.
The stones are in the exact same order!");
MsgClose();
ScrFadeOut(0);
MsgClose();
StlClose();
BGOpen("sc310",0);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
ChEye(4,1);
ChMouth(4,5);
ChMotion(4,4,1);
VoicePlay("A020410000_04_070");
MsgDisp("Nanatsumori?","Shhhh!
You're so loud!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("A020410000_04_080");
MsgDisp("Nanatsumori?","...What if it's the same?");
MsgDisp("主人公","I thought maybe you were a fan!
NANA-kun has a lot of male fans too, you
know.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("A020410000_04_090");
MsgDisp("Nanatsumori?","Ah...
Yeah yeah, I'm a fan.");
MsgDisp("主人公","I see!
NANA-kun is so cool, right!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("A020410000_04_100");
MsgDisp("Nanatsumori?","Yeah but, he's just some model...");
MsgDisp("主人公","He's tall with a great figure, and he's got
this wild vibe, and his face is so sharp
and... Wait a sec...");
ChEye(4,0);
ChMouth(4,1);
ChMotion(4,2,1);
ChMouthOpenLevel(4,0);
VoicePlay("A020410000_04_110");
MsgDisp("Nanatsumori?","......");
MsgDisp("主人公","Wait a minute, you sure look a lot like
NANA-kun, uhhh...");
ChMouthOpenLevel(4,#1);
VoicePlay("A020410000_04_120");
MsgDisp("Nanatsumori","...Nanatsumori Minoru.");
MsgDisp("主人公","Even the name is similar.");
ChMouthOpenLevel(4,0);
VoicePlay("A020410000_04_130");
MsgDisp("Nanatsumori","......");
MsgDisp("主人公","Could it be?
That you're NANA-kun?");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,4,1);
VoicePlay("A020410000_04_140");
MsgDisp("Nanatsumori","Shh∈
So loud!");
MsgDisp("主人公","∋
Sorry.");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("A020410000_04_150");
MsgDisp("Nanatsumori","Sorr-...
My bad.
I've been yelling too.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("A020410000_04_160");
MsgDisp("Nanatsumori","...Hey.
I'm telling you this because I know you'll
understand the situation.");
VoicePlay("A020410000_04_170");
MsgDisp("Nanatsumori","\"NANA\" the model and \"Nanatsumori Minoru\"
right in front of you live in different
worlds, ok?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("A020410000_04_180");
MsgDisp("Nanatsumori","So right now, I'm \"Nanatsumori Minoru\". 
Just a normal Habataki High student.
OK?");
MsgDisp("主人公","Yeah, ok!");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("A020410000_04_190");
MsgDisp("Nanatsumori","Nice.
I'm counting on you.");
MsgDisp("主人公","Hehe.
See you later, N——");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("A020410000_04_200");
MsgDisp("Nanatsumori","Wait...
You haven't told me your name∋");
MsgDisp("主人公","Oh that's right!
I'm ｛主人公姓名｝.
See you later, NAN——");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,4,1);
VoicePlay("A020410000_04_210");
MsgDisp("Nanatsumori","Shhh!!
Not here∋");
MsgDisp("主人公","Sorry!!
I just...
See you later then, ｛Nanatsumori＊｝.");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("A020410000_04_220");
MsgDisp("Nanatsumori","I'm seriously counting on you...");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(4);
BGOpen("sc510",0);
SEWait();
ScrFadeIn(0);
MsgDisp("主人公","(I can't believe I'm going to the same school
as high school model NANA...
I gotta protect this secret!)");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(4,0);
