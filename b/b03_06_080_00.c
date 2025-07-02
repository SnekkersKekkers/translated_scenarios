BGOpen("fp000",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030608000_06_000");
MsgDisp("Himuro","I hope that there's no one too excited
around here.");
MsgDisp("主人公","I hope ｛氷室＊＊｝ can be excited
too.");
MsgDispSksp(1,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B030608000_06_010");
MsgDisp("Himuro","......Huh?
If you say stupid things, I'll leave
you here.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6,0,30);
SEWait();
MsgDispSksp(0);
MsgDisp("主人公","Wait up!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
