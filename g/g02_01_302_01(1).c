MsgClose();
ChOpen(1,255,1,0,0,#1,#1,0,0);
VoicePlay("G020130201_01_000");
MsgDisp("Kazama","You really have to see this scenery for
yourself...
It's different to just hearing about it.");
MsgDisp("主人公","Yeah, it's even more beautiful than the
rumours say.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020130201_01_010");
MsgDisp("Kazama","The real assessment is seeing and
confirming it with your own eyes.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020130201_01_020");
MsgDisp("Kazama","But for that, you need to train your eyes
first, or it's meaningless.");
MsgDisp("主人公","With ｛風真＊＊｝'s eyes there's bound to be
no mistakes, huh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020130201_01_030");
MsgDisp("Kazama","Hey, you don't get to say that.");
MsgDisp("主人公","Eh?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020130201_01_040");
MsgDisp("Kazama","Don't 'eh' me.
The first thing these eyes chose was you.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChMouthOpenLevel(1,0);
VoicePlay("G020130201_01_050");
MsgDisp("Kazama","......");
MsgDisp("主人公","Umm...");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,4);
ChCheek(1,5);
VoicePlay("G020130201_01_060");
MsgDisp("Kazama","It's just as you say.
My eyes don't make mistakes.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020130201_01_070");
MsgDisp("Kazama","Ten years ago I already had a good eye.");
MsgDisp("主人公","Y-Yeah...?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChCheek(1,0);
VoicePlay("G020130201_01_080");
MsgDisp("Kazama","What's with that troubled face.
Well, it's fine if I'm the only one who
can perceive it.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020130201_01_090");
MsgDisp("Kazama","It's fine if no one understands.
As long as I do.");
MsgDisp("主人公","(｛風真＊＊｝...
I'm happy, but embarrassed.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
