MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
VoicePlay("G020130101_01_000");
MsgDisp("Kazama","Each one has a faint light, but when they
all gather together, it's impressive.");
MsgDisp("主人公","Yeah, it's like a big creature, right?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G020130101_01_010");
MsgDisp("Kazama","There's a story about that, isn't there?
About small fish gathering together to
protect themselves.");
MsgDisp("主人公","Hehe, yeah.
There is.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020130101_01_020");
MsgDisp("Kazama","...Recently it's been like that around
you, hasn't it?");
MsgDisp("主人公","Eh?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020130101_01_030");
MsgDisp("Kazama","People I don't know well are surrounding
you.
It's kind of hard to get close.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020130101_01_040");
MsgDisp("Kazama","Well, maybe I should just become one of
them, but...");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020130101_01_050");
MsgDisp("Kazama","Am I just one of many to you?
To me, you're special.");
MsgDisp("主人公","｛風真＊＊｝ you're my one and only
precious childhood friend.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020130101_01_060");
MsgDisp("Kazama","Uh...
Yes, that's right. ...good grief, I guess
that's fine?");
MsgDisp("主人公","What's wrong?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("G020130101_01_070");
MsgDisp("Kazama","Nooothing at all.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020130101_01_080");
MsgDisp("Kazama","'Childhood friend' is a sly word to use...");
MsgDisp("主人公","(｛風真＊＊｝, what's wrong?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);


