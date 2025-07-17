BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(2,254,3,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("F110210000_02_000");
MsgDisp("Sassa","｛主人公｝, are you having fun?");
MsgDisp("主人公","Yep!
What about you, ｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("F110210000_02_010");
MsgDisp("Sassa","I'm taking it easy this festival.
There's no winning, losing, or time
pressure.");
MsgDisp("主人公","Haha.
Is it not enough for ｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F110210000_02_020");
MsgDisp("Sassa","I don't think that's it, but...");
ChMouth(2,2);
VoicePlay("F110210000_42_000");
MsgDisp("Male Customer","Um, are you Sassa Nozomu from the track
team?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("F110210000_02_030");
MsgDisp("Sassa","Huh?
Uh, yeah.");
VoicePlay("F110210000_42_010");
MsgDisp("Male Customer","I'm in track and field, too.
How'd you do it?
How'd you set that record?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("F110210000_02_040");
MsgDisp("Sassa","Uh, I'm not sure how to say it...
Well, what's your specialty?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoiceEVSPlay(2);
VoicePlay("F110210000_02_050");
MsgDisp("Sassa","｛主人公｝, I'll go talk to them
over there.
Afterwards, should we go try the food?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(Hehe, guess ｛颯砂＊＊｝ really
will teach him.)");
MsgClose();
ScrFadeOut(0);
