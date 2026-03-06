BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm running late...
｛Mikage＊＊｝ is...
Already here!)");
MsgDisp("主人公","I'm sorry for being late!");
BGMPlay("BGM_C07_MIKAGE_A",0.01);
MsgClose();
ChOpen(7,253,0,0,0,#1,#1,0,0);
VoicePlay("B010700000_07_000");
MsgDisp("Mikage","Looks like there's no problem here.
We're perfectly okay.");
MsgDisp("主人公","Sorry...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B010700000_07_010");
MsgDisp("Mikage","Be as late as you want.
But don't make a habit of apologizing.");
MsgDispSksp(1,0);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("B010700000_07_020");
MsgDisp("Mikage","Alright, time to head out!");
MsgDispSksp(0);
