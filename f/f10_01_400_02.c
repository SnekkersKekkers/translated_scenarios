BGOpen("sc510",0);
ChLayout(1);
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(1,254,0,0,3,0,-1,0,1);
ChOpen(2,254,0,0,0,-1,-1,0,2);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("F100140002_01_000");
MsgDisp("Kazama","｛主人公｝.
I solved the mystery of Sassa.");
MsgDisp("主人公","Er, the mystery of ｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("F100140002_02_000");
MsgDisp("Sassa","Ryota, what's that?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100140002_01_010");
MsgDisp("Kazama","Sassa, when you remembered something,
it was because you were having fun with
me, right?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("F100140002_02_010");
MsgDisp("Sassa","Yeah, I suppose.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F100140002_01_020");
MsgDisp("Kazama","You're sealing up what you don't want
to remember.");
MsgDisp("主人公","Huh?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("F100140002_02_020");
MsgDisp("Sassa","What I don't want to remember?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100140002_01_030");
MsgDisp("Kazama","You're bad with ghosts, right?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("F100140002_02_030");
MsgDisp("Sassa","Y-Yeah.
What's that have to do with it?");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("F100140002_01_040");
MsgDisp("Kazama","One day near kindergarten culmination,
you read a book called 'The Slimy Ghost'
and started crying.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100140002_01_050");
MsgDisp("Kazama","You were always cheerful and invincible,
but after that day, you quieted down.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChEyeOpenLevel(2,7);
VoicePlay("F100140002_02_040");
MsgDisp("Sassa","I don't remember that at all...");
ChEye(1,0);
ChMouth(1,2);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("F100140002_02_050");
MsgDisp("Sassa","Although I'm definitely not good with
anything slimy or ghost-y, even now...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F100140002_01_060");
MsgDisp("Kazama","Your brain has fondly remembered chasing
me around, but has concealed your fear
of 'The Slimy Ghost'.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100140002_02_060");
MsgDisp("Sassa","I see, I see...");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("F100140002_02_070");
MsgDisp("Sassa","Thinking about it, maybe I can overcome
my fear with this...
Ryota, you're the best!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ChPosition(1,0);
Wait(60,0);
MsgDisp("主人公","｛颯砂＊＊｝ bawling...
Did something like that really happen?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100140002_01_070");
MsgDisp("Kazama","That's a matter for another time.
For now, let's take our time.");
MsgDisp("主人公","(｛風真＊＊｝, you'd be a great
detective...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
