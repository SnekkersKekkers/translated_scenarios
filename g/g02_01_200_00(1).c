MsgClose();
ChOpen(1,255,0,4,2,-1,-1,0,0);
VoicePlay("G020120000_01_000");
MsgDisp("Kazama","You know, the fact that you're
doing this with me means it's
a possibility, right?");
MsgDisp("主人公","Huh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020120000_01_010");
MsgDisp("Kazama","I was trying not to let it
get to me but... it's no use.
That person irritated me.");
ChEye(1,1);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120000_01_020");
MsgDisp("Kazama","I just wonder why it's not me.");
MsgDisp("主人公","｛風真＊＊｝?");
ChMotion(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
VoicePlay("G020120000_01_030");
MsgDisp("Kazama","...It's nothing.
But I'm serious.");
MsgDisp("主人公","(｛風真＊＊｝ feels different today
than usual...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
