MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020120300_01_000");
MsgDisp("Kazama","There are fireflies that fly gracefully,
and others that are busy.
There are all kinds.");
MsgDisp("主人公","Yeah, they're all sorts of different
colours too.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("G020120300_01_010");
MsgDisp("Kazama","As for you, what kind do you like?");
MsgDisp("主人公","Of firefly?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
ChCheek(1,5);
VoicePlay("G020120300_01_020");
MsgDisp("Kazama","Of course not. Don't you have one? Like...
A preferred fashion?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,0);
VoicePlay("G020120300_01_030");
MsgDisp("Kazama","What am I even saying...");
MsgDisp("主人公","Like men's fashion?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020120300_01_040");
MsgDisp("Kazama","That's right.
I was thinking it might be good to have
some reference, purely as a reference.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("G020120300_01_050");
MsgDisp("Kazama","The sporty type?
Wild type?");
MsgDisp("主人公","Hmm, ｛風真＊＊｝'s usual fashion
is nice.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020120300_01_060");
MsgDisp("Kazama","Yes, an answer worth 100 points!");
MsgDisp("主人公","Hehe, ｛風真＊＊｝, also suits
an apron.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3,1);
VoicePlay("G020120300_01_070");
MsgDisp("Kazama","Hey, that-∋
That's my Simon unform.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020120300_01_080");
MsgDisp("Kazama","Well, that's just like you.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020120300_01_090");
MsgDisp("Kazama","Get ready, okay?
From now on, I'll be wearing aprons in all
kinds of colors on our dates.");
MsgDisp("主人公","(A colorful ｛風真＊＊｝, a bit
like a firefly...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
