BGOpen("sc501",0);
ScrFadeIn(0);
MsgDisp("主人公","(Lunch break is going to end soon.
I have to head back to the classroom...)");
VoiceEVSPlay(3);
VoicePlay("F100310001_03_000");
MsgDisp("Honda?","｛主人公｝. This way, this way.");
MsgDisp("主人公","Eh? ｛本多＊＊｝?");
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,5,3,3,#1,#1,0,0);
VoicePlay("F100310001_03_010");
MsgDisp("Honda","Hey, look!");
MsgDisp("主人公","Ah are you talking about the umbrella
that's always there?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100310001_03_020");
MsgDisp("Honda","Right right, it was there too today?
But, I saw it just now.");
MsgDisp("主人公","Eh, the owner?");
ChSet(3,3);
VoicePlay("F100310001_03_030");
MsgDisp("Honda","Right right, it seems like it's a girl in
our year.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("F100310001_03_040");
MsgDisp("Honda","She keeps her umbrella there, and if she
leaves it there for a week, it gets put
away, so she takes it home once a week.");
MsgDisp("主人公","So that's it.
So the mystery is solved.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F100310001_03_050");
MsgDisp("Honda","Why?
There are two umbrellas after all?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100310001_03_060");
MsgDisp("Honda","I've figured out the rule for the other
one, so I'll observe it for a while and
make a hypothesis.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(Rule? Hypothesis? ｛本多＊＊｝ is having
lots of fun.)");
MsgClose();
ScrFadeOut(0,0);
