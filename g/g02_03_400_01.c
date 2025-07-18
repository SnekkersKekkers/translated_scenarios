ChLayout(1);
MsgClose();
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("G020340001_03_000");
MsgDisp("Honda","Hey, I had the worst dream this morning.
Can I tell you about it?
I can't shake it until I talk to someone.");
MsgDisp("主人公","Y-Yeah.
What happened in your dream?");
ChMotion(3,0);
VoicePlay("G020340001_03_010");
MsgDisp("Honda","In the dream, I was swimming in the ocean,
and suddenly I got swallowed by a wave.");
ChEye(3,2);
ChMotion(3,2);
ChEyeOpenLevel(3,0);
VoicePlay("G020340001_03_020");
MsgDisp("Honda","No matter how hard I struggled, seawater
kept rushing into my mouth, and I couldn't
breathe. Eventually, everything went dark
before my eyes.");
MsgDisp("主人公","Eh...and then?");
ChEye(3,4);
VoicePlay("G020340001_03_030");
MsgDisp("Honda","I woke up feeling suffocated.
But even then, everything was still pitch
black.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("G020340001_03_040");
MsgDisp("Honda","I was scared and jumped up, only to
realize that while I was asleep, several
books had piled up on my face.");
MsgDisp("主人公","So, the suffocation was because of the
books on your face.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("G020340001_03_050");
MsgDisp("Honda","Yeah. I learned the hard way that stacking
up a tower of unread books by my bedside
is dangerous.");
MsgDisp("主人公","Yeah...make sure to organize them
properly, okay?");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("G020340001_03_060");
MsgDisp("Honda","Yeah, I'll be careful.
I've had enough of those suffocating
dreams.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);


