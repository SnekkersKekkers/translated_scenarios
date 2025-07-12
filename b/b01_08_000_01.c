BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛大地＊＊｝ isn't here...)");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,253,2,2,0,#1,#1,0,0);
VoicePlay("B010800001_08_000");
MsgDisp("Shirahane","You were waiting?
... Did I keep ya waiting long?");
MsgDisp("主人公","Yeah, just a little?");
ChEye(8,2);
ChMouth(8,1);
ChMotion(8,1,1);
ChCheek(8,5);
VoicePlay("B010800001_08_010");
MsgDisp("Shirahane","Please forgive me!
I'm not tryin' to make excuses, but I...");
MsgDisp("主人公","Jeez, ｛大地＊＊｝.
It's really okay.");
MsgDispSksp(1,0);
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0,1);
VoicePlay("B010800001_08_020");
MsgDisp("Shirahane","You're a seriously nice girl...
I'm about to start bawlin'.");
MsgDispSksp(0);
