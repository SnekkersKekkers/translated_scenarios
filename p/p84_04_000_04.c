ScrFadeIn(0);
MsgDisp("主人公","No one was injured.
Has the issue with the order 
of things been settled?");
VoicePlay("P840400004_39_000");
MsgDisp("Male Student A","Yes, we're sorry.");
VoicePlay("P840400004_41_010");
MsgDisp("Male Student B","We also panicked and 
caused you trouble....
We're very sorry!");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0,0,60);
MsgDisp("主人公","Phew... seems like one matter's been
resolved.");
ChMotion(4,1,1);
VoicePlay("P840400004_04_000");
MsgDisp("Nanatsumori","I see...
You're good at persuasion.");
MsgDisp("主人公","Am I?");
ChEye(4,4);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("P840400004_04_010");
MsgDisp("Nanatsumori","How should I say itーI guess...
It feels like a mother's lecture?");
MsgDisp("主人公","Eh?");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P840400004_04_020");
MsgDisp("Nanatsumori","Of course it's a good meaning.
As expected.");
MsgDisp("主人公","(Is that praise...? I'm glad I was able to
show the results of my hard work over the
past three years!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
