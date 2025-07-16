ScrFadeIn(0);
VoicePlay("P840700005_41_000");
MsgDisp("Male Student","Sorry, I mistook that for our class's
supplies.");
VoicePlay("P840700005_48_000");
MsgDisp("School Girl","No that was because ours was put in that
space too.");
MsgDisp("主人公","I'm sorry.
Seems like management's directions were
wrong.");
VoicePlay("P840700005_41_020");
MsgDisp("Male Student","Ehh? is that right.
Get your act together, student council.");
MsgDisp("主人公","(I'm glad it ended peacefully, but I
caused confusion for everyone.)");
VoiceEVSPlay(7);
VoicePlay("P840700005_07_000");
MsgDisp("Mikage?","｛主人公｝, good work.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P840700005_07_010");
MsgDisp("Mikage","It seems like it was difficult to the end
huh?");
MsgDisp("主人公","Ah, ｛御影＊＊｝...
Our instructions were wrong, so we caused
some trouble.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P840700005_07_020");
MsgDisp("Mikage","I see.
But it wasn't a great deal of trouble?
Everyone thanks you guys.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P840700005_07_030");
MsgDisp("Mikage","A little mistake will turn into a good
memory.");
MsgDisp("主人公","Yes....");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P840700005_07_040");
MsgDisp("Mikage","You should think of the mistake as part of
your cultural festival memories.");
MsgDisp("主人公","(Uuugh...
It was my last cultural festival, so I
wanted to do it perfectly...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
