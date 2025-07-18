ScrFadeIn(0);
VoicePlay("P840500002_39_000");
MsgDisp("Male Student","Excuse me!
Do you have any cardboard boxes?");
MsgDisp("主人公","Yes, in this rental notebook, please write
your year, class, and number of items
taken. Then press this counter machine for
the number of items.");
VoicePlay("P840500002_39_010");
MsgDisp("Male Student","OK!
I'll press three times.");
SEPlay("EV_SE_757");
SEWait();
SEPlay("EV_SE_757");
SEWait();
SEPlay("EV_SE_757");
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(5,254,4,3,3,#1,#1,0,0);
VoicePlay("P840500002_05_000");
MsgDisp("Hiiragi","Using both the management notebook and the
counter was a good idea.");
MsgDisp("主人公","Yeah, I'm glad.
Using this, we can see the inventory
status.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P840500002_05_010");
MsgDisp("Hiiragi","Seems like this will become the standard
for the materials manager next year and
beyond.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("P840500002_05_020");
MsgDisp("Hiiragi","I wish I could organize things as well as
you do.");
MsgDisp("主人公","(Yay!
I was praised by ｛柊＊＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
