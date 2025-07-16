BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(The book I wanted was sold out before.
......let's try looking for it for a bit.)");
VoiceEVSPlay(3);
VoicePlay("G110300100_03_000");
MsgDisp("Honda?","｛主人公｝, welcome!");
MsgDisp("主人公","Ah, ｛本多＊＊｝.
You're working today, huh?");
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,0,0,0,#1,#1,0,0);
VoicePlay("G110300100_03_010");
MsgDisp("Honda","Oh, there aren't many customers today, so
it's a bit more relaxed.
How about you?");
MsgDisp("主人公","Yes, well, uh——");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("G110300100_03_020");
MsgDisp("Honda","Ah, wait a second!
You don't need to tell me.
Come here.");
SEPlay("EV_SE_504",0,0.6);
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_856",0,0.6);
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgClose();
BGOpen("ev003",0);
ChOpen(3,100,0,0,1,#1,#1,0,0);
SEWait();
ScrFadeIn(0);
VoicePlay("G110300100_03_030");
MsgDisp("Honda","Is this it?
The book you were looking for before?");
MsgDisp("主人公","Yeah.
That's right.");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110300100_03_040");
MsgDisp("Honda","Yep yep, we were talking about it at work,
right?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G110300100_03_050");
MsgDisp("Honda","Ah, but it wasn't delivered.
I just found it crammed in a weird shelf.");
MsgDisp("主人公","I see.
You did a good job of finding it, huh?");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300100_03_060");
MsgDisp("Honda","Yes, it was a change of perspective!
I thought about what it would be like to
look for this book if I were a customer");
VoicePlay("G110300100_03_070");
MsgDisp("Honda","Then I found it immediately.");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300100_03_080");
MsgDisp("Honda","After picking it up once, the customer put
it in what he thought was the correct
place.");
MsgDisp("主人公","(As expected of ｛本多＊＊｝!
What a brilliant deduction......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
