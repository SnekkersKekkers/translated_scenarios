MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(21,#1);
ChMouthOpenLevel(21,#1);
ChCheek(21,0);
ChEyeOpenLevel(22,#1);
ChMouthOpenLevel(22,#1);
ChCheek(22,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("S120D00004_21_000");
MsgDisp("Michiru","Our last shrine visit as high schoolers is
over, huh...");
MsgDisp("主人公","Yeah...");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("S120D00004_21_010");
MsgDisp("Michiru","What about Mari?
Were your high school days fulfilling?");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("S120D00004_22_000");
MsgDisp("Hikaru","I want to play with Mari even more.
...Right?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝...");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("S120D00004_21_020");
MsgDisp("Michiru","...I can't.
It's been a sad feeling since the New Year
started.");
ChEye(22,4);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("S120D00004_22_010");
MsgDisp("Hikaru","We'll still be friends even after we
graduate, right?
The three of us.");
MsgDisp("主人公","Of course!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("S120D00004_22_020");
MsgDisp("Hikaru","Yayy!
As usual, I love you, Mari▼");
ChEyeOpenLevel(22,#1);
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("S120D00004_21_030");
MsgDisp("Michiru","I also love Mari.");
MsgDisp("主人公","Hehe.
This is a little embarrassing.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("S120D00004_21_040");
MsgDisp("Michiru","See you at school then.
Please take care of me this year too.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("S120D00004_22_030");
MsgDisp("Hikaru","Salut, Mari♪");
MsgClose();
SEPlay("EV_SE_856");
ChClose(21,0,30);
ChClose(22,0,30);
MsgDisp("主人公","(Graduation...huh? Okay, there's only a
little bit of high school life left. Let's
have fun!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
