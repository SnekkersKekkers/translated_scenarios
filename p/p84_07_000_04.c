ScrFadeIn(0);
VoicePlay("P840700004_41_000");
MsgDisp("Male Student","Sorry, I mistook that for our class's
supplies.");
VoicePlay("P840700004_48_000");
MsgDisp("School Girl","No that was because ours was put in that
space too.");
MsgDisp("主人公","Phew...
Then, please take care.");
VoicePlay("P840700004_41_020");
MsgDisp("Male Student","I'm sorry tp have caused you troubleー.");
MsgDisp("主人公","(I'm glad it ended without any
problems...)");
VoiceEVSPlay(7);
VoicePlay("P840700004_07_000");
MsgDisp("Mikage?","｛主人公｝, That was excellent.");
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P840700004_07_010");
MsgDisp("Mikage","That was considerate.
As expected of a third year veteran.");
MsgDisp("主人公","Ah, ｛御影＊＊｝. You saw that?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P840700004_07_020");
MsgDisp("Mikage","With that, it feels like the case is
closed, doesn't it?");
MsgDisp("主人公","Hehe, that's right.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P840700004_07_030");
MsgDisp("Mikage","The way your confidence is born from your
tenacity is what made this happen.
I can't help but feel proud.");
MsgDisp("主人公","(Hehe, I was praised! This is the results
of seriously giving it my best in the
student council for three years.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
