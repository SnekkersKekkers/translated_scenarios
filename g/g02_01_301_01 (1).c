MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
VoicePlay("G020130101_01_000");
MsgDisp("Kazama","Each one is only a faint light, but with
this many together, it packs a punch.");
MsgDisp("主人公","Yeah, it's like it's one big animal.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G020130101_01_010");
MsgDisp("Kazama","Oh, I remember hearing something like
that. About how little fishes get together
to protect themselves.");
MsgDisp("主人公","Hahah, I think I heard that too.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020130101_01_020");
MsgDisp("Kazama","......It's been like that around you
recently too.");
MsgDisp("主人公","Huh?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020130101_01_030");
MsgDisp("Kazama","There are guys I don't really know
surrounding you on all sides. I guess I'm
saying, it's been kinda hard to get close.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020130101_01_040");
MsgDisp("Kazama","Well, I guess I could fix that by just
becoming one of them, but......");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020130101_01_050");
MsgDisp("Kazama","Do you consider me just a member of some
larger group? 'Cause I consider you
special.");
MsgDisp("主人公","You're important to me, ｛風真＊＊｝.
You're my one and only childhood friend.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020130101_01_060");
MsgDisp("Kazama","Urk......Yeah, that I am. ......Okay,
fine, I'll accept it.");
MsgDisp("主人公","Is something wrong?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("G020130101_01_070");
MsgDisp("Kazama","Nope, nothing's wrong at aaaall.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020130101_01_080");
MsgDisp("Kazama","Using 'childhood friend' is cheating......");
MsgDisp("主人公","(What is up with ｛風真＊＊｝?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
