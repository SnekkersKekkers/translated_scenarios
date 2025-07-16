MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020130003_01_000");
MsgDisp("Kazama","When you actually see them up close,
they're amazing......");
MsgDisp("主人公","Yeah.
They're beautiful.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("G020130003_01_010");
MsgDisp("Kazama","That reminds me.
They talked about this place too,
remember?");
MsgDisp("主人公","｛本多＊＊｝ and
｛七ツ森＊｝?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020130003_01_020");
MsgDisp("Kazama","Yeah, but if you came here with Honda,
he'd never stop explaining. And you'd add
fuel to the fire by asking the perfect
questions.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020130003_01_030");
MsgDisp("Kazama","Nanatsumori would probably desperately
mess with his phone and takes pictures.
Doesn't really seem like the type to enjoy
the view.");
MsgDisp("主人公","I think ｛七ツ森＊｝
would enjoy things like this.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020130003_01_040");
MsgDisp("Kazama","How do you know?");
MsgDisp("主人公","Because the two of them talked about this
place, remember?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020130003_01_050");
MsgDisp("Kazama","Yeah, there is that.
But right now I'm the only one here.");
MsgDisp("主人公","Should we visit all together next time?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020130003_01_060");
MsgDisp("Kazama","...... Nah, let's come just the two of us
next time too.
Make sure no one realizes, okay?");
MsgDisp("主人公","I think they'd figure it out pretty
quick......");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("G020130003_01_070");
MsgDisp("Kazama","Most likely. And if they find out, they'll
probably keep bringing it up for a
week...... So don't say anything.");
MsgDisp("主人公","(Hahah, it sounds like
｛風真＊＊｝ loves
｛本多＊＊｝ and
｛七ツ森＊｝. )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
