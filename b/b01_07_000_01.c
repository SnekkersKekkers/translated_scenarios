BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛御影＊＊｝...
Doesn't seem to be here yet.)");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChPosition(7,0);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
MsgClose();
ChOpen(7,253,0,2,0,#1,#1,0,0);
VoicePlay("B010700001_07_000");
MsgDisp("Mikage","Sorry, sorry.
Look at how sorry I am!");
MsgDisp("主人公","I'm not seeing much remorse at all here...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B010700001_07_010");
MsgDisp("Mikage","I'm seriously, super sorry!
... How was that?");
MsgDisp("主人公","Hehe, jeez.
That's kind of sly, you know.");
MsgDispSksp(1,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B010700001_07_020");
MsgDisp("Mikage","Really now?
In any case, let's go.
We can make up for the lost time.");
MsgDispSksp(0);
