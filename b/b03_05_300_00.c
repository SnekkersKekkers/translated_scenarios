BGOpen("bh500",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B030530000_05_000");
MsgDisp("Hiiragi","I'm not sure why, but this feels a bit scary.");
MsgDisp("主人公","Eh, what's wrong?");
ChEye(5,2);
ChMotion(5,2);
ChEyeOpenLevel(5,8);
VoicePlay("B030530000_05_010");
MsgDisp("Hiiragi","At school and in the theater, I always have a
role to play.
...But right now, I'm nobody.");
ChEye(5,0);
ChMotion(5,3);
ChEyeOpenLevel(5,#1);
VoicePlay("B030530000_05_020");
MsgDisp("Hiiragi","Haa...
I'm not sure I can be a proper host, but
please come in.");
MsgDispSksp(1,0);
MsgDisp("主人公","Okay, sorry for intruding.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
