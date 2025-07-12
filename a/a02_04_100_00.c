BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(Heehee, I got my hands on the
latest issue of Habataki Watcher! Let's
head straight to the rooftop and read it!)");
SEPlay("EV_SE_591");
Wait(60,0);
MsgDisp("主人公","Oh no,
the bonus poster......!");
SEPlay("EV_SE_FOOT_RUN_KEEP_ALONE");
MsgClose();
ScrFadeOut(0);
BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(Oh no, it blew away...
Where did it go?)");
VoicePlay("A020410000_04_000");
MsgDisp("Nanatsumori?","Something's blew over here.");
SEPlay("EV_SE_662");
SEWait();
VoicePlay("A020410000_04_010");
MsgDisp("Nanatsumori?","......Huh, isn't it Habacha's.");
SEPlay("EV_SE_593",0,0.8);
Wait(50,0);
VoicePlay("A020410000_04_020");
MsgDisp("Nanatsumori?","That's bad.");
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
I must have dropped it from the roof......");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0);
VoicePlay("A020410000_04_030");
MsgDisp("Nanatsumori?","Right.
Then, you have it.");
SEPlay("EV_SE_592",0,1);
SEWait();
MsgDisp("主人公","Thank you.
I'm glad you found it.");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("A020410000_04_040");
MsgDisp("Nanatsumori?","…………");
MsgDisp("主人公","Huh?
You're also reading Habataki Watcher?");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("A020410000_04_050");
MsgDisp("Nanatsumori?","Yeah but...");
MsgDisp("主人公","Your bracelet, it's the same as
high school model NANA on the picture?");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("A020410000_04_060");
MsgDisp("Nanatsumori?","Yeah not really.
It's very common.");
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
MsgDisp("Nanatsumori?","......What if it's the same?");
MsgDisp("主人公","I thought maybe you were a fan.
You know, NANA-kun has a lot of boy fans 
too.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("A020410000_04_090");
MsgDisp("Nanatsumori?","Ah......
Yeah yeah, I'm a fan.");
MsgDisp("主人公","I see!
NANA-kun is so cool and handsome, 
how could you not be!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("A020410000_04_100");
MsgDisp("Nanatsumori?","Well, he's a model you know.");
MsgDisp("主人公","He's all, he's got style,
he's got that special wild vibe,
And his face......when he's doing that 
'shhh'......pose?");
ChEye(4,0);
ChMouth(4,1);
ChMotion(4,2,1);
ChMouthOpenLevel(4,0);
VoicePlay("A020410000_04_110");
MsgDisp("Nanatsumori?","…………");
MsgDisp("主人公","Wait a minute, 
you sure look a lot like NANA-kun,
uhhh......");
ChMouthOpenLevel(4,#1);
VoicePlay("A020410000_04_120");
MsgDisp("Nanatsumori","......Nanatsumori Minoru.");
MsgDisp("主人公","Even the name matches.");
ChMouthOpenLevel(4,0);
VoicePlay("A020410000_04_130");
MsgDisp("Nanatsumori","…………");
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
MsgDisp("Nanatsumori","Sorr-...... My bad too.
I've been yelling too.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("A020410000_04_160");
MsgDisp("Nanatsumori","......Hey.
I'm telling you this because I know 
you'll understand the situation.");
VoicePlay("A020410000_04_170");
MsgDisp("Nanatsumori","\"NANA\" the model, 
and \"Nanatsumori Minoru\" that's 
right in front of you, we exist in 
different worlds, alright?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("A020410000_04_180");
MsgDisp("Nanatsumori","So you call me \"Nanatsumori Minoru\" 
alright?
Habataki student, normal guy.
OK?");
MsgDisp("主人公","Yeah, OK!");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("A020410000_04_190");
MsgDisp("Nanatsumori","Good kid.
I trust you.");
MsgDisp("主人公","Hehe.
See you then, N——");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("A020410000_04_200");
MsgDisp("Nanatsumori","Wait......
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
MsgDisp("主人公","Sorry!! I just......
See you later then, ｛七ツ森＊｝.");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("A020410000_04_220");
MsgDisp("Nanatsumori","I trust you, for real......");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(4);
BGOpen("sc510",0);
SEWait();
ScrFadeIn(0);
MsgDisp("主人公","(I can't believe I'm going to the same
school as high school model NANA...... I
gotta protect this secret!)");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(4,0);
