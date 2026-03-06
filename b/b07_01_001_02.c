MsgDisp("主人公","｛Kazama＊＊｝, recently you've been talking
to ｛Himuro＊＊｝ a lot, haven't you?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B070100001_01_080");
MsgDisp("Kazama","Inori is the one who's one-sidedly
involving himself with me.");
MsgDisp("主人公","But when you talk to ｛Himuro＊＊｝, you look
like you're having so much fun,
｛Kazama＊＊｝.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B070100001_01_090");
MsgDisp("Kazama","...Inori isn't the type to get involved
with people in the first place is he?");
MsgDisp("主人公","That's definitely true.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,2);
ChEyeOpenLevel(1,0);
VoicePlay("B070100001_01_100");
MsgDisp("Kazama","Why me...
Maybe he's looking down on me?");
MsgDisp("主人公","｛Himuro＊＊｝ definitely likes ｛Kazama＊＊｝.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B070100001_01_110");
MsgDisp("Kazama","What do you mean by \"like\"?
You always brush it off like that.
You're too careless.");
MsgDisp("主人公","Hehe, ｛Kazama＊＊｝ unintentionally draws
everyone in doesn't he?");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B070100001_01_120");
MsgDisp("Kazama","Oi.
Don't talk about people like they're bait.");
ChMotion(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,2);
VoicePlay("B070100001_01_130");
MsgDisp("Kazama","Then, what about you?");
MsgDisp("主人公","(I wonder if I'm also drawn in by
｛Kazama＊＊｝?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
