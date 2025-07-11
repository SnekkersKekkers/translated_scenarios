BGOpen("ho000",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Oh?
｛風真＊＊｝, good morning!
Were you maybe waiting for me?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D020100000_01_000");
MsgDisp("Kazama","Waiting or not, we're going the same
way, aren't we?");
MsgDisp("主人公","That's true.
It really feels like we're back in
elementary school again.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D020100000_01_010");
MsgDisp("Kazama","I guess so. When I look at you, I don't 
notice anything different. It's like
you haven't grown at all.");
MsgDisp("主人公","｛風真＊＊｝, you've changed a lot though,
haven't you?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("D020100000_01_020");
MsgDisp("Kazama","......Have I?");
MsgDisp("主人公","You've gotten so much——");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("D020100000_01_030");
MsgDisp("Kazama","\"You've gotten so much taller, haven't
you\"?");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D020100000_01_040");
MsgDisp("Kazama","Of course I have!
Compared to how I was a few years ago.");
MsgDisp("主人公","Ugh......");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D020100000_01_050");
MsgDisp("Kazama","Yes, yes, everything's fine.
It's just business as usual for you
again today. Let's go.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","Geez, what do you mean by that?");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0,0.5);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",0);
NSSOpen(1,254,3,3,-1,-1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("D020100000_01_051");
MsgDisp("Kazama","So, remember that bell that we used
to hear ringing?");
MsgDisp("主人公","Hehe, yeah. It was strange. It feels
kind of like a dream.");
NSSEye(1,4);
NSSMouth(1,0);
VoicePlay("D020100000_01_060");
MsgDisp("Kazama","Yeah, but it wasn't a dream. I remember
it clearly.");
NSSEye(1,0);
NSSMouth(1,0);
VoicePlay("D020100000_01_070");
MsgDisp("Kazama","Isn't the fact that we both have the 
same memory is proof enough?");
MsgDisp("主人公","That's true.
The two of us wouldn't have the same
dream, I guess?");
NSSEye(1,3);
NSSMouth(1,3);
VoicePlay("D020100000_01_080");
MsgDisp("Kazama","Right.
That's exactly what I mean.");
NSSEye(1,6);
NSSMouth(1,0);
VoicePlay("D020100000_01_090");
MsgDisp("Kazama","So, you know......
That thing that happened after the 
bell rang——");
MsgClose();
ScrFadeOut(0,0,30);
NSSClose();
SEStop("EV_SE_754",0.01);
SEPlay("EV_SE_636",0,0.9);
SEWait();
MsgDisp("主人公","Kyaa∈
There's a puddle here.........");
BGOpen("sc010",0);
MsgClose();
ChOpen(1,254,0,2,2,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("D020100000_01_100");
MsgDisp("Kazama","Ahh, geez......What are you doing?
Are your socks okay?");
MsgDisp("主人公","Yeah.........just barely.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(1,0,30);
ChLayout(0);
MsgClose();
ChOpen(1,254,7,2,3,-1,-1,0,0,0,30);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D020100000_01_110");
MsgDisp("Kazama","That's good. Phew......I'm glad the splash
wasn't a big deal.");
MsgDisp("主人公","I never trip.");
ChMotion(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("D020100000_01_120");
MsgDisp("Kazama","You didn't just now, but I remember
the times you did. Back in first grade
you were a handful to take care of.");
MsgDisp("主人公","(Ugh......I don't have a comeback for
that.)");
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,-1);
ChCheek(1,0);
