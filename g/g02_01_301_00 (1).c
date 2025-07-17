MsgClose();
ChOpen(1,255,1,0,0,#1,#1,0,0);
VoicePlay("G020130100_01_000");
MsgDisp("Kazama","There's a crazy number of fireflies flying
here.");
MsgDisp("主人公","Yeah.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020130100_01_010");
MsgDisp("Kazama","Especially around you.");
MsgDisp("主人公","Hahah, you're right.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020130100_01_020");
MsgDisp("Kazama","No, it's no laughing matter.");
MsgDisp("主人公","Huh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020130100_01_030");
MsgDisp("Kazama","Including, I swear the number's increased
recently. ...Though, well, one of them
might be me.");
MsgDisp("主人公","Um, weren't you talking about fireflies?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020130100_01_040");
MsgDisp("Kazama","It's basically the same thing.
It's always bustling around you at school.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020130100_01_050");
MsgDisp("Kazama","I normally put up with it, since I figure
I'm special, but...to be honest, it
worries me.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020130100_01_060");
MsgDisp("Kazama","Listen, I've got something to say.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020130100_01_070");
MsgDisp("Kazama","No matter how many fireflies are around
you, the one at your side at the end will
be me.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020130100_01_080");
MsgDisp("Kazama","That's the one thing I won't let anyone
else have.");
MsgDisp("主人公","(｛風真＊＊｝'s expression is really
serious...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
