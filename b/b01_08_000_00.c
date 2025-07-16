BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm running late.
｛大地＊＊｝ is...
Here!)");
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,253,4,0,0,#1,#1,0,0);
MsgDisp("主人公","I'm sorry, did you wait?");
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("B010800000_08_000");
MsgDisp("Shirahane","Ah...");
MsgDisp("主人公","I'm really sorry!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B010800000_08_010");
MsgDisp("Shirahane","It's okay.
As soon as I saw ya running towards me, I
felt real happy.");
MsgDispSksp(1,0);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
ChEyeOpenLevel(8,0);
VoicePlay("B010800000_08_020");
MsgDisp("Shirahane","Heheh!
I'm really glad ya came.");
MsgDispSksp(0);
