MsgClose();
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020110401_01_000");
MsgDisp("Kazama","When you see a view like this, you start
to wonder where to go next for a
date......");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110401_01_010");
MsgDisp("Kazama","Well,
you've always enjoyed yourself 
no matter where I take you.");
MsgDisp("主人公","Anywhere you take me is fun, ｛風真＊＊｝.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("G020110401_01_020");
MsgDisp("Kazama","Same here. Because it's you,
I can say what I like without worries 
and even take you out spontaneously.");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,4);
ChCheek(1,5);
VoicePlay("G020110401_01_030");
MsgDisp("Kazama","But you know......maybe the spot doesn't
really matter. After all, I'm only looking
at you and listening to your voice.");
MsgDisp("主人公","You still need to look at your
surroundings, or it could be dangerous,
you know?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020110401_01_040");
MsgDisp("Kazama","Did I say that?");
MsgDisp("主人公","Hehe.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,0);
VoicePlay("G020110401_01_050");
MsgDisp("Kazama","That being said,
surprises are necessary.");
MsgDisp("主人公","Eh, surprise?");
ChMotion(1,0);
Wait(10,0);
ChEye(1,4);
ChMouth(1,3);
VoicePlay("G020110401_01_060");
MsgDisp("Kazama","Yeah, someday. It's a promise.");
MsgDisp("主人公","(I wonder what ｛風真＊＊｝ surprise will
be? I'm really looking forward to it!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
