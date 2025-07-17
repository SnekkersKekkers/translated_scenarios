MsgClose();
ChOpen(1,255,1,0,0,#1,#1,0,0);
VoicePlay("G020130100_01_000");
MsgDisp("Kazama","There are a lot of fireflies flying about,
huh?");
MsgDisp("主人公","Yeah.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020130100_01_010");
MsgDisp("Kazama","Especially around you.");
MsgDisp("主人公","Hehe, there really are.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020130100_01_020");
MsgDisp("Kazama","This isn't a laughing matter though?");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020130100_01_030");
MsgDisp("Kazama","It feels like there are more of them
lately. ...Well, one more. That's how
it seems to me anyways.");
MsgDisp("主人公","Umm, aren't we talking about fireflies?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020130100_01_040");
MsgDisp("Kazama","This is similar.
At school, it's always noisy around you.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020130100_01_050");
MsgDisp("Kazama","Normally I think I'm special, so I endure
it...but truthfully, I'm impatient.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020130100_01_060");
MsgDisp("Kazama","Listen, this is my declaration.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020130100_01_070");
MsgDisp("Kazama","It doesn't matter what firefly is around
you, in the end, the one to stand by your
side is going to be me.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020130100_01_080");
MsgDisp("Kazama","That's the one thing I won't surrender.");
MsgDisp("主人公","(｛風真＊＊｝, your face is really
serious...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
