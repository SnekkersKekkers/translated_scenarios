ScrFadeIn(0);
VoicePlay("P840700000_48_000");
MsgDisp("School Girl","Thank you for your hard work～
It seems like the guests praised you.
Isn't that good?");
MsgDisp("主人公","Really?
I'm glad.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P840700000_07_000");
MsgDisp("Mikage","Oh, 
that seems like a content expression.");
MsgDisp("主人公","Ah, ｛御影＊＊｝.
I heard that the guests praised me...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P840700000_07_010");
MsgDisp("Mikage","I already knew that.
Haha, good rumors spread quick.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P840700000_07_020");
MsgDisp("Mikage","On their way home, 
the guests stopped by the staff room 
to praise you.");
MsgDisp("主人公","So that's how it is.
I'm happy.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P840700000_07_030");
MsgDisp("Mikage","I was also part of it.");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P840700000_07_040");
MsgDisp("Mikage","I was told it was a result 
of your homeroom teacher's teachings.
Even though I didn't do anything.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P840700000_07_050");
MsgDisp("Mikage","Thanks to you I was praised.
Thank you.");
MsgDisp("主人公","(Yay, everyone praised me!
It seems it was worth giving 
my best in the preparations.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
