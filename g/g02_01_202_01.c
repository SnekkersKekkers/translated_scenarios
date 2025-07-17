MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
VoicePlay("G020120201_01_000");
MsgDisp("Kazama","It's pretty, but I noticed that coming
here makes me think about stuff I don't
want to.");
MsgDisp("主人公","What do you mean?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G020120201_01_010");
MsgDisp("Kazama","Like, how should I put it? It's as if I'm
looking at myself objectively... This's
a strange place.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120201_01_020");
MsgDisp("Kazama","I thought it was only natural that I would
always be the person closest to you.
... But I was wrong.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120201_01_030");
MsgDisp("Kazama","I just know, when it comes to you.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020120201_01_040");
MsgDisp("Kazama","A kid one year below than us overturned
what I thought was natural.");
MsgDisp("主人公","Huh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120201_01_050");
MsgDisp("Kazama","The fact that it was him and not someone
the same year as us made me realize that
I'd gotten it wrong.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020120201_01_060");
MsgDisp("Kazama","To me, the time that I'd built up with you
couldn't be outdone by anyone.
That was the one absolute.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120201_01_070");
MsgDisp("Kazama","But he vaulted over it in one year.");
MsgDisp("主人公","｛風真＊＊｝...");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020120201_01_080");
MsgDisp("Kazama","Well, he might be ahead of me right now,
but there's still time.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020120201_01_090");
MsgDisp("Kazama","Thanks to you coming with me today, I
learned that the thing I thought was a
strength actually worked against me.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020120201_01_100");
MsgDisp("Kazama","So I've decided to compete with him at the
'hereon' with you.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("G020120201_01_110");
MsgDisp("Kazama","Like I'm gonna lose to the underclassman
who popped out of nowhere.
You know?");
MsgDisp("主人公","(I'm pretty sure ｛風真＊＊｝
is talking about ｛氷室＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
