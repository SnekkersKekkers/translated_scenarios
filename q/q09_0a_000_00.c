MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(1,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(2,254,3,0,4,#1,#1,0,2,0,30);
VoiceEVSPlay(1);
VoicePlay("Q090A00000_01_000");
MsgDisp("Kazama","｛主人公｝, good morning.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("Q090A00000_02_000");
MsgDisp("Sassa","Yo, good morning.");
MsgDisp("主人公","Good morning!
｛風真＊＊｝, ｛颯砂＊＊｝, how early.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("Q090A00000_01_010");
MsgDisp("Kazama","It's business as usual for me, but Sassa
said he went running this morning.");
MsgDisp("主人公","Eeh∋");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("Q090A00000_02_010");
MsgDisp("Sassa","Don't be so surprised.
For me, it would be weird not to.");
MsgDisp("主人公","Did the teachers not get angry?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("Q090A00000_02_020");
MsgDisp("Sassa","I was fine.
I went jogging around the hotel and
Mikage-sensei ran alongside me.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("Q090A00000_01_020");
MsgDisp("Kazama","Then you'd be fine for sure.
As expected of Mikage-sensei.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("Q090A00000_02_030");
MsgDisp("Sassa","Oh, huh.
That's why he accompanied me.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q090A00000_01_030");
MsgDisp("Kazama","I'm sure Mikage-sensei is tired now.");
MsgDisp("主人公","Hehe, surely.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
VoicePlay("Q090A00000_02_040");
MsgDisp("Sassa","Maybe it was a bad idea?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("Q090A00000_01_040");
MsgDisp("Kazama","Who knows?
Anyways, let's go.");
MsgDisp("主人公","Yeah!
Oh, of course.
We need to buy a souvenir for ｛氷室＊＊｝.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("Q090A00000_02_050");
MsgDisp("Sassa","Let's do so.
If we didn't he'd scold us forever.");
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
ChClose(2,0,0);
