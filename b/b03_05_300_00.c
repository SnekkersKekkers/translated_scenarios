BGOpen("bh500",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B030530000_05_000");
MsgDisp("Hiiragi","I'm not sure why, but this feels a bit
scary.");
MsgDisp("主人公","Eh, what's wrong?");
ChEye(5,2);
ChMotion(5,2);
ChEyeOpenLevel(5,8);
VoicePlay("B030530000_05_010");
MsgDisp("Hiiragi","At school and in the theater, I always
have a role to perform. ...But here,
there's nothing in particular.");
ChEye(5,0);
ChMotion(5,3);
ChEyeOpenLevel(5,#1);
VoicePlay("B030530000_05_020");
MsgDisp("Hiiragi","Huh...
I don't know if I can properly entertain
you today, but please come in.");
MsgDispSksp(1,0);
MsgDisp("主人公","Okay, sorry for intruding.");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
