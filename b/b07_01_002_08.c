MsgDisp("主人公","............");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B070100002_01_440");
MsgDisp("Kazama","Do I have something on my face?");
MsgDisp("主人公","Umm, sorry.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B070100002_01_450");
MsgDisp("Kazama","Then, what is it this time?
The things you're thinking about are way
beyond my expectations.");
MsgDisp("主人公","I was thinking that suddenly being with
｛風真＊＊｝ is like a dream.
So I ended up staring. It's weird isn't
it?");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
ChCheek(1,7);
VoicePlay("B070100002_01_460");
MsgDisp("Kazama","I-I see!
It's not weird at all.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,5);
VoicePlay("B070100002_01_470");
MsgDisp("Kazama","After all, even though we were born so
close to each other, we were suddenly
separated by 9000 kilometers, and only now
are we this close again.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B070100002_01_480");
MsgDisp("Kazama","But, well.
Both time and distance don't mean anything
to us.");
MsgDisp("主人公","Hehe, yeah, that's right.");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,0);
Wait(12,0);
ChMouthOpenLevel(1,0);
VoicePlay("B070100002_01_490");
MsgDisp("Kazama","............");
MsgDisp("主人公","What's wrong?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B070100002_01_500");
MsgDisp("Kazama","As I thought, it's nice to be reflected in
your eyes.");
MsgDisp("主人公","(It's a bit embarrassing, but I'm happy.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
