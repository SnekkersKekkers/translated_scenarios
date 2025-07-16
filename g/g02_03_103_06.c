MsgClose();
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
ChLayout(1);
VoicePlay("G020310306_03_000");
MsgDisp("Honda","I would have liked it if there had been a
place like this firefly habitat when I was
little.");
MsgDisp("主人公","｛本多＊＊｝ would you have
studied the fireflies?");
ChSet(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("G020310306_03_010");
MsgDisp("Honda","Yep yep.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("G020310306_03_020");
MsgDisp("Honda","Ah, maybe not.
When I was little, I was always holed up
reading books.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("G020310306_03_030");
MsgDisp("Honda","Hey, remember what I showed you before?
The Ammonite-kun in marble.");
MsgDisp("主人公","Yeah.
I was surprised to find a fossil in the
middle of the city.");
ChMouth(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("G020310306_03_040");
MsgDisp("Honda","Right, right. My mom used to tell me:
\"Don't just read about it, go see it in
person and touch to learn.\" That's when I
started going outside.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("G020310306_03_050");
MsgDisp("Honda","I wonder how my mom would have introduced
this place to little me.");
MsgDisp("主人公","I'm sure she would have taught you in a
way that sparked your interest.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("G020310306_03_060");
MsgDisp("Honda","So, how would you introduce it?
To get your own child interested in going
outside.");
MsgDisp("主人公","Eh?");
ChMotion(3,4,1);
VoicePlay("G020310306_03_070");
MsgDisp("Honda","Pretend I'm a child and show me.");
MsgDisp("主人公","Even if you say that so suddenly......");
ChSet(3,3);
VoicePlay("G020310306_03_080");
MsgDisp("Honda","Then, it's homework.
Tell me next time, okay?");
MsgDisp("主人公","(Somewhat, ｛本多＊＊｝ is like a
spoiled kid......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
