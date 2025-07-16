MsgDisp("主人公","(Huh?
What's up with me?
My heart is thudding super fast..)");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoiceEVSPlay(1);
VoicePlay("B070100002_01_390");
MsgDisp("Kazama","｛主人公｝, your face is
kinda red?");
MsgDisp("主人公","Y-Yeah.
I was dazed out for a bit.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("B070100002_01_400");
MsgDisp("Kazama","You're always a bit dazed out, but thos
was different?");
MsgDisp("主人公","Hey.
Maybe it's because I'm with
｛風真＊＊｝?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,4);
ChCheek(1,5);
VoicePlay("B070100002_01_410");
MsgDisp("Kazama","I-I see.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,1);
ChEye(1,0);
ChMouth(1,2);
VoicePlay("B070100002_01_420");
MsgDisp("Kazama","Even I'm like that when I'm with you, you
know?");
MsgDisp("主人公","Hehe, we're the same.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B070100002_01_430");
MsgDisp("Kazama","Right?
We've been the same since long ago,
haven't we?");
MsgDisp("主人公","Yeah.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
